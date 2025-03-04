#include "readpoem.h"
#include "ui_readpoem.h"
#include "dbmanager.h"

ReadPoems::ReadPoems(int userId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReadPoems),
    m_userId(userId)
{
    ui->setupUi(this);
    
    // Load poems initially with all filter
    loadPoems();
    
    // Connect combobox filter with category combobox
    connect(ui->comboBox_filter, &QComboBox::currentTextChanged, [this](const QString &text) {
        if (text == "Category") {
            ui->comboBox_category->setEnabled(true);
        } else {
            ui->comboBox_category->setEnabled(false);
        }
    });
    
    // Connect category combobox to reload poems
    connect(ui->comboBox_category, &QComboBox::currentTextChanged, [this](const QString &category) {
        if (ui->comboBox_filter->currentText() == "Category") {
            loadPoems("Category", category);
        }
    });
}

ReadPoems::~ReadPoems()
{
    delete ui;
}

void ReadPoems::loadPoems(const QString &filterType, const QString &category)
{
    ui->listWidget_poems->clear();
    
    QString queryStr;
    QSqlQuery query;
    
    if (filterType == "All") {
        queryStr = "SELECT p.id, p.title, p.category, u.username, p.date_created "
                  "FROM poems p JOIN users u ON p.user_id = u.id "
                  "ORDER BY p.date_created DESC";
        query.prepare(queryStr);
    } else if (filterType == "Category") {
        queryStr = "SELECT p.id, p.title, p.category, u.username, p.date_created "
                  "FROM poems p JOIN users u ON p.user_id = u.id "
                  "WHERE p.category = :category "
                  "ORDER BY p.date_created DESC";
        query.prepare(queryStr);
        query.bindValue(":category", category);
    } else if (filterType == "Author") {
        queryStr = "SELECT p.id, p.title, p.category, u.username, p.date_created "
                  "FROM poems p JOIN users u ON p.user_id = u.id "
                  "WHERE p.user_id = :user_id "
                  "ORDER BY p.date_created DESC";
        query.prepare(queryStr);
        query.bindValue(":user_id", m_userId);
    } else if (filterType == "Recent") {
        queryStr = "SELECT p.id, p.title, p.category, u.username, p.date_created "
                  "FROM poems p JOIN users u ON p.user_id = u.id "
                  "ORDER BY p.date_created DESC LIMIT 10";
        query.prepare(queryStr);
    }
    
    if (query.exec()) {
        while (query.next()) {
            int poemId = query.value(0).toInt();
            QString title = query.value(1).toString();
            QString category = query.value(2).toString();
            QString author = query.value(3).toString();
            QString dateCreated = query.value(4).toString();
            
            // Format: "Title [Category] - by Author (Date)"
            QString displayText = QString("%1 [%2] - by %3 (%4)")
                                .arg(title)
                                .arg(category)
                                .arg(author)
                                .arg(dateCreated.split(" ").at(0)); // Just get the date part
            
            QListWidgetItem *item = new QListWidgetItem(displayText);
            item->setData(Qt::UserRole, poemId); // Store poem ID for retrieval
            ui->listWidget_poems->addItem(item);
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to load poems: " + query.lastError().text());
    }
}

void ReadPoems::on_pushButton_viewPoem_clicked()
{
    QListWidgetItem *currentItem = ui->listWidget_poems->currentItem();
    if (!currentItem) {
        QMessageBox::information(this, "Selection Required", "Please select a poem to view");
        return;
    }
    
    int poemId = currentItem->data(Qt::UserRole).toInt();
    ViewPoem *viewPoem = new ViewPoem(poemId, this);
    viewPoem->exec();
}

void ReadPoems::on_pushButton_refresh_clicked()
{
    QString filterType = ui->comboBox_filter->currentText();
    QString category = ui->comboBox_category->currentText();
    
    if (filterType == "Category") {
        loadPoems(filterType, category);
    } else {
        loadPoems(filterType);
    }
}

void ReadPoems::on_pushButton_back_clicked()
{
    this->close();
}

void ReadPoems::on_comboBox_filter_currentIndexChanged(int index)
{
    QString filterType = ui->comboBox_filter->currentText();
    
    if (filterType == "Category") {
        ui->comboBox_category->setEnabled(true);
        loadPoems(filterType, ui->comboBox_category->currentText());
    } else {
        ui->comboBox_category->setEnabled(false);
        loadPoems(filterType);
    }
}

void ReadPoems::on_listWidget_poems_itemDoubleClicked(QListWidgetItem *item)
{
    if (item) {
        int poemId = item->data(Qt::UserRole).toInt();
        ViewPoem *viewPoem = new ViewPoem(poemId, this);
        viewPoem->exec();
    }
}
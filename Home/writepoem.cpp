#include "writepoem.h"
#include "ui_writepoem.h"
#include "dbmanager.h"

WritePoem::WritePoem(int userId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WritePoem),
    m_userId(userId)
{
    ui->setupUi(this);
}

WritePoem::~WritePoem()
{
    delete ui;
}

void WritePoem::on_pushButton_submit_clicked()
{
    QString title = ui->lineEdit_poemTitle->text().trimmed();
    QString content = ui->textEdit_poemContent->toPlainText().trimmed();
    QString category = ui->comboBox_category->currentText();
    
    if (title.isEmpty()) {
        QMessageBox::warning(this, "Validation Error", "Please enter a title for your poem");
        return;
    }
    
    if (content.isEmpty()) {
        QMessageBox::warning(this, "Validation Error", "Please enter the content of your poem");
        return;
    }
    
    if (savePoem(title, content, category)) {
        QMessageBox::information(this, "Success", "Your poem has been saved successfully!");
        this->close();
    } else {
        QMessageBox::critical(this, "Error", "Failed to save your poem. Please try again.");
    }
}

void WritePoem::on_pushButton_clear_clicked()
{
    ui->lineEdit_poemTitle->clear();
    ui->textEdit_poemContent->clear();
    ui->comboBox_category->setCurrentIndex(0);
}

void WritePoem::on_pushButton_cancel_clicked()
{
    this->close();
}

bool WritePoem::savePoem(const QString &title, const QString &content, const QString &category)
{
    QSqlQuery query;
    query.prepare("INSERT INTO poems (user_id, title, content, category, date_created) "
                 "VALUES (:user_id, :title, :content, :category, :date_created)");
    query.bindValue(":user_id", m_userId);
    query.bindValue(":title", title);
    query.bindValue(":content", content);
    query.bindValue(":category", category);
    query.bindValue(":date_created", QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    
    return query.exec();
}
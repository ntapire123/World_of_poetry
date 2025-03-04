#include "editpoem.h"
#include "ui_editpoem.h"
#include "dbmanager.h"

Editpoem::Editpoem(int userId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Editpoem),
    m_userId(userId)
{
    ui->setupUi(this);
    
    // Disable editing until a poem is loaded
    ui->lineEdit_poemTitle->setEnabled(false);
    ui->comboBox_category->setEnabled(false);
    ui->textEdit_poemContent->setEnabled(false);
    ui->pushButton_update->setEnabled(false);
    ui->pushButton_delete->setEnabled(false);
    
    // Load user's poems into combobox
    loadUserPoems();
}

Editpoem::~Editpoem()
{
    delete ui;
}

void Editpoem::loadUserPoems()
{
    ui->comboBox_poemList->clear();
    m_poemIndexToIdMap.clear();
    
    QSqlQuery query;
    query.prepare("SELECT id, title FROM poems WHERE user_id = :user_id ORDER BY date_created DESC");
    query.bindValue(":user_id", m_userId);
    
    if (query.exec()) {
        int index = 0;
        while (query.next()) {
            int poemId = query.value(0).toInt();
            QString title = query.value(1).toString();
            
            ui->comboBox_poemList->addItem(title);
            m_poemIndexToIdMap[index++] = poemId;
        }
    } else {
        QMessageBox::warning(this, "Error", "Failed to load your poems: " + query.lastError().text());
    }
}

void Editpoem::on_pushButton_load_clicked()
{
    if (ui->comboBox_poemList->count() == 0) {
        QMessageBox::information(this, "No Poems", "You don't have any poems to edit");
        return;
    }
    
    int comboIndex = ui->comboBox_poemList->currentIndex();
    if (comboIndex < 0) {
        return;
    }
    
    int poemId = m_poemIndexToIdMap[comboIndex];
    
    QSqlQuery query;
    query.prepare("SELECT title, content, category FROM poems WHERE id = :id AND user_id = :user_id");
    query.bindValue(":id", poemId);
    query.bindValue(":user_id", m_userId);
    
    if (query.exec() && query.next()) {
        QString title = query.value(0).toString();
        QString content = query.value(1).toString();
        QString category = query.value(2).toString();
        
        ui->lineEdit_poemTitle->setText(title);
        ui->textEdit_poemContent->setText(content);
        
        // Set the category in combobox
        int categoryIndex = ui->comboBox_category->findText(category);
        if (categoryIndex >= 0) {
            ui->comboBox_category->setCurrentIndex(categoryIndex);
        }
        
        // Enable editing controls
        ui->lineEdit_poemTitle->setEnabled(true);
        ui->comboBox_category->setEnabled(true);
        ui->textEdit_poemContent->setEnabled(true);
        ui->pushButton_update->setEnabled(true);
        ui->pushButton_delete->setEnabled(true);
    } else {
        QMessageBox::warning(this, "Error", "Failed to load poem details: " + query.lastError().text());
    }
}

void Editpoem::on_pushButton_update_clicked()
{
    int comboIndex = ui->comboBox_poemList->currentIndex();
    if (comboIndex < 0) {
        return;
    }
    
    int poemId = m_poemIndexToIdMap[comboIndex];
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
    
    if (updatePoem(poemId, title, content, category)) {
        QMessageBox::information(this, "Success", "Your poem has been updated successfully!");
        
        // Reload poems list
        loadUserPoems();
        
        // Reset fields
        ui->lineEdit_poemTitle->clear();
        ui->textEdit_poemContent->clear();
        ui->comboBox_category->setCurrentIndex(0);
        
        // Disable editing controls
        ui->lineEdit_poemTitle->setEnabled(false);
        ui->comboBox_category->setEnabled(false);
        ui->textEdit_poemContent->setEnabled(false);
        ui->pushButton_update->setEnabled(false);
        ui->pushButton_delete->setEnabled(false);
    } else {
        QMessageBox::critical(this, "Error", "Failed to update your poem. Please try again.");
    }
}

void Editpoem::on_pushButton_delete_clicked()
{
    int comboIndex = ui->comboBox_poemList->currentIndex();
    if (comboIndex < 0) {
        return;
    }
    
    int poemId = m_poemIndexToIdMap[comboIndex];
    
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Delete", 
                                "Are you sure you want to delete this poem? This action cannot be undone.",
                                QMessageBox::Yes | QMessageBox::No);
    
    if (reply == QMessageBox::Yes) {
        if (deletePoem(poemId)) {
            QMessageBox::information(this, "Success", "Your poem has been deleted successfully!");
            
            // Reload poems list
            loadUserPoems();
            
            // Reset fields
            ui->lineEdit_poemTitle->clear();
            ui->textEdit_poemContent->clear();
            ui->comboBox_category->setCurrentIndex(0);
            
            // Disable editing controls
            ui->lineEdit_poemTitle->setEnabled(false);
            ui->comboBox_category->setEnabled(false);
            ui->textEdit_poemContent->setEnabled(false);
            ui->pushButton_update->setEnabled(false);
            ui->pushButton_delete->setEnabled(false);
        } else {
            QMessageBox::critical(this, "Error", "Failed to delete your poem. Please try again.");
        }
    }
}

void Editpoem::on_pushButton_cancel_clicked()
{
    this->close();
}

bool Editpoem::updatePoem(int poemId, const QString &title, const QString &content, const QString &category)
{
    QSqlQuery query;
    query.prepare("UPDATE poems SET title = :title, content = :content, category = :category "
                 "WHERE id = :id AND user_id = :user_id");
    query.bindValue(":title", title);
    query.bindValue(":content", content);
    query.bindValue(":category", category);
    query.bindValue(":id", poemId);
    query.bindValue(":user_id", m_userId);
    
    return query.exec();
}

bool Editpoem::deletePoem(int poemId)
{
    QSqlQuery query;
    query.prepare("DELETE FROM poems WHERE id = :id AND user_id = :user_id");
    query.bindValue(":id", poemId);
    query.bindValue(":user_id", m_userId);
    
    return query.exec();
}
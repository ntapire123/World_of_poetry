#include "viewpoem.h"
#include "ui_viewpoem.h"
#include <QDateTime>
#include "dbmanager.h"

ViewPoem::ViewPoem(int poemId, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewPoem),
    m_poemId(poemId)
{
    ui->setupUi(this);
    
    // Set window properties
    this->setWindowTitle("World of Poetry - View Poem");
    
    // Check database connection
    QSqlDatabase db;
    if (QSqlDatabase::contains("qt_sql_default_connection")) {
        // Use existing connection
        db = QSqlDatabase::database("qt_sql_default_connection");
    } else {
        // Create new connection
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("poetry.db");
        
        if (!db.open()) {
            QMessageBox::critical(this, "Database Error", "Could not connect to database: " + db.lastError().text());
            return;
        }
        
        // Create tables if they don't exist (for first run)
        QSqlQuery setupQuery(db);
        
        // Create users table if it doesn't exist
        setupQuery.exec("CREATE TABLE IF NOT EXISTS users ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "username TEXT UNIQUE NOT NULL, "
                   "password TEXT NOT NULL, "
                   "fullname TEXT NOT NULL, "
                   "email TEXT)");
                   
        // Create poems table if it doesn't exist
        setupQuery.exec("CREATE TABLE IF NOT EXISTS poems ("
                   "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                   "user_id INTEGER NOT NULL, "
                   "title TEXT NOT NULL, "
                   "content TEXT NOT NULL, "
                   "category TEXT, "
                   "date_created DATETIME DEFAULT CURRENT_TIMESTAMP, "
                   "FOREIGN KEY (user_id) REFERENCES users(id))");
    }
    
    // Load the poem details
    loadPoemDetails();
}

ViewPoem::~ViewPoem()
{
    delete ui;
}

void ViewPoem::loadPoemDetails()
{
    QSqlQuery query;
    query.prepare("SELECT p.title, p.content, p.category, u.username, p.date_created "
                  "FROM poems p JOIN users u ON p.user_id = u.id "
                  "WHERE p.id = :poem_id");
    query.bindValue(":poem_id", m_poemId);
    
    if (query.exec() && query.next()) {
        QString title = query.value(0).toString();
        QString content = query.value(1).toString();
        QString category = query.value(2).toString();
        QString author = query.value(3).toString();
        QString dateCreated = query.value(4).toString();
        
        // Format the date to be more readable if needed
        QDateTime dt = QDateTime::fromString(dateCreated, "yyyy-MM-dd hh:mm:ss");
        QString formattedDate = dt.isValid() ? dt.toString("MMMM d, yyyy - h:mm AP") : dateCreated;
        
        // Set the poem details to the UI components
        ui->label_poemTitle->setText(title);
        ui->label_category->setText("Category: " + category);
        ui->label_author->setText("By: " + author);
        ui->label_date->setText("Posted on: " + formattedDate);
        ui->textBrowser_poemContent->setText(content);

        
        // Make the text edit read-only
        ui->textBrowser_poemContent->setReadOnly(true);

    } else {
        QMessageBox::warning(this, "Error", "Failed to load poem details: " + query.lastError().text());
        this->close();
    }
}

void ViewPoem::on_pushButton_back_clicked()
{
    this->close();
}
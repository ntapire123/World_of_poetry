#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QString>
#include <QDebug>

class DbManager
{
public:
    static bool initializeDatabase() {
        QSqlDatabase db;
        
        if (QSqlDatabase::contains("qt_sql_default_connection")) {
            // Use existing connection
            db = QSqlDatabase::database("qt_sql_default_connection");
        } else {
            // Create new connection
            db = QSqlDatabase::addDatabase("QSQLITE");
            db.setDatabaseName("poetry.db");
            
            if (!db.open()) {
                qDebug() << "Error opening database:" << db.lastError().text();
                return false;
            }
            
            // Create users table if it doesn't exist
            QSqlQuery query;
            query.exec("CREATE TABLE IF NOT EXISTS users ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "username TEXT UNIQUE NOT NULL, "
                    "password TEXT NOT NULL, "
                    "fullname TEXT NOT NULL, "
                    "email TEXT)");
                    
            // Create poems table if it doesn't exist
            query.exec("CREATE TABLE IF NOT EXISTS poems ("
                    "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                    "user_id INTEGER NOT NULL, "
                    "title TEXT NOT NULL, "
                    "content TEXT NOT NULL, "
                    "category TEXT, "
                    "date_created DATETIME DEFAULT CURRENT_TIMESTAMP, "
                    "FOREIGN KEY (user_id) REFERENCES users(id))");
        }
        
        return true;
    }
};

#endif // DBMANAGER_H
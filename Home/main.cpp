#include "mainwindow.h"
#include "login.h"
#include "dbmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    // Initialize database
    if (!DbManager::initializeDatabase()) {
        return -1;

    }
    
    // Create and show login window instead of MainWindow
    login w;
    w.show();
    
    return a.exec();
}

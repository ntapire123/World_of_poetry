/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *titleLabel;
    QPushButton *registerButton;
    QPushButton *loginButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(900, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #2C3E50;\n"
"    color: white;\n"
"   "));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(250, 50, 400, 80));
        titleLabel->setStyleSheet(QString::fromUtf8("\n"
"      font-size: 28px;\n"
"      font-weight: bold;\n"
"      background: none;\n"
"      color: #ECF0F1;\n"
"     "));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);
        registerButton = new QPushButton(centralwidget);
        registerButton->setObjectName("registerButton");
        registerButton->setGeometry(QRect(200, 300, 220, 60));
        registerButton->setStyleSheet(QString::fromUtf8("\n"
"      background-color: #1ABC9C;\n"
"      font-size: 18px;\n"
"      font-weight: bold;\n"
"      color: white;\n"
"      border-radius: 10px;\n"
"     "));
        loginButton = new QPushButton(centralwidget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(500, 300, 220, 60));
        loginButton->setStyleSheet(QString::fromUtf8("\n"
"      background-color: #3498DB;\n"
"      font-size: 18px;\n"
"      font-weight: bold;\n"
"      color: white;\n"
"      border-radius: 10px;\n"
"     "));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 900, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Poetry Hub", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "Welcome to Poetry Hub", nullptr));
        registerButton->setText(QCoreApplication::translate("MainWindow", "Create an Account", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

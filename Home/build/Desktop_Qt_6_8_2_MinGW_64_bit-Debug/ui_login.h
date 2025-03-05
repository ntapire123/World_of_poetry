/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_login;
    QPushButton *pushButton_register;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(400, 300);
        login->setStyleSheet(QString::fromUtf8("\n"
" color: rgb(0, 32, 63);\n"
"\n"
"background-image: url(:/img/images/Old Book Cover Paper Pages Textures Texture Antique Background Photo And Picture For Free Download - Pngtree.jpeg);\n"
"\n"
"  font-family: \"Moon Dance\", cursive;\n"
"  font-weight: 400;\n"
"  font-style: normal;\n"
""));
        verticalLayout = new QVBoxLayout(login);
        verticalLayout->setObjectName("verticalLayout");
        label_title = new QLabel(login);
        label_title->setObjectName("label_title");
        QFont font;
        font.setFamilies({QString::fromUtf8("Moon Dance")});
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        label_title->setFont(font);
        label_title->setStyleSheet(QString::fromUtf8("background-color: rgb(173, 239, 209);\n"
" color: rgb(0, 32, 63);\n"
""));
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_title);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(login);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8(" font-family: \"Moon Dance\", cursive;\n"
"  font-weight: 400;\n"
"  font-style: normal;"));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName("formLayout");
        label_username = new QLabel(widget);
        label_username->setObjectName("label_username");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_username);

        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName("lineEdit_username");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_username);

        label_password = new QLabel(widget);
        label_password->setObjectName("label_password");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_password);

        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_password);


        verticalLayout->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_login = new QPushButton(login);
        pushButton_login->setObjectName("pushButton_login");

        horizontalLayout->addWidget(pushButton_login);

        pushButton_register = new QPushButton(login);
        pushButton_register->setObjectName("pushButton_register");

        horizontalLayout->addWidget(pushButton_register);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "World of Poetry - Login", nullptr));
        label_title->setText(QCoreApplication::translate("login", "Welcome to World of Poetry", nullptr));
        label_username->setText(QCoreApplication::translate("login", "Username:", nullptr));
        label_password->setText(QCoreApplication::translate("login", "Password:", nullptr));
        pushButton_login->setText(QCoreApplication::translate("login", "Login", nullptr));
        pushButton_register->setText(QCoreApplication::translate("login", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QFormLayout *formLayout;
    QLabel *label_email;
    QLineEdit *lineEdit_email;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_login;
    QLabel *label_register;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(400, 300);
        verticalLayout = new QVBoxLayout(Login);
        verticalLayout->setObjectName("verticalLayout");
        label_title = new QLabel(Login);
        label_title->setObjectName("label_title");
        label_title->setAlignment(Qt::AlignCenter);
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        label_title->setFont(font);

        verticalLayout->addWidget(label_title);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formLayout->setLabelAlignment(Qt::AlignLeft);
        label_email = new QLabel(Login);
        label_email->setObjectName("label_email");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_email);

        lineEdit_email = new QLineEdit(Login);
        lineEdit_email->setObjectName("lineEdit_email");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_email);

        label_password = new QLabel(Login);
        label_password->setObjectName("label_password");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_password);

        lineEdit_password = new QLineEdit(Login);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_password);


        verticalLayout->addLayout(formLayout);

        pushButton_login = new QPushButton(Login);
        pushButton_login->setObjectName("pushButton_login");

        verticalLayout->addWidget(pushButton_login);

        label_register = new QLabel(Login);
        label_register->setObjectName("label_register");
        label_register->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_register);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label_title->setText(QCoreApplication::translate("Login", "Login to Poetry App", nullptr));
        label_email->setText(QCoreApplication::translate("Login", "Email:", nullptr));
        label_password->setText(QCoreApplication::translate("Login", "Password:", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Login", "Login", nullptr));
        label_register->setText(QCoreApplication::translate("Login", "Don't have an account? Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H

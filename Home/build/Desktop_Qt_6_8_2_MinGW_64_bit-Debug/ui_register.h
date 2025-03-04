/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

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

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout;
    QLabel *label_fullname;
    QLineEdit *lineEdit_fullname;
    QLabel *label_email;
    QLineEdit *lineEdit_email;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QLabel *label_confirmPassword;
    QLineEdit *lineEdit_confirmPassword;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_register;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(400, 350);
        verticalLayout = new QVBoxLayout(Register);
        verticalLayout->setObjectName("verticalLayout");
        label_title = new QLabel(Register);
        label_title->setObjectName("label_title");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_title);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_fullname = new QLabel(Register);
        label_fullname->setObjectName("label_fullname");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_fullname);

        lineEdit_fullname = new QLineEdit(Register);
        lineEdit_fullname->setObjectName("lineEdit_fullname");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_fullname);

        label_email = new QLabel(Register);
        label_email->setObjectName("label_email");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_email);

        lineEdit_email = new QLineEdit(Register);
        lineEdit_email->setObjectName("lineEdit_email");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_email);

        label_username = new QLabel(Register);
        label_username->setObjectName("label_username");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_username);

        lineEdit_username = new QLineEdit(Register);
        lineEdit_username->setObjectName("lineEdit_username");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_username);

        label_password = new QLabel(Register);
        label_password->setObjectName("label_password");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_password);

        lineEdit_password = new QLineEdit(Register);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_password);

        label_confirmPassword = new QLabel(Register);
        label_confirmPassword->setObjectName("label_confirmPassword");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_confirmPassword);

        lineEdit_confirmPassword = new QLineEdit(Register);
        lineEdit_confirmPassword->setObjectName("lineEdit_confirmPassword");
        lineEdit_confirmPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_confirmPassword);


        verticalLayout->addLayout(formLayout);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_register = new QPushButton(Register);
        pushButton_register->setObjectName("pushButton_register");

        horizontalLayout->addWidget(pushButton_register);

        pushButton_cancel = new QPushButton(Register);
        pushButton_cancel->setObjectName("pushButton_cancel");

        horizontalLayout->addWidget(pushButton_cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "World of Poetry - Register", nullptr));
        label_title->setText(QCoreApplication::translate("Register", "Create New Account", nullptr));
        label_fullname->setText(QCoreApplication::translate("Register", "Full Name:", nullptr));
        label_email->setText(QCoreApplication::translate("Register", "Email:", nullptr));
        label_username->setText(QCoreApplication::translate("Register", "Username:", nullptr));
        label_password->setText(QCoreApplication::translate("Register", "Password:", nullptr));
        label_confirmPassword->setText(QCoreApplication::translate("Register", "Confirm Password:", nullptr));
        pushButton_register->setText(QCoreApplication::translate("Register", "Register", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("Register", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H

/********************************************************************************
** Form generated from reading UI file 'writepoem.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITEPOEM_H
#define UI_WRITEPOEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WritePoem
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QFormLayout *formLayout;
    QLabel *label_poemTitle;
    QLineEdit *lineEdit_poemTitle;
    QLabel *label_category;
    QComboBox *comboBox_category;
    QLabel *label_content;
    QTextEdit *textEdit_poemContent;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_submit;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *WritePoem)
    {
        if (WritePoem->objectName().isEmpty())
            WritePoem->setObjectName("WritePoem");
        WritePoem->resize(600, 500);
        WritePoem->setStyleSheet(QString::fromUtf8("\n"
" color: rgb(0, 32, 63);\n"
"\n"
"\n"
"background-image: url(:/img/images/Background.jpg);"));
        verticalLayout = new QVBoxLayout(WritePoem);
        verticalLayout->setObjectName("verticalLayout");
        label_title = new QLabel(WritePoem);
        label_title->setObjectName("label_title");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_title);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_poemTitle = new QLabel(WritePoem);
        label_poemTitle->setObjectName("label_poemTitle");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_poemTitle);

        lineEdit_poemTitle = new QLineEdit(WritePoem);
        lineEdit_poemTitle->setObjectName("lineEdit_poemTitle");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_poemTitle);

        label_category = new QLabel(WritePoem);
        label_category->setObjectName("label_category");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_category);

        comboBox_category = new QComboBox(WritePoem);
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->setObjectName("comboBox_category");
        comboBox_category->setStyleSheet(QString::fromUtf8("\n"
" color: rgb(0, 32, 63);\n"
"background-color: rgb(230, 222, 204);"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_category);


        verticalLayout->addLayout(formLayout);

        label_content = new QLabel(WritePoem);
        label_content->setObjectName("label_content");

        verticalLayout->addWidget(label_content);

        textEdit_poemContent = new QTextEdit(WritePoem);
        textEdit_poemContent->setObjectName("textEdit_poemContent");

        verticalLayout->addWidget(textEdit_poemContent);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_submit = new QPushButton(WritePoem);
        pushButton_submit->setObjectName("pushButton_submit");

        horizontalLayout->addWidget(pushButton_submit);

        pushButton_clear = new QPushButton(WritePoem);
        pushButton_clear->setObjectName("pushButton_clear");

        horizontalLayout->addWidget(pushButton_clear);

        pushButton_cancel = new QPushButton(WritePoem);
        pushButton_cancel->setObjectName("pushButton_cancel");

        horizontalLayout->addWidget(pushButton_cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(WritePoem);

        QMetaObject::connectSlotsByName(WritePoem);
    } // setupUi

    void retranslateUi(QDialog *WritePoem)
    {
        WritePoem->setWindowTitle(QCoreApplication::translate("WritePoem", "World of Poetry - Write Poem", nullptr));
        label_title->setText(QCoreApplication::translate("WritePoem", "Write a Poem", nullptr));
        label_poemTitle->setText(QCoreApplication::translate("WritePoem", "Title:", nullptr));
        label_category->setText(QCoreApplication::translate("WritePoem", "Category:", nullptr));
        comboBox_category->setItemText(0, QCoreApplication::translate("WritePoem", "Love", nullptr));
        comboBox_category->setItemText(1, QCoreApplication::translate("WritePoem", "Nature", nullptr));
        comboBox_category->setItemText(2, QCoreApplication::translate("WritePoem", "Life", nullptr));
        comboBox_category->setItemText(3, QCoreApplication::translate("WritePoem", "Happiness", nullptr));
        comboBox_category->setItemText(4, QCoreApplication::translate("WritePoem", "Sadness", nullptr));
        comboBox_category->setItemText(5, QCoreApplication::translate("WritePoem", "Friendship", nullptr));
        comboBox_category->setItemText(6, QCoreApplication::translate("WritePoem", "Other", nullptr));

        label_content->setText(QCoreApplication::translate("WritePoem", "Content:", nullptr));
        textEdit_poemContent->setPlaceholderText(QCoreApplication::translate("WritePoem", "Express your feelings through poetry...", nullptr));
        pushButton_submit->setText(QCoreApplication::translate("WritePoem", "Submit", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("WritePoem", "Clear", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("WritePoem", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WritePoem: public Ui_WritePoem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITEPOEM_H

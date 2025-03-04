/********************************************************************************
** Form generated from reading UI file 'editpoem.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPOEM_H
#define UI_EDITPOEM_H

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

class Ui_Editpoem
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_selectPoem;
    QComboBox *comboBox_poemList;
    QPushButton *pushButton_load;
    QFormLayout *formLayout;
    QLabel *label_poemTitle;
    QLineEdit *lineEdit_poemTitle;
    QLabel *label_category;
    QComboBox *comboBox_category;
    QLabel *label_content;
    QTextEdit *textEdit_poemContent;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_update;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_cancel;

    void setupUi(QDialog *Editpoem)
    {
        if (Editpoem->objectName().isEmpty())
            Editpoem->setObjectName("Editpoem");
        Editpoem->resize(600, 500);
        verticalLayout = new QVBoxLayout(Editpoem);
        verticalLayout->setObjectName("verticalLayout");
        label_title = new QLabel(Editpoem);
        label_title->setObjectName("label_title");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_title);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_selectPoem = new QLabel(Editpoem);
        label_selectPoem->setObjectName("label_selectPoem");

        horizontalLayout_2->addWidget(label_selectPoem);

        comboBox_poemList = new QComboBox(Editpoem);
        comboBox_poemList->setObjectName("comboBox_poemList");

        horizontalLayout_2->addWidget(comboBox_poemList);

        pushButton_load = new QPushButton(Editpoem);
        pushButton_load->setObjectName("pushButton_load");

        horizontalLayout_2->addWidget(pushButton_load);


        verticalLayout->addLayout(horizontalLayout_2);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_poemTitle = new QLabel(Editpoem);
        label_poemTitle->setObjectName("label_poemTitle");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_poemTitle);

        lineEdit_poemTitle = new QLineEdit(Editpoem);
        lineEdit_poemTitle->setObjectName("lineEdit_poemTitle");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_poemTitle);

        label_category = new QLabel(Editpoem);
        label_category->setObjectName("label_category");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_category);

        comboBox_category = new QComboBox(Editpoem);
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->setObjectName("comboBox_category");

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox_category);


        verticalLayout->addLayout(formLayout);

        label_content = new QLabel(Editpoem);
        label_content->setObjectName("label_content");

        verticalLayout->addWidget(label_content);

        textEdit_poemContent = new QTextEdit(Editpoem);
        textEdit_poemContent->setObjectName("textEdit_poemContent");

        verticalLayout->addWidget(textEdit_poemContent);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_update = new QPushButton(Editpoem);
        pushButton_update->setObjectName("pushButton_update");

        horizontalLayout->addWidget(pushButton_update);

        pushButton_delete = new QPushButton(Editpoem);
        pushButton_delete->setObjectName("pushButton_delete");

        horizontalLayout->addWidget(pushButton_delete);

        pushButton_cancel = new QPushButton(Editpoem);
        pushButton_cancel->setObjectName("pushButton_cancel");

        horizontalLayout->addWidget(pushButton_cancel);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Editpoem);

        QMetaObject::connectSlotsByName(Editpoem);
    } // setupUi

    void retranslateUi(QDialog *Editpoem)
    {
        Editpoem->setWindowTitle(QCoreApplication::translate("Editpoem", "World of Poetry - Edit Poem", nullptr));
        label_title->setText(QCoreApplication::translate("Editpoem", "Edit Your Poem", nullptr));
        label_selectPoem->setText(QCoreApplication::translate("Editpoem", "Select Poem:", nullptr));
        pushButton_load->setText(QCoreApplication::translate("Editpoem", "Load", nullptr));
        label_poemTitle->setText(QCoreApplication::translate("Editpoem", "Title:", nullptr));
        label_category->setText(QCoreApplication::translate("Editpoem", "Category:", nullptr));
        comboBox_category->setItemText(0, QCoreApplication::translate("Editpoem", "Love", nullptr));
        comboBox_category->setItemText(1, QCoreApplication::translate("Editpoem", "Nature", nullptr));
        comboBox_category->setItemText(2, QCoreApplication::translate("Editpoem", "Life", nullptr));
        comboBox_category->setItemText(3, QCoreApplication::translate("Editpoem", "Happiness", nullptr));
        comboBox_category->setItemText(4, QCoreApplication::translate("Editpoem", "Sadness", nullptr));
        comboBox_category->setItemText(5, QCoreApplication::translate("Editpoem", "Friendship", nullptr));
        comboBox_category->setItemText(6, QCoreApplication::translate("Editpoem", "Other", nullptr));

        label_content->setText(QCoreApplication::translate("Editpoem", "Content:", nullptr));
        pushButton_update->setText(QCoreApplication::translate("Editpoem", "Update", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Editpoem", "Delete", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("Editpoem", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Editpoem: public Ui_Editpoem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPOEM_H

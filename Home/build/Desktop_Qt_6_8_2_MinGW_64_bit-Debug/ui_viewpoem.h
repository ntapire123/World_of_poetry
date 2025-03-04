/********************************************************************************
** Form generated from reading UI file 'viewpoem.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPOEM_H
#define UI_VIEWPOEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ViewPoem
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_poemTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_author;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_date;
    QLabel *label_category;
    QTextBrowser *textBrowser_poemContent;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_back;

    void setupUi(QDialog *ViewPoem)
    {
        if (ViewPoem->objectName().isEmpty())
            ViewPoem->setObjectName("ViewPoem");
        ViewPoem->resize(600, 500);
        verticalLayout = new QVBoxLayout(ViewPoem);
        verticalLayout->setObjectName("verticalLayout");
        label_poemTitle = new QLabel(ViewPoem);
        label_poemTitle->setObjectName("label_poemTitle");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_poemTitle->setFont(font);
        label_poemTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_poemTitle);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_author = new QLabel(ViewPoem);
        label_author->setObjectName("label_author");
        QFont font1;
        font1.setPointSize(10);
        font1.setItalic(true);
        label_author->setFont(font1);

        horizontalLayout_2->addWidget(label_author);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_date = new QLabel(ViewPoem);
        label_date->setObjectName("label_date");
        QFont font2;
        font2.setPointSize(10);
        label_date->setFont(font2);

        horizontalLayout_2->addWidget(label_date);


        verticalLayout->addLayout(horizontalLayout_2);

        label_category = new QLabel(ViewPoem);
        label_category->setObjectName("label_category");

        verticalLayout->addWidget(label_category);

        textBrowser_poemContent = new QTextBrowser(ViewPoem);
        textBrowser_poemContent->setObjectName("textBrowser_poemContent");
        textBrowser_poemContent->setReadOnly(true);

        verticalLayout->addWidget(textBrowser_poemContent);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_back = new QPushButton(ViewPoem);
        pushButton_back->setObjectName("pushButton_back");

        horizontalLayout->addWidget(pushButton_back);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ViewPoem);

        QMetaObject::connectSlotsByName(ViewPoem);
    } // setupUi

    void retranslateUi(QDialog *ViewPoem)
    {
        ViewPoem->setWindowTitle(QCoreApplication::translate("ViewPoem", "World of Poetry - View Poem", nullptr));
        label_poemTitle->setText(QCoreApplication::translate("ViewPoem", "Poem Title", nullptr));
        label_author->setText(QCoreApplication::translate("ViewPoem", "By: Author Name", nullptr));
        label_date->setText(QCoreApplication::translate("ViewPoem", "Date: YYYY-MM-DD", nullptr));
        label_category->setText(QCoreApplication::translate("ViewPoem", "Category: Category Name", nullptr));
        pushButton_back->setText(QCoreApplication::translate("ViewPoem", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ViewPoem: public Ui_ViewPoem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPOEM_H

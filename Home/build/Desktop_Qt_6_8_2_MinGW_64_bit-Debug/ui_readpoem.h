/********************************************************************************
** Form generated from reading UI file 'readpoem.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READPOEM_H
#define UI_READPOEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ReadPoems
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_title;
    QHBoxLayout *horizontalLayout;
    QLabel *label_filter;
    QComboBox *comboBox_filter;
    QComboBox *comboBox_category;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_refresh;
    QListWidget *listWidget_poems;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_viewPoem;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_back;

    void setupUi(QDialog *ReadPoems)
    {
        if (ReadPoems->objectName().isEmpty())
            ReadPoems->setObjectName("ReadPoems");
        ReadPoems->resize(700, 500);
        ReadPoems->setStyleSheet(QString::fromUtf8("\n"
" color: rgb(0, 32, 63);\n"
"background-image: url(:/img/images/Country Birds Grayscale Coloring Book for Adults_.jpeg);"));
        verticalLayout = new QVBoxLayout(ReadPoems);
        verticalLayout->setObjectName("verticalLayout");
        label_title = new QLabel(ReadPoems);
        label_title->setObjectName("label_title");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_title->setFont(font);
        label_title->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_title);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_filter = new QLabel(ReadPoems);
        label_filter->setObjectName("label_filter");

        horizontalLayout->addWidget(label_filter);

        comboBox_filter = new QComboBox(ReadPoems);
        comboBox_filter->addItem(QString());
        comboBox_filter->addItem(QString());
        comboBox_filter->addItem(QString());
        comboBox_filter->addItem(QString());
        comboBox_filter->setObjectName("comboBox_filter");
        comboBox_filter->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255)"));

        horizontalLayout->addWidget(comboBox_filter);

        comboBox_category = new QComboBox(ReadPoems);
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->setObjectName("comboBox_category");
        comboBox_category->setEnabled(false);
        comboBox_category->setStyleSheet(QString::fromUtf8("\n"
"color:rgb(255, 255, 255)\n"
""));

        horizontalLayout->addWidget(comboBox_category);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_refresh = new QPushButton(ReadPoems);
        pushButton_refresh->setObjectName("pushButton_refresh");

        horizontalLayout->addWidget(pushButton_refresh);


        verticalLayout->addLayout(horizontalLayout);

        listWidget_poems = new QListWidget(ReadPoems);
        listWidget_poems->setObjectName("listWidget_poems");
        listWidget_poems->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"background-image: url(:/img/images/Country Birds Grayscale Coloring Book for Adults_.jpeg);"));

        verticalLayout->addWidget(listWidget_poems);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_viewPoem = new QPushButton(ReadPoems);
        pushButton_viewPoem->setObjectName("pushButton_viewPoem");

        horizontalLayout_2->addWidget(pushButton_viewPoem);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_back = new QPushButton(ReadPoems);
        pushButton_back->setObjectName("pushButton_back");

        horizontalLayout_2->addWidget(pushButton_back);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(ReadPoems);

        QMetaObject::connectSlotsByName(ReadPoems);
    } // setupUi

    void retranslateUi(QDialog *ReadPoems)
    {
        ReadPoems->setWindowTitle(QCoreApplication::translate("ReadPoems", "World of Poetry - Read Poems", nullptr));
        label_title->setText(QCoreApplication::translate("ReadPoems", "Poetry Feed", nullptr));
        label_filter->setText(QCoreApplication::translate("ReadPoems", "Filter by:", nullptr));
        comboBox_filter->setItemText(0, QCoreApplication::translate("ReadPoems", "All", nullptr));
        comboBox_filter->setItemText(1, QCoreApplication::translate("ReadPoems", "Category", nullptr));
        comboBox_filter->setItemText(2, QCoreApplication::translate("ReadPoems", "Author", nullptr));
        comboBox_filter->setItemText(3, QCoreApplication::translate("ReadPoems", "Recent", nullptr));

        comboBox_category->setItemText(0, QCoreApplication::translate("ReadPoems", "Love", nullptr));
        comboBox_category->setItemText(1, QCoreApplication::translate("ReadPoems", "Nature", nullptr));
        comboBox_category->setItemText(2, QCoreApplication::translate("ReadPoems", "Life", nullptr));
        comboBox_category->setItemText(3, QCoreApplication::translate("ReadPoems", "Happiness", nullptr));
        comboBox_category->setItemText(4, QCoreApplication::translate("ReadPoems", "Sadness", nullptr));
        comboBox_category->setItemText(5, QCoreApplication::translate("ReadPoems", "Friendship", nullptr));
        comboBox_category->setItemText(6, QCoreApplication::translate("ReadPoems", "Other", nullptr));

        pushButton_refresh->setText(QCoreApplication::translate("ReadPoems", "Refresh", nullptr));
        pushButton_viewPoem->setText(QCoreApplication::translate("ReadPoems", "View Selected Poem", nullptr));
        pushButton_back->setText(QCoreApplication::translate("ReadPoems", "Back to Home", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadPoems: public Ui_ReadPoems {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READPOEM_H

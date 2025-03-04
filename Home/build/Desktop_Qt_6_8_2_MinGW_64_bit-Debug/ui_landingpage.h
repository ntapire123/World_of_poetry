/********************************************************************************
** Form generated from reading UI file 'landingpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANDINGPAGE_H
#define UI_LANDINGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LandingPage
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_welcome;
    QLabel *label_username;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_writePoem;
    QPushButton *pushButton_readPoem;
    QPushButton *pushButton_editPoem;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_logout;

    void setupUi(QDialog *LandingPage)
    {
        if (LandingPage->objectName().isEmpty())
            LandingPage->setObjectName("LandingPage");
        LandingPage->resize(500, 400);
        verticalLayout = new QVBoxLayout(LandingPage);
        verticalLayout->setObjectName("verticalLayout");
        label_welcome = new QLabel(LandingPage);
        label_welcome->setObjectName("label_welcome");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        label_welcome->setFont(font);
        label_welcome->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_welcome);

        label_username = new QLabel(LandingPage);
        label_username->setObjectName("label_username");
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        label_username->setFont(font1);
        label_username->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_username);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_writePoem = new QPushButton(LandingPage);
        pushButton_writePoem->setObjectName("pushButton_writePoem");
        pushButton_writePoem->setMinimumSize(QSize(0, 50));
        QFont font2;
        font2.setPointSize(12);
        pushButton_writePoem->setFont(font2);

        verticalLayout_2->addWidget(pushButton_writePoem);

        pushButton_readPoem = new QPushButton(LandingPage);
        pushButton_readPoem->setObjectName("pushButton_readPoem");
        pushButton_readPoem->setMinimumSize(QSize(0, 50));
        pushButton_readPoem->setFont(font2);

        verticalLayout_2->addWidget(pushButton_readPoem);

        pushButton_editPoem = new QPushButton(LandingPage);
        pushButton_editPoem->setObjectName("pushButton_editPoem");
        pushButton_editPoem->setMinimumSize(QSize(0, 50));
        pushButton_editPoem->setFont(font2);

        verticalLayout_2->addWidget(pushButton_editPoem);


        verticalLayout->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_logout = new QPushButton(LandingPage);
        pushButton_logout->setObjectName("pushButton_logout");

        horizontalLayout->addWidget(pushButton_logout);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(LandingPage);

        QMetaObject::connectSlotsByName(LandingPage);
    } // setupUi

    void retranslateUi(QDialog *LandingPage)
    {
        LandingPage->setWindowTitle(QCoreApplication::translate("LandingPage", "World of Poetry - Home", nullptr));
        label_welcome->setText(QCoreApplication::translate("LandingPage", "Welcome to World of Poetry", nullptr));
        label_username->setText(QCoreApplication::translate("LandingPage", "Welcome, User", nullptr));
        pushButton_writePoem->setText(QCoreApplication::translate("LandingPage", "Write a Poem", nullptr));
        pushButton_readPoem->setText(QCoreApplication::translate("LandingPage", "Read Poems", nullptr));
        pushButton_editPoem->setText(QCoreApplication::translate("LandingPage", "Edit My Poems", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("LandingPage", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LandingPage: public Ui_LandingPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANDINGPAGE_H

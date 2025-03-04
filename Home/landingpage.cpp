#include "landingpage.h"
#include "ui_landingpage.h"
#include "dbmanager.h"

LandingPage::LandingPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LandingPage),
    m_userId(0)
{
    ui->setupUi(this);
    
    // Set window properties
    this->setWindowTitle("World of Poetry - Home");
    this->setModal(true);
}

LandingPage::~LandingPage()
{
    delete ui;
}

void LandingPage::setUsername(const QString &username)
{
    m_username = username;
    ui->label_username->setText("Welcome, " + username);
}

void LandingPage::on_pushButton_writePoem_clicked()
{
    if (m_userId <= 0) {
        return;
    }
    
    WritePoem *writePoem = new WritePoem(m_userId, this);
    writePoem->exec();
}

void LandingPage::on_pushButton_readPoem_clicked()
{
    if (m_userId <= 0) {
        return;
    }
    
    ReadPoems *readPoems = new ReadPoems(m_userId, this);
    readPoems->exec();
}

void LandingPage::on_pushButton_editPoem_clicked()
{
    if (m_userId <= 0) {
        return;
    }
    
    Editpoem *editPoem = new Editpoem(m_userId, this);
    editPoem->exec();
}

void LandingPage::on_pushButton_logout_clicked()
{
    this->close();
    parentWidget()->show();
}
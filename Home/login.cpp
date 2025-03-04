#include "login.h"
#include "ui_login.h"
#include "dbmanager.h"

login::login(QWidget *parent)
: QDialog(parent)
, ui(new Ui::login)
{
ui->setupUi(this);


this->setWindowTitle("World of Poetry - Login");
}

login::~login()
{
delete ui;
}



void login::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Login Error", "Please enter username and password");
        return;
    }
    
    QSqlQuery query;
    query.prepare("SELECT id, username FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    
    if (query.exec() && query.next()) {
        int userId = query.value(0).toInt();
        QString username = query.value(1).toString();
        
        QMessageBox::information(this, "Login Successful", "Welcome to World of Poetry!");
        
        // Open landing page with user info
        LandingPage *landingPage = new LandingPage(this);
        landingPage->setUserId(userId);
        landingPage->setUsername(username);
        landingPage->show();
        this->hide();
    } else {
        QMessageBox::warning(this, "Login Error", "Invalid username or password");
    }
}

void login::on_pushButton_register_clicked()
{
    // Open register dialog
    Register *registerDialog = new Register(this);
    registerDialog->show();
}

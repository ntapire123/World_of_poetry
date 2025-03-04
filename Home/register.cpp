#include "register.h"
#include "ui_register.h"
#include "dbmanager.h"

Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_register_clicked()
{
    if (!validateInput()) {
        return;
    }
    
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    QString fullname = ui->lineEdit_fullname->text();
    QString email = ui->lineEdit_email->text();
    
    if (registerUser(username, password, fullname, email)) {
        QMessageBox::information(this, "Registration Successful", 
                                "Your account has been created. You can now login.");
        this->close();
    } else {
        QMessageBox::warning(this, "Registration Failed", 
                           "Could not register user. Username may already exist.");
    }
}

void Register::on_pushButton_cancel_clicked()
{
    this->close();
}

bool Register::validateInput()
{
    // Check if all fields are filled
    if (ui->lineEdit_fullname->text().isEmpty() ||
        ui->lineEdit_email->text().isEmpty() ||
        ui->lineEdit_username->text().isEmpty() ||
        ui->lineEdit_password->text().isEmpty() ||
        ui->lineEdit_confirmPassword->text().isEmpty()) {
        
        QMessageBox::warning(this, "Validation Error", "All fields are required");
        return false;
    }
    
    // Check if passwords match
    if (ui->lineEdit_password->text() != ui->lineEdit_confirmPassword->text()) {
        QMessageBox::warning(this, "Validation Error", "Passwords do not match");
        return false;
    }
    
    // Basic email validation
    if (!ui->lineEdit_email->text().contains("@") || 
        !ui->lineEdit_email->text().contains(".")) {
        QMessageBox::warning(this, "Validation Error", "Please enter a valid email address");
        return false;
    }
    
    return true;
}

bool Register::registerUser(const QString &username, const QString &password, 
                           const QString &fullname, const QString &email)
{
    QSqlQuery query;
    query.prepare("INSERT INTO users (username, password, fullname, email) "
                 "VALUES (:username, :password, :fullname, :email)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);
    query.bindValue(":fullname", fullname);
    query.bindValue(":email", email);
    
    return query.exec();
}
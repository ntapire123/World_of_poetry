#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "register.h"
#include "landingpage.h"
#include "dbmanager.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_pushButton_login_clicked();
    void on_pushButton_register_clicked();

private:
    Ui::login *ui;
    bool connectToDatabase();
    QSqlDatabase db;
};

#endif // LOGIN_H
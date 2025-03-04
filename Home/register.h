#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "dbmanager.h"

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_pushButton_register_clicked();
    void on_pushButton_cancel_clicked();

private:
    Ui::Register *ui;
    bool validateInput();
    bool registerUser(const QString &username, const QString &password, 
                     const QString &fullname, const QString &email);
};

#endif // REGISTER_H
#ifndef WRITEPOEM_H
#define WRITEPOEM_H

#include <QDialog>
#include <QMessageBox>
#include <QDateTime>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "dbmanager.h"

namespace Ui {
class WritePoem;
}

class WritePoem : public QDialog
{
    Q_OBJECT

public:
    explicit WritePoem(int userId, QWidget *parent = nullptr);
    ~WritePoem();

private slots:
    void on_pushButton_submit_clicked();
    void on_pushButton_clear_clicked();
    void on_pushButton_cancel_clicked();

private:
    Ui::WritePoem *ui;
    int m_userId;
    bool savePoem(const QString &title, const QString &content, const QString &category);
};

#endif // WRITEPOEM_H
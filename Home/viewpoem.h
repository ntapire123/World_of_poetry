#ifndef VIEWPOEM_H
#define VIEWPOEM_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include "dbmanager.h"

namespace Ui {
class ViewPoem;
}

class ViewPoem : public QDialog
{
    Q_OBJECT

public:
    explicit ViewPoem(int poemId, QWidget *parent = nullptr);
    ~ViewPoem();

private slots:
    void on_pushButton_back_clicked();

private:
    Ui::ViewPoem *ui;
    int m_poemId;
    void loadPoemDetails();
};

#endif // VIEWPOEM_H
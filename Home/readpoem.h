#ifndef READPOEMS_H
#define READPOEMS_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QListWidgetItem>
#include "viewpoem.h"
#include "dbmanager.h"

namespace Ui {
class ReadPoems;
}

class ReadPoems : public QDialog
{
    Q_OBJECT

public:
    explicit ReadPoems(int userId, QWidget *parent = nullptr);
    ~ReadPoems();

private slots:
    void on_pushButton_viewPoem_clicked();
    void on_pushButton_refresh_clicked();
    void on_pushButton_back_clicked();
    void on_comboBox_filter_currentIndexChanged(int index);
    void on_listWidget_poems_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::ReadPoems *ui;
    int m_userId;
    void loadPoems(const QString &filterType = "All", const QString &category = "");
};

#endif // READPOEMS_H
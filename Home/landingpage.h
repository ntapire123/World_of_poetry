#ifndef LANDINGPAGE_H
#define LANDINGPAGE_H

#include <QDialog>
#include "writepoem.h"
#include "readpoem.h"
#include "editpoem.h"
#include "dbmanager.h"

namespace Ui {
class LandingPage;
}

class LandingPage : public QDialog
{
    Q_OBJECT

public:
    explicit LandingPage(QWidget *parent = nullptr);
    ~LandingPage();
    
    void setUserId(int userId) { m_userId = userId; }
    void setUsername(const QString &username);

private slots:
    void on_pushButton_writePoem_clicked();
    void on_pushButton_readPoem_clicked();
    void on_pushButton_editPoem_clicked();
    void on_pushButton_logout_clicked();

private:
    Ui::LandingPage *ui;
    int m_userId;
    QString m_username;
};

#endif // LANDINGPAGE_H
#ifndef EDITPOEM_H
#define EDITPOEM_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QMap>
#include "dbmanager.h"

namespace Ui {
class Editpoem;
}

class Editpoem : public QDialog
{
    Q_OBJECT

public:
    explicit Editpoem(int userId, QWidget *parent = nullptr);
    ~Editpoem();

private slots:
    void on_pushButton_load_clicked();
    void on_pushButton_update_clicked();
    void on_pushButton_delete_clicked();
    void on_pushButton_cancel_clicked();

private:
    Ui::Editpoem *ui;
    int m_userId;
    QMap<int, int> m_poemIndexToIdMap; // Maps combobox index to poem ID
    
    void loadUserPoems();
    bool updatePoem(int poemId, const QString &title, const QString &content, const QString &category);
    bool deletePoem(int poemId);
};

#endif // EDITPOEM_H
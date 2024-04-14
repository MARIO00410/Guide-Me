#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include"addroute.h"
#include"updateroute.h"
#include"deleteroute.h"
namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:
    void on_add_clicked();

    void on_Update_clicked();

    void on_Delete_clicked();

private:
    Ui::Admin *ui;
    Addroute *add;
    Updateroute *update;
    Deleteroute *deletes;
};

#endif // ADMIN_H

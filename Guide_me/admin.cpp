#include "admin.h"
#include "ui_admin.h"
#include <QDebug>>
Admin::Admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);
}

Admin::~Admin()
{
    delete ui;
}

void Admin::on_add_clicked()
{
   // hide();
    add=new Addroute(this);
    add->show();
    qDebug ("ok");
}

void Admin::on_Update_clicked()
{
    update=new Updateroute(this);
    update->show();
}


void Admin::on_Delete_clicked()
{
    deletes=new Deleteroute(this);
    deletes->show();
}


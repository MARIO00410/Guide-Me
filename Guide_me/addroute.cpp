#include "addroute.h"
#include "ui_addroute.h"
#include <QString>
#include <string>
#include <QLineEdit>
#include <QMessageBox>
#include <user.h>
#include <QDebug>
Addroute::Addroute(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Addroute)
{
    ui->setupUi(this);
}

Addroute::~Addroute()
{
    delete ui;
}

void Addroute::on_Add_clicked()
{
    QString From=ui->from->text();
    QString To=ui->to->text();
    QString Price=ui->price->text();
    QString Transportation=ui->transportation->text();
    QString s;
    s=From+To+Price+Transportation;
  //  qDebug(s.toLatin1());
}



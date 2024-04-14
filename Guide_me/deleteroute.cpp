#include "deleteroute.h"
#include "ui_deleteroute.h"
#include <map>
#include<QString>
Deleteroute::Deleteroute(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Deleteroute)
{
    ui->setupUi(this);
}

Deleteroute::~Deleteroute()
{
    delete ui;
}

void Deleteroute::on_deletePlace_clicked()
{
    QString place=ui->place->text();

}


void Deleteroute::on_deleteTransportation_clicked()
{
    QString from=ui->from->text();
    QString to=ui->to->text();
    QString transportation=ui->transportation->text();
    QString price=ui->price->text();


}

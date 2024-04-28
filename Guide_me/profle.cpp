#include "profle.h"
#include "ui_profle.h"
#include <login.h>
#include <homepage.h>
#include <info.h>


Profle::Profle(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Profle)
{
    ui->setupUi(this);
}

Profle::~Profle()
{
    delete ui;
}

void Profle::on_pushButton_Info_clicked()
{
    Info info;
    info.setModal(true);
    hide();
    info.exec();
}


void Profle::on_pushButton_back_clicked()
{
    HomePage homePage;
    homePage.setModal(true);
    hide();
    homePage.exec();
}


void Profle::on_pushButton_logout_clicked()
{
    Login log;
    log.setModal(true);
    hide();
    log.exec();
}


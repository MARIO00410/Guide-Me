#include "homepage.h"
#include "ui_homepage.h"
#include <profle.h>

HomePage::HomePage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_pushButton_clicked()
{
    Profle profile;
    profile.setModal(true);
    hide();
    profile.exec();
}


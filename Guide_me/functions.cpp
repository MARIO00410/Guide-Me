#include "functions.h"
#include "ui_functions.h"
#include "add.h"

functions::functions(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::functions)
{
    ui->setupUi(this);
}


functions::~functions()
{
    delete ui;
}

void functions::on_add_transfer_clicked()
{
    add trans ;
    trans.setModal(true);
    hide();
    trans.exec();
}


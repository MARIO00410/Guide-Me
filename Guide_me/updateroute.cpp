#include "updateroute.h"
#include "ui_updateroute.h"

Updateroute::Updateroute(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Updateroute)
{
    ui->setupUi(this);
}

Updateroute::~Updateroute()
{
    delete ui;
}

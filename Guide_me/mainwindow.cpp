#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <login.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{

    delete ui;
}


void MainWindow::on_main_login_button_clicked()
{
    Login login;
    login.setModal(true);
    hide();
    login.exec();
}


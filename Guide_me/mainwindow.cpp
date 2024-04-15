#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <signup.h>
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

void MainWindow::on_pushButton_clicked()
{
    SignUp signup;
    signup.setModal(true);
    signup.exec();
}



void MainWindow::on_login_main_button_clicked()
{
    Login login;
    login.setModal(true);
    hide();
    login.exec();
}


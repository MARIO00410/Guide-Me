#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <signup.h>
#include <admin.h>
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
   // SignUp signup;
   // signup.setModal(true);
   // signup.exec();
    Admin admin;
    admin.setModal(true);
    admin.exec();
}


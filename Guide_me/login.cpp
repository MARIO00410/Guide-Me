#include "login.h"
#include "ui_login.h"
#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}
bool Login::checkCredentials(const QString &username, const QString &password) {
    // QFile file(":/Login/Login Data.txt");
    // if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
    //     qDebug() << "Failed to open file.";
    //     return false;
    // }

    // QTextStream in(&file);
    // while (!in.atEnd()) {
    //     QString line = in.readLine();
    //     QStringList parts = line.split(':');
    //     QString usernameFromFile = parts[0].trimmed();
    //     QString passwordFromFile = parts[1].trimmed();
    //     if (usernameFromFile == username && passwordFromFile == password) {
    //         file.close();
    //         return true;
    //     }
    // }

    // file.close();
    // return false;
    //I just commented the body of the function to make the code run properly,
    //because I deleted the demo file as demanded till we ask the TA.
    //I also created a demo name and password to check if the function will run properly or not
    QString demo_user_name="kenzy";
    QString demo_password="1111";
    if (username==demo_user_name&&password==demo_password)
        return true;
    else
        return false;
}

Login::~Login()
{
    delete ui;
}

void Login::on_login_button_clicked()
{
    QString username= ui->login_user_name_field->text();
    QString password= ui->login_password_field->text();

    if(checkCredentials(username,password))
        QMessageBox::information(this ,"title","Login Successfully!!");
    else
        QMessageBox::warning(this ,"title","Login failed!!");
}


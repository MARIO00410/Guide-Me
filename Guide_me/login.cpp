#include "login.h"
#include "ui_login.h"
#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include <data.h>
#include <signup.h>
#include <homepage.h>
Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
}
bool Login::checkCredentials(const QString &username, const QString &password) {
    Data data;
    for(int i=0;i<data.users.size();i++){
        if(username.toStdString()==data.users[i].UserName && password.toStdString()==data.users[i].Password){
            data.currentUser=i;
            return true;
        }
    }
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
    {
        HomePage homePage;
        homePage.setModal(true);
        hide();
        homePage.exec();
    }
    else{
        QMessageBox::warning(this ,"Incorrect Login","Wrong Username or Password !!");
    }
}


void Login::on_signup_button_clicked()
{
    SignUp signup;
    signup.setModal(true);
    hide();
    signup.exec();
}


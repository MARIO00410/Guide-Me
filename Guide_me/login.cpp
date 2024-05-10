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


    QPixmap bkgnd("C:\\Users\\youss\\Downloads\\_9ca52c9a-e482-4813-897e-b5e41dc53665.jpeg");
    bkgnd = bkgnd.scaled(this->size());
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);
}
bool Login::checkCredentials(const QString &username, const QString &password) {
    for(int i=0;i<Data::users.size();i++){
        if(username.toStdString()==Data::users[i].UserName && password.toStdString()==Data::users[i].Password){
          Data::currentUser=i;
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


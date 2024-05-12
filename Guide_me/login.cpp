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
#include <QMovie>

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);



    QMovie *movie = new QMovie("C:/Users/mario/ya rb/c0c02bafcfe60ea76d6d7eede8ec4564(1).gif");
    ui->background->setMovie(movie);
    movie->start();



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


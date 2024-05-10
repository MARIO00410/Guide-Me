#include "signup.h"
#include "ui_signup.h"
#include <QString>
#include <string>
#include <QLineEdit>
#include <QMessageBox>
#include <QDebug>
#include <user.h>
#include <data.h>
#include <login.h>
#include <QMovie>

using namespace std;

SignUp::SignUp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);

    QMovie *movie = new QMovie("C:\\Users\\youss\\Downloads\\c0c02bafcfe60ea76d6d7eede8ec4564(1).gif");
    ui->background->setMovie(movie);
    movie->start();

    ui->GenderComboBox->addItem("Male");
    ui->GenderComboBox->addItem("Female");
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButton_clicked()
{
    string FirstName = ui->fNameLineEdit->text().toStdString();
    string LastName = ui->lNameLineEdit->text().toStdString();
    string UserName = ui->uNameLineEdit->text().toStdString();
    string Password = ui->PassLineEdit->text().toStdString();
    string ConfirmPassword = ui->cPassLineEdit->text().toStdString();
    string Country = ui->CountryLineEdit->text().toStdString();
    int Age = ui->AgeLineEdit->text().toInt();
    string Gender = ui->GenderComboBox->currentText().toStdString();


    if(Password!=ConfirmPassword){
        QMessageBox::warning(this,"Warning","Password doesn't match");
    }

    Data data;
    user u(FirstName, LastName, UserName,Password, Age, Gender, Country);
    data.users.push_back(u);
    data.writeFile();

    Login LoginPage;
    LoginPage.setModal(true);
    hide();
    LoginPage.exec();

}


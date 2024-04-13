#include "signup.h"
#include "ui_signup.h"
#include <QString>
#include <string>
#include <QLineEdit>
#include <QMessageBox>
#include <user.h>
#include <QDebug>

using namespace std;

SignUp::SignUp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SignUp)
{
    ui->setupUi(this);
    ui->GenderComboBox->addItem("Male");
    ui->GenderComboBox->addItem("Female");
}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_pushButton_clicked()
{
    QString fName = ui->fNameLineEdit->text();
    QString lName = ui->lNameLineEdit->text();
    QString uName = ui->uNameLineEdit->text();
    QString Pass = ui->PassLineEdit->text();
    QString cPass = ui->cPassLineEdit->text();
    QString Coun = ui->CountryLineEdit->text();
    QString age = ui->AgeLineEdit->text();
    QString gender = ui->GenderComboBox->currentText();




    string FirstName = fName.toStdString();
    string LastName = lName.toStdString();
    string UserName = uName.toStdString();
    string Password = Pass.toStdString();
    string ConfirmPassword = cPass.toStdString();
    string Country = Coun.toStdString();
    int Age = age.toInt();
    string Gender = gender.toStdString();

    if(Password!=ConfirmPassword){
        QMessageBox::warning(this,"Warning","Password doesn't match");
    }

    user u(FirstName, LastName, UserName,Password, Age, Gender, Country);

    qDebug() << u.FirstName << u.LastName << u.Country << u.Gender << u.Password <<u.Age <<u.UserName;
}


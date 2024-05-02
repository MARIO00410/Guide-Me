#include "info.h"
#include "ui_info.h"
#include <data.h>
#include <profle.h>

bool fNameFlag = true;
bool lNameFlag = true;
bool userNameFlag = true;
bool passFlag = true;
bool countryFlag = true;
bool ageFlag = true;

Info::Info(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Info)
{
    Data data;
    ui->setupUi(this);

    if (data.users.size() > static_cast<size_t>(data.currentUser)) {
        // Convert std::string to QString before setting text
        ui->lineEditFName->setText(QString::fromStdString(data.users[static_cast<size_t>(data.currentUser)].FirstName));
        ui->lineEdit_lName->setText(QString::fromStdString(data.users[static_cast<size_t>(data.currentUser)].LastName));
        ui->lineEdit_uName->setText(QString::fromStdString(data.users[static_cast<size_t>(data.currentUser)].UserName));
        ui->lineEdit_pass->setText(QString::fromStdString(data.users[static_cast<size_t>(data.currentUser)].Password));
        ui->lineEdit_country->setText(QString::fromStdString(data.users[static_cast<size_t>(data.currentUser)].Country));
        ui->lineEdit_gender->setText(QString::fromStdString(data.users[static_cast<size_t>(data.currentUser)].Gender));
        ui->lineEdit_age->setText(QString::number(data.users[static_cast<size_t>(data.currentUser)].Age));
    }
    ui->lineEditFName->setEnabled(!fNameFlag);
    ui->lineEdit_lName->setEnabled(!lNameFlag);
    ui->lineEdit_uName->setEnabled(!userNameFlag);
    ui->lineEdit_pass->setEnabled(!passFlag);
    ui->lineEdit_country->setEnabled(!countryFlag);
    ui->lineEdit_age->setEnabled(!ageFlag);
    ui->lineEdit_gender->setEnabled(false);
}

Info::~Info()
{
    delete ui;
}

void Info::on_on_pushButtonEditFname_clicked()
{
    Data data;
    if (fNameFlag){
        ui->on_pushButtonEditFname->setText("Confirm");
    }
    else{
        ui->on_pushButtonEditFname->setText("Edit");
        data.users[static_cast<size_t>(data.currentUser)].FirstName=ui->lineEditFName->text().toStdString();
    }
    fNameFlag = !fNameFlag;
    ui->lineEditFName->setEnabled(!fNameFlag);
}

void Info::on_on_pushButton_lName_clicked()
{
    Data data;

    if (lNameFlag){
        ui->on_pushButton_lName->setText("Confirm");
    }
    else{
        ui->on_pushButton_lName->setText("Edit");
        data.users[static_cast<size_t>(data.currentUser)].LastName=ui->lineEdit_lName->text().toStdString();
    }
    lNameFlag = !lNameFlag;
    ui->lineEdit_lName->setEnabled(!lNameFlag);
}


void Info::on_on_pushButton_uName_clicked()
{
    Data data;

    if (userNameFlag){
        ui->on_pushButton_uName->setText("Confirm");
    }
    else{
        ui->on_pushButton_uName->setText("Edit");
        data.users[static_cast<size_t>(data.currentUser)].UserName=ui->lineEdit_uName->text().toStdString();
    }
    userNameFlag = !userNameFlag;
    ui->lineEdit_uName->setEnabled(!userNameFlag);
}


void Info::on_on_pushButton_pass_clicked()
{
    Data data;

    if (passFlag){
        ui->on_pushButton_pass->setText("Confirm");
    }
    else{
        ui->on_pushButton_pass->setText("Edit");
        data.users[static_cast<size_t>(data.currentUser)].Password =ui->lineEdit_pass->text().toStdString();
    }

    passFlag = !passFlag;
    ui->lineEdit_pass->setEnabled(!passFlag);
}


void Info::on_on_pushButton_country_clicked()
{
    Data data;

    if (ageFlag){
        ui->on_pushButton_country->setText("Confirm");
    }
    else{
        ui->on_pushButton_country->setText("Edit");
        data.users[static_cast<size_t>(data.currentUser)].Country =ui->lineEdit_country->text().toStdString();
    }
    ageFlag = !ageFlag;
    ui->lineEdit_country->setEnabled(!countryFlag);
}


void Info::on_on_pushButton_age_clicked()
{
    Data data;

    if (ageFlag){
        ui->on_pushButton_age->setText("Confirm");
    }
    else{
        ui->on_pushButton_age->setText("Edit");
        data.users[static_cast<size_t>(data.currentUser)].Age =ui->lineEdit_age->text().toInt();
    }
    ageFlag = !ageFlag;
    ui->lineEdit_age->setEnabled(!ageFlag);
}


void Info::on_on_pushButtonBack_clicked()
{
    Data::writeFile();
    Profle profile;
    profile.setModal(true);
    hide();
    profile.exec();
}

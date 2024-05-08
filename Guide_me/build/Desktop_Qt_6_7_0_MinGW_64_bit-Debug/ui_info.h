/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditFName;
    QPushButton *on_pushButtonEditFname;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineEdit_lName;
    QPushButton *on_pushButton_lName;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_uName;
    QPushButton *on_pushButton_uName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_pass;
    QPushButton *on_pushButton_pass;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_country;
    QPushButton *on_pushButton_country;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *lineEdit_gender;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEdit_age;
    QPushButton *on_pushButton_age;
    QPushButton *on_pushButtonBack;

    void setupUi(QDialog *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName("Info");
        Info->resize(660, 402);
        groupBox = new QGroupBox(Info);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 10, 451, 331));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 30, 431, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEditFName = new QLineEdit(layoutWidget);
        lineEditFName->setObjectName("lineEditFName");

        horizontalLayout->addWidget(lineEditFName);

        on_pushButtonEditFname = new QPushButton(layoutWidget);
        on_pushButtonEditFname->setObjectName("on_pushButtonEditFname");

        horizontalLayout->addWidget(on_pushButtonEditFname);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_2->addWidget(label_4);

        lineEdit_lName = new QLineEdit(layoutWidget);
        lineEdit_lName->setObjectName("lineEdit_lName");

        horizontalLayout_2->addWidget(lineEdit_lName);

        on_pushButton_lName = new QPushButton(layoutWidget);
        on_pushButton_lName->setObjectName("on_pushButton_lName");

        horizontalLayout_2->addWidget(on_pushButton_lName);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        lineEdit_uName = new QLineEdit(layoutWidget);
        lineEdit_uName->setObjectName("lineEdit_uName");

        horizontalLayout_3->addWidget(lineEdit_uName);

        on_pushButton_uName = new QPushButton(layoutWidget);
        on_pushButton_uName->setObjectName("on_pushButton_uName");

        horizontalLayout_3->addWidget(on_pushButton_uName);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        lineEdit_pass = new QLineEdit(layoutWidget);
        lineEdit_pass->setObjectName("lineEdit_pass");

        horizontalLayout_4->addWidget(lineEdit_pass);

        on_pushButton_pass = new QPushButton(layoutWidget);
        on_pushButton_pass->setObjectName("on_pushButton_pass");

        horizontalLayout_4->addWidget(on_pushButton_pass);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_5->addWidget(label_6);

        lineEdit_country = new QLineEdit(layoutWidget);
        lineEdit_country->setObjectName("lineEdit_country");

        horizontalLayout_5->addWidget(lineEdit_country);

        on_pushButton_country = new QPushButton(layoutWidget);
        on_pushButton_country->setObjectName("on_pushButton_country");

        horizontalLayout_5->addWidget(on_pushButton_country);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_6->addWidget(label_7);

        lineEdit_gender = new QLineEdit(layoutWidget);
        lineEdit_gender->setObjectName("lineEdit_gender");

        horizontalLayout_6->addWidget(lineEdit_gender);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_7->addWidget(label_8);

        lineEdit_age = new QLineEdit(layoutWidget);
        lineEdit_age->setObjectName("lineEdit_age");

        horizontalLayout_7->addWidget(lineEdit_age);

        on_pushButton_age = new QPushButton(layoutWidget);
        on_pushButton_age->setObjectName("on_pushButton_age");

        horizontalLayout_7->addWidget(on_pushButton_age);


        verticalLayout->addLayout(horizontalLayout_7);

        on_pushButtonBack = new QPushButton(Info);
        on_pushButtonBack->setObjectName("on_pushButtonBack");
        on_pushButtonBack->setGeometry(QRect(40, 350, 80, 24));

        retranslateUi(Info);

        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QDialog *Info)
    {
        Info->setWindowTitle(QCoreApplication::translate("Info", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Info", "Personal Info", nullptr));
        label->setText(QCoreApplication::translate("Info", "First Name", nullptr));
        on_pushButtonEditFname->setText(QCoreApplication::translate("Info", "Edit", nullptr));
        label_4->setText(QCoreApplication::translate("Info", "Last Name", nullptr));
        on_pushButton_lName->setText(QCoreApplication::translate("Info", "Edit", nullptr));
        label_5->setText(QCoreApplication::translate("Info", "Username", nullptr));
        on_pushButton_uName->setText(QCoreApplication::translate("Info", "Edit", nullptr));
        label_3->setText(QCoreApplication::translate("Info", "Password", nullptr));
        on_pushButton_pass->setText(QCoreApplication::translate("Info", "Edit", nullptr));
        label_6->setText(QCoreApplication::translate("Info", "Country  ", nullptr));
        on_pushButton_country->setText(QCoreApplication::translate("Info", "Edit", nullptr));
        label_7->setText(QCoreApplication::translate("Info", "Gender    ", nullptr));
        label_8->setText(QCoreApplication::translate("Info", "Age         ", nullptr));
        on_pushButton_age->setText(QCoreApplication::translate("Info", "Edit", nullptr));
        on_pushButtonBack->setText(QCoreApplication::translate("Info", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H

/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

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

class Ui_Login
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *login_groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_username;
    QLineEdit *login_user_name_field;
    QHBoxLayout *horizontalLayout;
    QLabel *label_password;
    QLineEdit *login_password_field;
    QPushButton *login_button;
    QHBoxLayout *horizontalLayout_3;
    QLabel *ask_label;
    QPushButton *signup_button;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(529, 454);
        widget = new QWidget(Login);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 120, 461, 171));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        login_groupBox = new QGroupBox(widget);
        login_groupBox->setObjectName("login_groupBox");
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setBold(true);
        login_groupBox->setFont(font);
        verticalLayout = new QVBoxLayout(login_groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_username = new QLabel(login_groupBox);
        label_username->setObjectName("label_username");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_username->setFont(font1);

        horizontalLayout_2->addWidget(label_username);

        login_user_name_field = new QLineEdit(login_groupBox);
        login_user_name_field->setObjectName("login_user_name_field");

        horizontalLayout_2->addWidget(login_user_name_field);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_password = new QLabel(login_groupBox);
        label_password->setObjectName("label_password");
        label_password->setFont(font1);

        horizontalLayout->addWidget(label_password);

        login_password_field = new QLineEdit(login_groupBox);
        login_password_field->setObjectName("login_password_field");
        login_password_field->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(login_password_field);


        verticalLayout->addLayout(horizontalLayout);

        login_button = new QPushButton(login_groupBox);
        login_button->setObjectName("login_button");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(14);
        font2.setBold(true);
        login_button->setFont(font2);

        verticalLayout->addWidget(login_button);


        verticalLayout_2->addWidget(login_groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        ask_label = new QLabel(widget);
        ask_label->setObjectName("ask_label");
        ask_label->setFont(font);

        horizontalLayout_3->addWidget(ask_label);

        signup_button = new QPushButton(widget);
        signup_button->setObjectName("signup_button");
        signup_button->setFont(font1);

        horizontalLayout_3->addWidget(signup_button);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        login_groupBox->setTitle(QCoreApplication::translate("Login", "Log In", nullptr));
        label_username->setText(QCoreApplication::translate("Login", "UserName:", nullptr));
        label_password->setText(QCoreApplication::translate("Login", "Password :  ", nullptr));
        login_button->setText(QCoreApplication::translate("Login", "Log In", nullptr));
        ask_label->setText(QCoreApplication::translate("Login", "Don't have an account?", nullptr));
        signup_button->setText(QCoreApplication::translate("Login", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

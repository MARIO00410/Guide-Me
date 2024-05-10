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

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGroupBox *login_groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_username;
    QLineEdit *login_user_name_field;
    QHBoxLayout *horizontalLayout;
    QLabel *label_password;
    QLineEdit *login_password_field;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *signup_button;
    QPushButton *login_button;
    QLabel *background;
    QLabel *label;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(750, 650);
        login_groupBox = new QGroupBox(Login);
        login_groupBox->setObjectName("login_groupBox");
        login_groupBox->setGeometry(QRect(160, 320, 409, 187));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setBold(true);
        login_groupBox->setFont(font);
        login_groupBox->setStyleSheet(QString::fromUtf8("background-color:rgba(18,37,51,255);\n"
""));
        verticalLayout = new QVBoxLayout(login_groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_username = new QLabel(login_groupBox);
        label_username->setObjectName("label_username");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Eras Bold ITC")});
        font1.setPointSize(12);
        font1.setBold(false);
        label_username->setFont(font1);

        horizontalLayout_2->addWidget(label_username);

        login_user_name_field = new QLineEdit(login_groupBox);
        login_user_name_field->setObjectName("login_user_name_field");
        login_user_name_field->setStyleSheet(QString::fromUtf8("background: rgba(217,236,243,255);\n"
"color: rgba(18,37,51,255);\n"
""));

        horizontalLayout_2->addWidget(login_user_name_field);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_password = new QLabel(login_groupBox);
        label_password->setObjectName("label_password");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font2.setPointSize(12);
        font2.setBold(true);
        label_password->setFont(font2);

        horizontalLayout->addWidget(label_password);

        login_password_field = new QLineEdit(login_groupBox);
        login_password_field->setObjectName("login_password_field");
        login_password_field->setStyleSheet(QString::fromUtf8("background: rgba(217,236,243,255);\n"
"color: rgba(18,37,51,255);\n"
""));
        login_password_field->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(login_password_field);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        signup_button = new QPushButton(login_groupBox);
        signup_button->setObjectName("signup_button");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setUnderline(true);
        signup_button->setFont(font3);
        signup_button->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgba(217,236,243,255);\n"
"border: 0px;\n"
""));

        horizontalLayout_4->addWidget(signup_button);

        login_button = new QPushButton(login_groupBox);
        login_button->setObjectName("login_button");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(14);
        font4.setBold(true);
        login_button->setFont(font4);
        login_button->setStyleSheet(QString::fromUtf8("background: rgba(217,236,243,255);\n"
"color: rgba(18,37,51,255);\n"
"border-radius: 8px;\n"
""));

        horizontalLayout_4->addWidget(login_button);


        verticalLayout->addLayout(horizontalLayout_4);

        background = new QLabel(Login);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 751, 651));
        label = new QLabel(Login);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 140, 421, 141));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Ubuntu Arabic")});
        font5.setPointSize(70);
        font5.setBold(true);
        font5.setUnderline(false);
        font5.setStrikeOut(false);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255);\n"
"text-align: center;\n"
"    text-decoration: none;"));
        background->raise();
        login_groupBox->raise();
        label->raise();

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Dialog", nullptr));
        login_groupBox->setTitle(QCoreApplication::translate("Login", "Log In", nullptr));
        label_username->setText(QCoreApplication::translate("Login", "Username:", nullptr));
        label_password->setText(QCoreApplication::translate("Login", "Password: ", nullptr));
        signup_button->setText(QCoreApplication::translate("Login", "Don't have an account?", nullptr));
        login_button->setText(QCoreApplication::translate("Login", "Log In", nullptr));
        background->setText(QString());
        label->setText(QCoreApplication::translate("Login", "Guide Me", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H

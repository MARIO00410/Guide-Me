/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *AgeLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *GenderComboBox;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *CountryLineEdit;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *PassLineEdit;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *cPassLineEdit;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *uNameLineEdit;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *fNameLineEdit;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lNameLineEdit;
    QLabel *label_7;
    QLabel *background;
    QLabel *label_9;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(750, 650);
        groupBox = new QGroupBox(SignUp);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(70, 230, 601, 321));
        groupBox->setStyleSheet(QString::fromUtf8("background-color:rgba(18,37,51,0.8);\n"
""));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 270, 191, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(15);
        font.setBold(true);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgba(217,236,243,255);\n"
"color:rgba(18,37,51,255);\n"
"border-radius: 8px;\n"
""));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(420, 200, 171, 49));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        horizontalLayout_9->addWidget(label_8);

        AgeLineEdit = new QLineEdit(layoutWidget);
        AgeLineEdit->setObjectName("AgeLineEdit");
        AgeLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(217,236,243,255);\n"
"color: rgba(18,37,51,255);\n"
""));

        horizontalLayout_9->addWidget(AgeLineEdit);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(267, 200, 121, 47));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        GenderComboBox = new QComboBox(layoutWidget1);
        GenderComboBox->setObjectName("GenderComboBox");
        GenderComboBox->setStyleSheet(QString::fromUtf8("background-color: rgba(217,236,243,255);\n"
"color: rgba(18,37,51,255);\n"
""));

        horizontalLayout_8->addWidget(GenderComboBox);

        layoutWidget2 = new QWidget(groupBox);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(20, 200, 171, 47));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        horizontalLayout_7->addWidget(label_6);

        CountryLineEdit = new QLineEdit(layoutWidget2);
        CountryLineEdit->setObjectName("CountryLineEdit");
        CountryLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(217,236,243,255);\n"
"color: rgba(18,37,51,255);\n"
""));

        horizontalLayout_7->addWidget(CountryLineEdit);

        layoutWidget3 = new QWidget(groupBox);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(20, 120, 261, 61));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        horizontalLayout_4->addWidget(label_4);

        PassLineEdit = new QLineEdit(layoutWidget3);
        PassLineEdit->setObjectName("PassLineEdit");
        PassLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(217,236,243,255);\n"
"color: rgba(18,37,51,255);\n"
""));
        PassLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(PassLineEdit);

        layoutWidget4 = new QWidget(groupBox);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(310, 120, 281, 61));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        horizontalLayout_5->addWidget(label_5);

        cPassLineEdit = new QLineEdit(layoutWidget4);
        cPassLineEdit->setObjectName("cPassLineEdit");
        cPassLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(217,236,243,255);\n"
"color: rgba(18,37,51,255);\n"
""));
        cPassLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(cPassLineEdit);

        layoutWidget5 = new QWidget(groupBox);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(420, 60, 171, 51));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget5);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        horizontalLayout_3->addWidget(label_3);

        uNameLineEdit = new QLineEdit(layoutWidget5);
        uNameLineEdit->setObjectName("uNameLineEdit");
        uNameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(217,236,243,255);\n"
"color: rgba(18,37,51,255);\n"
""));

        horizontalLayout_3->addWidget(uNameLineEdit);

        layoutWidget6 = new QWidget(groupBox);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(20, 60, 171, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget6);
        label->setObjectName("label");
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        horizontalLayout->addWidget(label);

        fNameLineEdit = new QLineEdit(layoutWidget6);
        fNameLineEdit->setObjectName("fNameLineEdit");
        fNameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(217,236,243,255);\n"
"color: rgba(18,37,51,255);\n"
""));

        horizontalLayout->addWidget(fNameLineEdit);

        layoutWidget7 = new QWidget(groupBox);
        layoutWidget7->setObjectName("layoutWidget7");
        layoutWidget7->setGeometry(QRect(220, 60, 171, 51));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget7);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color:transparent;"));

        horizontalLayout_2->addWidget(label_2);

        lNameLineEdit = new QLineEdit(layoutWidget7);
        lNameLineEdit->setObjectName("lNameLineEdit");
        lNameLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(217,236,243,255);\n"
"color: rgba(18,37,51,255);\n"
""));

        horizontalLayout_2->addWidget(lNameLineEdit);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(220, 200, 82, 45));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("background-color:transparent;"));
        label_7->raise();
        pushButton->raise();
        layoutWidget4->raise();
        layoutWidget4->raise();
        layoutWidget4->raise();
        layoutWidget4->raise();
        layoutWidget4->raise();
        layoutWidget4->raise();
        layoutWidget4->raise();
        layoutWidget4->raise();
        background = new QLabel(SignUp);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 751, 651));
        label_9 = new QLabel(SignUp);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(160, 100, 421, 141));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ubuntu Arabic")});
        font2.setPointSize(70);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        label_9->setFont(font2);
        label_9->setStyleSheet(QString::fromUtf8("color: rgba(255, 255, 255);\n"
"text-align: center;\n"
"    text-decoration: none;"));
        background->raise();
        groupBox->raise();
        label_9->raise();

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SignUp", "Sign up", nullptr));
        pushButton->setText(QCoreApplication::translate("SignUp", "Sign Up", nullptr));
        label_8->setText(QCoreApplication::translate("SignUp", "Age", nullptr));
        label_6->setText(QCoreApplication::translate("SignUp", "Country", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "Password    ", nullptr));
        label_5->setText(QCoreApplication::translate("SignUp", "Confirm Password", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "Username:", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "First Name:", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "Last Name:", nullptr));
        label_7->setText(QCoreApplication::translate("SignUp", "Gender", nullptr));
        background->setText(QString());
        label_9->setText(QCoreApplication::translate("SignUp", "Guide Me", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H

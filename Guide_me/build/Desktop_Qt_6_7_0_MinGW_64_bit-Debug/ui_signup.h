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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *fNameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lNameLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *uNameLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *PassLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *cPassLineEdit;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *CountryLineEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QComboBox *GenderComboBox;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_8;
    QLineEdit *AgeLineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName("SignUp");
        SignUp->resize(605, 376);
        groupBox = new QGroupBox(SignUp);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 571, 341));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 40, 531, 211));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(15);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(15);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        fNameLineEdit = new QLineEdit(layoutWidget);
        fNameLineEdit->setObjectName("fNameLineEdit");

        horizontalLayout->addWidget(fNameLineEdit);


        horizontalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lNameLineEdit = new QLineEdit(layoutWidget);
        lNameLineEdit->setObjectName("lNameLineEdit");

        horizontalLayout_2->addWidget(lNameLineEdit);


        horizontalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        uNameLineEdit = new QLineEdit(layoutWidget);
        uNameLineEdit->setObjectName("uNameLineEdit");

        horizontalLayout_3->addWidget(uNameLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        PassLineEdit = new QLineEdit(layoutWidget);
        PassLineEdit->setObjectName("PassLineEdit");
        PassLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(PassLineEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        cPassLineEdit = new QLineEdit(layoutWidget);
        cPassLineEdit->setObjectName("cPassLineEdit");
        cPassLineEdit->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(cPassLineEdit);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        horizontalLayout_7->addWidget(label_6);

        CountryLineEdit = new QLineEdit(layoutWidget);
        CountryLineEdit->setObjectName("CountryLineEdit");

        horizontalLayout_7->addWidget(CountryLineEdit);


        horizontalLayout_10->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        GenderComboBox = new QComboBox(layoutWidget);
        GenderComboBox->setObjectName("GenderComboBox");

        horizontalLayout_8->addWidget(GenderComboBox);


        horizontalLayout_10->addLayout(horizontalLayout_8);


        horizontalLayout_11->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout_9->addWidget(label_8);

        AgeLineEdit = new QLineEdit(layoutWidget);
        AgeLineEdit->setObjectName("AgeLineEdit");

        horizontalLayout_9->addWidget(AgeLineEdit);


        horizontalLayout_11->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(horizontalLayout_11);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(230, 280, 80, 24));

        retranslateUi(SignUp);

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QCoreApplication::translate("SignUp", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SignUp", "Sign up", nullptr));
        label->setText(QCoreApplication::translate("SignUp", "First Name:", nullptr));
        label_2->setText(QCoreApplication::translate("SignUp", "Last Name:", nullptr));
        label_3->setText(QCoreApplication::translate("SignUp", "User Name:", nullptr));
        label_4->setText(QCoreApplication::translate("SignUp", "Password    ", nullptr));
        label_5->setText(QCoreApplication::translate("SignUp", "Confirm Password", nullptr));
        label_6->setText(QCoreApplication::translate("SignUp", "Country", nullptr));
        label_7->setText(QCoreApplication::translate("SignUp", "Gender", nullptr));
        label_8->setText(QCoreApplication::translate("SignUp", "Age", nullptr));
        pushButton->setText(QCoreApplication::translate("SignUp", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H

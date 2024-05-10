/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QComboBox *comboBoxFrom;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *lineEditBudget;
    QLabel *label_4;
    QComboBox *comboBox_To;
    QPushButton *dfs;
    QPushButton *BFS;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(750, 650);
        pushButton = new QPushButton(HomePage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 20, 80, 24));
        groupBox = new QGroupBox(HomePage);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(140, 210, 461, 231));
        groupBox->setStyleSheet(QString::fromUtf8("background-color:rgba(18,37,51,0.8);\n"
""));
        comboBoxFrom = new QComboBox(groupBox);
        comboBoxFrom->setObjectName("comboBoxFrom");
        comboBoxFrom->setGeometry(QRect(100, 50, 131, 31));
        comboBoxFrom->setStyleSheet(QString::fromUtf8("background-color:rgba(217,236,243,255);\n"
"color:rgba(18,37,51,255);"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(50, 90, 71, 31));
        QFont font;
        font.setPointSize(15);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(240, 50, 119, 28));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        lineEditBudget = new QLineEdit(groupBox);
        lineEditBudget->setObjectName("lineEditBudget");
        lineEditBudget->setGeometry(QRect(120, 100, 281, 21));
        lineEditBudget->setStyleSheet(QString::fromUtf8("background-color:rgba(217,236,243,255);\n"
"color:rgba(18,37,51,255);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 50, 51, 28));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        comboBox_To = new QComboBox(groupBox);
        comboBox_To->setObjectName("comboBox_To");
        comboBox_To->setGeometry(QRect(270, 50, 131, 31));
        comboBox_To->setStyleSheet(QString::fromUtf8("background-color:rgba(217,236,243,255);\n"
"color:rgba(18,37,51,255);"));
        dfs = new QPushButton(groupBox);
        dfs->setObjectName("dfs");
        dfs->setGeometry(QRect(50, 130, 171, 31));
        QFont font1;
        font1.setBold(true);
        dfs->setFont(font1);
        dfs->setStyleSheet(QString::fromUtf8("background-color:rgba(217,236,243,255);\n"
"color:rgba(18,37,51,255);\n"
"border-radius: 8px;\n"
""));
        BFS = new QPushButton(groupBox);
        BFS->setObjectName("BFS");
        BFS->setGeometry(QRect(230, 130, 171, 31));
        BFS->setFont(font1);
        BFS->setStyleSheet(QString::fromUtf8("background-color:rgba(217,236,243,255);\n"
"color:rgba(18,37,51,255);\n"
"border-radius: 8px;\n"
""));

        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QDialog *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("HomePage", "Profile", nullptr));
        groupBox->setTitle(QString());
        label_6->setText(QCoreApplication::translate("HomePage", "Budget", nullptr));
        label_5->setText(QCoreApplication::translate("HomePage", "To", nullptr));
        label_4->setText(QCoreApplication::translate("HomePage", "From", nullptr));
        dfs->setText(QCoreApplication::translate("HomePage", "DFS", nullptr));
        BFS->setText(QCoreApplication::translate("HomePage", "BFS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H

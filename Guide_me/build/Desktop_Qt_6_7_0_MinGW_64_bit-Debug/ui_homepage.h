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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_update;
    QPushButton *completeGraph;

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
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 170, 311, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgba(217,236,243,255);\n"
"color:rgba(18,37,51,255);\n"
"border-radius: 8px;\n"
""));

        horizontalLayout_4->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color:rgba(217,236,243,255);\n"
"color:rgba(18,37,51,255);\n"
"border-radius: 8px;"));

        horizontalLayout_4->addWidget(pushButton_3);

        pushButton_update = new QPushButton(layoutWidget);
        pushButton_update->setObjectName("pushButton_update");
        pushButton_update->setStyleSheet(QString::fromUtf8("background-color:rgba(217,236,243,255);\n"
"color:rgba(18,37,51,255);\n"
"border-radius: 8px;\n"
""));

        horizontalLayout_4->addWidget(pushButton_update);

        completeGraph = new QPushButton(groupBox);
        completeGraph->setObjectName("completeGraph");
        completeGraph->setGeometry(QRect(200, 10, 231, 31));
        QFont font2;
        font2.setPointSize(16);
        font2.setUnderline(true);
        completeGraph->setFont(font2);
        completeGraph->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
"color: rgba(217,236,243,255);\n"
"border: 0px;\n"
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
        pushButton_2->setText(QCoreApplication::translate("HomePage", " add", nullptr));
        pushButton_3->setText(QCoreApplication::translate("HomePage", "del", nullptr));
        pushButton_update->setText(QCoreApplication::translate("HomePage", "update", nullptr));
        completeGraph->setText(QCoreApplication::translate("HomePage", "Is this graph complete?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H

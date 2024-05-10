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
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *dfs;
    QPushButton *BFS;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *comboBoxFrom;
    QLabel *label_5;
    QComboBox *comboBox_To;
    QLabel *label_6;
    QLineEdit *lineEditBudget;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(750, 650);
        pushButton = new QPushButton(HomePage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 20, 80, 24));
        layoutWidget = new QWidget(HomePage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(230, 330, 263, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        dfs = new QPushButton(layoutWidget);
        dfs->setObjectName("dfs");

        horizontalLayout_3->addWidget(dfs);

        BFS = new QPushButton(layoutWidget);
        BFS->setObjectName("BFS");

        horizontalLayout_3->addWidget(BFS);

        layoutWidget_2 = new QWidget(HomePage);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(110, 280, 531, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        comboBoxFrom = new QComboBox(layoutWidget_2);
        comboBoxFrom->setObjectName("comboBoxFrom");

        horizontalLayout_4->addWidget(comboBoxFrom);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        horizontalLayout_4->addWidget(label_5);

        comboBox_To = new QComboBox(layoutWidget_2);
        comboBox_To->setObjectName("comboBox_To");

        horizontalLayout_4->addWidget(comboBox_To);

        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName("label_6");

        horizontalLayout_4->addWidget(label_6);

        lineEditBudget = new QLineEdit(layoutWidget_2);
        lineEditBudget->setObjectName("lineEditBudget");

        horizontalLayout_4->addWidget(lineEditBudget);


        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QDialog *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("HomePage", "Profile", nullptr));
        dfs->setText(QCoreApplication::translate("HomePage", "DFS", nullptr));
        BFS->setText(QCoreApplication::translate("HomePage", "BFS", nullptr));
        label_4->setText(QCoreApplication::translate("HomePage", "From", nullptr));
        label_5->setText(QCoreApplication::translate("HomePage", "To", nullptr));
        label_6->setText(QCoreApplication::translate("HomePage", "Budget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H

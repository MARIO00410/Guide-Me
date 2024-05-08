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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBoxFrom;
    QComboBox *comboBox_To;
    QLineEdit *lineEditBudget;
    QHBoxLayout *horizontalLayout;
    QPushButton *dfs;
    QPushButton *BFS;

    void setupUi(QDialog *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName("HomePage");
        HomePage->resize(476, 355);
        pushButton = new QPushButton(HomePage);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 20, 80, 24));
        layoutWidget = new QWidget(HomePage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 120, 311, 91));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        comboBoxFrom = new QComboBox(layoutWidget);
        comboBoxFrom->setObjectName("comboBoxFrom");

        horizontalLayout_2->addWidget(comboBoxFrom);

        comboBox_To = new QComboBox(layoutWidget);
        comboBox_To->setObjectName("comboBox_To");

        horizontalLayout_2->addWidget(comboBox_To);

        lineEditBudget = new QLineEdit(layoutWidget);
        lineEditBudget->setObjectName("lineEditBudget");

        horizontalLayout_2->addWidget(lineEditBudget);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        dfs = new QPushButton(layoutWidget);
        dfs->setObjectName("dfs");

        horizontalLayout->addWidget(dfs);

        BFS = new QPushButton(layoutWidget);
        BFS->setObjectName("BFS");

        horizontalLayout->addWidget(BFS);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QDialog *HomePage)
    {
        HomePage->setWindowTitle(QCoreApplication::translate("HomePage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("HomePage", "Profile", nullptr));
        label->setText(QCoreApplication::translate("HomePage", "From", nullptr));
        label_2->setText(QCoreApplication::translate("HomePage", "To", nullptr));
        label_3->setText(QCoreApplication::translate("HomePage", "Budget", nullptr));
        dfs->setText(QCoreApplication::translate("HomePage", "DFS", nullptr));
        BFS->setText(QCoreApplication::translate("HomePage", "BFS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H

/********************************************************************************
** Form generated from reading UI file 'functions.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCTIONS_H
#define UI_FUNCTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_functions
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *add_transfer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *functions)
    {
        if (functions->objectName().isEmpty())
            functions->setObjectName("functions");
        functions->resize(750, 650);
        functions->setMinimumSize(QSize(750, 650));
        layoutWidget = new QWidget(functions);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(190, 260, 295, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        add_transfer = new QPushButton(layoutWidget);
        add_transfer->setObjectName("add_transfer");

        horizontalLayout->addWidget(add_transfer);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);


        retranslateUi(functions);

        QMetaObject::connectSlotsByName(functions);
    } // setupUi

    void retranslateUi(QDialog *functions)
    {
        functions->setWindowTitle(QCoreApplication::translate("functions", "Dialog", nullptr));
        add_transfer->setText(QCoreApplication::translate("functions", "add", nullptr));
        pushButton_2->setText(QCoreApplication::translate("functions", "delete", nullptr));
        pushButton_3->setText(QCoreApplication::translate("functions", "update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class functions: public Ui_functions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCTIONS_H

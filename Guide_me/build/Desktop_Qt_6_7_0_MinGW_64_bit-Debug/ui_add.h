/********************************************************************************
** Form generated from reading UI file 'add.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_H
#define UI_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add
{
public:
    QPushButton *add_path;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_addscr;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_adddest;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_addtransportation;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_money;

    void setupUi(QDialog *add)
    {
        if (add->objectName().isEmpty())
            add->setObjectName("add");
        add->resize(750, 650);
        add_path = new QPushButton(add);
        add_path->setObjectName("add_path");
        add_path->setGeometry(QRect(290, 270, 93, 29));
        widget = new QWidget(add);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(240, 90, 228, 135));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        lineEdit_addscr = new QLineEdit(widget);
        lineEdit_addscr->setObjectName("lineEdit_addscr");

        horizontalLayout_3->addWidget(lineEdit_addscr);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit_adddest = new QLineEdit(widget);
        lineEdit_adddest->setObjectName("lineEdit_adddest");

        horizontalLayout->addWidget(lineEdit_adddest);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        lineEdit_addtransportation = new QLineEdit(widget);
        lineEdit_addtransportation->setObjectName("lineEdit_addtransportation");

        horizontalLayout_4->addWidget(lineEdit_addtransportation);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_money = new QLineEdit(widget);
        lineEdit_money->setObjectName("lineEdit_money");

        horizontalLayout_2->addWidget(lineEdit_money);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(add);

        QMetaObject::connectSlotsByName(add);
    } // setupUi

    void retranslateUi(QDialog *add)
    {
        add->setWindowTitle(QCoreApplication::translate("add", "Dialog", nullptr));
        add_path->setText(QCoreApplication::translate("add", "add path", nullptr));
        label_3->setText(QCoreApplication::translate("add", "Source", nullptr));
        label->setText(QCoreApplication::translate("add", "Destination", nullptr));
        label_4->setText(QCoreApplication::translate("add", "Transportation", nullptr));
        label_2->setText(QCoreApplication::translate("add", "Cost", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add: public Ui_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_H

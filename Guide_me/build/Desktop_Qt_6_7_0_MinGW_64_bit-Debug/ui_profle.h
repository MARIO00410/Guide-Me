/********************************************************************************
** Form generated from reading UI file 'profle.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFLE_H
#define UI_PROFLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profle
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Info;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_back;
    QPushButton *pushButton_logout;

    void setupUi(QDialog *Profle)
    {
        if (Profle->objectName().isEmpty())
            Profle->setObjectName("Profle");
        Profle->resize(750, 650);
        layoutWidget = new QWidget(Profle);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(260, 210, 211, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Info = new QPushButton(layoutWidget);
        pushButton_Info->setObjectName("pushButton_Info");

        verticalLayout->addWidget(pushButton_Info);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_back = new QPushButton(layoutWidget);
        pushButton_back->setObjectName("pushButton_back");

        horizontalLayout->addWidget(pushButton_back);

        pushButton_logout = new QPushButton(layoutWidget);
        pushButton_logout->setObjectName("pushButton_logout");

        horizontalLayout->addWidget(pushButton_logout);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Profle);

        QMetaObject::connectSlotsByName(Profle);
    } // setupUi

    void retranslateUi(QDialog *Profle)
    {
        Profle->setWindowTitle(QCoreApplication::translate("Profle", "Dialog", nullptr));
        pushButton_Info->setText(QCoreApplication::translate("Profle", "Personal Info", nullptr));
        pushButton_back->setText(QCoreApplication::translate("Profle", "Back", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("Profle", "Log out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profle: public Ui_Profle {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFLE_H

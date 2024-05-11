/********************************************************************************
** Form generated from reading UI file 'update_transportation.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_TRANSPORTATION_H
#define UI_UPDATE_TRANSPORTATION_H

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

class Ui_update_transportation
{
public:
    QPushButton *update_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_source;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_dest;
    QPushButton *show_transportation;
    QPushButton *back;

    void setupUi(QDialog *update_transportation)
    {
        if (update_transportation->objectName().isEmpty())
            update_transportation->setObjectName("update_transportation");
        update_transportation->resize(750, 650);
        update_transportation->setMinimumSize(QSize(750, 650));
        update_2 = new QPushButton(update_transportation);
        update_2->setObjectName("update_2");
        update_2->setGeometry(QRect(540, 50, 83, 29));
        layoutWidget = new QWidget(update_transportation);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(160, 30, 304, 71));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        lineEdit_source = new QLineEdit(layoutWidget);
        lineEdit_source->setObjectName("lineEdit_source");

        horizontalLayout->addWidget(lineEdit_source);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        lineEdit_dest = new QLineEdit(layoutWidget);
        lineEdit_dest->setObjectName("lineEdit_dest");

        horizontalLayout_2->addWidget(lineEdit_dest);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        show_transportation = new QPushButton(layoutWidget);
        show_transportation->setObjectName("show_transportation");

        horizontalLayout_3->addWidget(show_transportation);

        back = new QPushButton(update_transportation);
        back->setObjectName("back");
        back->setGeometry(QRect(560, 570, 83, 29));

        retranslateUi(update_transportation);

        QMetaObject::connectSlotsByName(update_transportation);
    } // setupUi

    void retranslateUi(QDialog *update_transportation)
    {
        update_transportation->setWindowTitle(QCoreApplication::translate("update_transportation", "Dialog", nullptr));
        update_2->setText(QCoreApplication::translate("update_transportation", "update", nullptr));
        label_2->setText(QCoreApplication::translate("update_transportation", "Source", nullptr));
        label->setText(QCoreApplication::translate("update_transportation", "Destination", nullptr));
        show_transportation->setText(QCoreApplication::translate("update_transportation", "show", nullptr));
        back->setText(QCoreApplication::translate("update_transportation", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class update_transportation: public Ui_update_transportation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_TRANSPORTATION_H

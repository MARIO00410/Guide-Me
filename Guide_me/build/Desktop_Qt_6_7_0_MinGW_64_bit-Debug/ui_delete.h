/********************************************************************************
** Form generated from reading UI file 'delete.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_H
#define UI_DELETE_H

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

class Ui_Delete
{
public:
    QPushButton *delete_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_source;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_dest;
    QPushButton *show_transportations;
    QPushButton *Delete_back;

    void setupUi(QDialog *Delete)
    {
        if (Delete->objectName().isEmpty())
            Delete->setObjectName("Delete");
        Delete->resize(750, 650);
        delete_2 = new QPushButton(Delete);
        delete_2->setObjectName("delete_2");
        delete_2->setGeometry(QRect(550, 70, 83, 29));
        layoutWidget = new QWidget(Delete);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(170, 50, 304, 71));
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

        show_transportations = new QPushButton(layoutWidget);
        show_transportations->setObjectName("show_transportations");

        horizontalLayout_3->addWidget(show_transportations);

        Delete_back = new QPushButton(Delete);
        Delete_back->setObjectName("Delete_back");
        Delete_back->setGeometry(QRect(570, 590, 83, 29));

        retranslateUi(Delete);

        QMetaObject::connectSlotsByName(Delete);
    } // setupUi

    void retranslateUi(QDialog *Delete)
    {
        Delete->setWindowTitle(QCoreApplication::translate("Delete", "Dialog", nullptr));
        delete_2->setText(QCoreApplication::translate("Delete", "delete", nullptr));
        label_2->setText(QCoreApplication::translate("Delete", "Source", nullptr));
        label->setText(QCoreApplication::translate("Delete", "Destination", nullptr));
        show_transportations->setText(QCoreApplication::translate("Delete", "show", nullptr));
        Delete_back->setText(QCoreApplication::translate("Delete", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Delete: public Ui_Delete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_H

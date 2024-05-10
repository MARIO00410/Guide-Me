/********************************************************************************
** Form generated from reading UI file 'dfs.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DFS_H
#define UI_DFS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DFS
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonBack;
    QPushButton *dfsButton;

    void setupUi(QDialog *DFS)
    {
        if (DFS->objectName().isEmpty())
            DFS->setObjectName("DFS");
        DFS->resize(750, 650);
        layoutWidget = new QWidget(DFS);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 751, 601));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(layoutWidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setStyleSheet(QString::fromUtf8("background:transparent;"));

        horizontalLayout->addWidget(graphicsView);

        widget = new QWidget(DFS);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 610, 169, 26));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonBack = new QPushButton(widget);
        pushButtonBack->setObjectName("pushButtonBack");

        horizontalLayout_3->addWidget(pushButtonBack);

        dfsButton = new QPushButton(widget);
        dfsButton->setObjectName("dfsButton");

        horizontalLayout_3->addWidget(dfsButton);


        retranslateUi(DFS);

        QMetaObject::connectSlotsByName(DFS);
    } // setupUi

    void retranslateUi(QDialog *DFS)
    {
        DFS->setWindowTitle(QCoreApplication::translate("DFS", "Dialog", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("DFS", "Back", nullptr));
        dfsButton->setText(QCoreApplication::translate("DFS", "Show Route", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DFS: public Ui_DFS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFS_H

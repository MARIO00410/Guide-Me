/********************************************************************************
** Form generated from reading UI file 'bfs.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BFS_H
#define UI_BFS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BFS
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonBack;
    QPushButton *showRoute;

    void setupUi(QDialog *BFS)
    {
        if (BFS->objectName().isEmpty())
            BFS->setObjectName("BFS");
        BFS->resize(750, 650);
        layoutWidget = new QWidget(BFS);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 781, 601));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(layoutWidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setStyleSheet(QString::fromUtf8("background:rgba(0,0,0,0.5);"));

        horizontalLayout->addWidget(graphicsView);

        layoutWidget1 = new QWidget(BFS);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(0, 610, 169, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonBack = new QPushButton(layoutWidget1);
        pushButtonBack->setObjectName("pushButtonBack");

        horizontalLayout_2->addWidget(pushButtonBack);

        showRoute = new QPushButton(layoutWidget1);
        showRoute->setObjectName("showRoute");

        horizontalLayout_2->addWidget(showRoute);


        retranslateUi(BFS);

        QMetaObject::connectSlotsByName(BFS);
    } // setupUi

    void retranslateUi(QDialog *BFS)
    {
        BFS->setWindowTitle(QCoreApplication::translate("BFS", "Dialog", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("BFS", "Back", nullptr));
        showRoute->setText(QCoreApplication::translate("BFS", "Show Route", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BFS: public Ui_BFS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BFS_H

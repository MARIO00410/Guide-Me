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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BFS
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QPushButton *showRoute;
    QPushButton *pushButtonBack;

    void setupUi(QDialog *BFS)
    {
        if (BFS->objectName().isEmpty())
            BFS->setObjectName("BFS");
        BFS->resize(837, 527);
        layoutWidget = new QWidget(BFS);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 821, 461));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);

        showRoute = new QPushButton(layoutWidget);
        showRoute->setObjectName("showRoute");

        horizontalLayout->addWidget(showRoute);

        pushButtonBack = new QPushButton(BFS);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(110, 490, 80, 24));

        retranslateUi(BFS);

        QMetaObject::connectSlotsByName(BFS);
    } // setupUi

    void retranslateUi(QDialog *BFS)
    {
        BFS->setWindowTitle(QCoreApplication::translate("BFS", "Dialog", nullptr));
        showRoute->setText(QCoreApplication::translate("BFS", "Show Route", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("BFS", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BFS: public Ui_BFS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BFS_H

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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DFS
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;
    QPushButton *dfsButton;
    QPushButton *pushButtonBack;

    void setupUi(QDialog *DFS)
    {
        if (DFS->objectName().isEmpty())
            DFS->setObjectName("DFS");
        DFS->resize(836, 511);
        layoutWidget = new QWidget(DFS);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 821, 461));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout->addWidget(textEdit);

        dfsButton = new QPushButton(layoutWidget);
        dfsButton->setObjectName("dfsButton");

        horizontalLayout->addWidget(dfsButton);

        pushButtonBack = new QPushButton(DFS);
        pushButtonBack->setObjectName("pushButtonBack");
        pushButtonBack->setGeometry(QRect(80, 480, 80, 24));

        retranslateUi(DFS);

        QMetaObject::connectSlotsByName(DFS);
    } // setupUi

    void retranslateUi(QDialog *DFS)
    {
        DFS->setWindowTitle(QCoreApplication::translate("DFS", "Dialog", nullptr));
        dfsButton->setText(QCoreApplication::translate("DFS", "Show Route", nullptr));
        pushButtonBack->setText(QCoreApplication::translate("DFS", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DFS: public Ui_DFS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFS_H

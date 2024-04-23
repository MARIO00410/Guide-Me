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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DFS
{
public:
    QPushButton *dfsButton;

    void setupUi(QDialog *DFS)
    {
        if (DFS->objectName().isEmpty())
            DFS->setObjectName("DFS");
        DFS->resize(400, 300);
        dfsButton = new QPushButton(DFS);
        dfsButton->setObjectName("dfsButton");
        dfsButton->setGeometry(QRect(140, 90, 80, 18));

        retranslateUi(DFS);

        QMetaObject::connectSlotsByName(DFS);
    } // setupUi

    void retranslateUi(QDialog *DFS)
    {
        DFS->setWindowTitle(QCoreApplication::translate("DFS", "Dialog", nullptr));
        dfsButton->setText(QCoreApplication::translate("DFS", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DFS: public Ui_DFS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFS_H

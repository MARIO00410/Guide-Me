#include "delete.h"
#include "ui_delete.h"
#include <QCheckBox>
#include <QWidget>
#include <QVBoxLayout>
#include"readgraph.h"
#include"homepage.h"
using namespace std;
Delete::Delete(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Delete)
{
    ui->setupUi(this);
}
void Delete:: del(string src,string dest,string transportation)
    {
     for(int i=0;i<ReadGraph::graph[src].size();i++)
    {
            if(ReadGraph::graph[src][i].transportation==transportation && ReadGraph::graph[src][i].destination==dest)
         {
            ReadGraph::graph[src].erase(ReadGraph::graph[src].begin()+i);

         }
         if(ReadGraph::graph[dest][i].transportation==transportation && ReadGraph::graph[dest][i].destination==src)
         {
             ReadGraph::graph[dest].erase(ReadGraph::graph[dest].begin()+i);
         }

    }
    }

Delete::~Delete()
{
    delete ui;
}
void Delete::onCheckBoxStateChanged(int state)
{
    QCheckBox* checkBox = qobject_cast<QCheckBox*>(sender());
    if (checkBox && state == Qt::Checked)
    {
        checkedCheckboxes.push_back(checkBox);
    }

}
void Delete::on_show_transportations_clicked()
{
     src=ui->lineEdit_source->text().toStdString();
    dst=ui->lineEdit_dest->text().toStdString();

    for(int i=0,j=0;i<ReadGraph::graph[src].size();i++)
    {
        if(ReadGraph::graph[src][i].destination == dst)
            {
            QString text = QString::fromStdString(ReadGraph::graph[src][i].transportation);
            string trans=ReadGraph::graph[src][i].transportation;
             checkbox.push_back(new QCheckBox(text, this));
            connect(checkbox[j], &QCheckBox::stateChanged, this, &Delete::onCheckBoxStateChanged);
             checkbox[j]->setGeometry(180, 150 + j * 40, 93, 36);
             checkbox[j]->show();
             j++;
            }
    }

}


void Delete::on_delete_2_clicked()
{
    for (QCheckBox* check: checkedCheckboxes)
    {
        check->hide();
        QString labelText = check->text();  // Get the text of the checkbox
        string tran = labelText.toStdString();
        del(src, dst,tran);
    }
    for (QCheckBox* cb : checkbox) {
        delete cb;
    }


    checkbox.clear();

}


void Delete::on_Delete_back_clicked()
{
    HomePage home;
    home.setModal(true);
    hide();
    home.exec();
}


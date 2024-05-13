#include "homepage.h"
#include "ui_homepage.h"
#include <profle.h>
#include <dfs.h>
#include <readgraph.h>
#include <bfs.h>
#include"add.h"
#include"delete.h"
#include"update_transportation.h"
#include <QPainter>
#include <QMovie>
#include <QLabel>

HomePage::HomePage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
    for(auto& item :ReadGraph::graph){
        if(item.second.size()==0)
            continue;
        ui->comboBoxFrom->addItem(QString::fromStdString(item.first));
        ui->comboBox_To->addItem(QString::fromStdString(item.first));
    }

    QPixmap bkgnd("C:\\Users\\youss\\OneDrive\\Desktop\\Untitled-3.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_pushButton_clicked()
{
    Profle profile;
    profile.setModal(true);
    hide();
    profile.exec();
}


void HomePage::on_dfs_clicked()
{
    if(ui->comboBoxFrom->currentText().toStdString()!=ui->comboBox_To->currentText().toStdString()){
        ReadGraph readGraph;
        readGraph.StartFrom = ui->comboBoxFrom->currentText().toStdString();
        readGraph.GoTo = ui->comboBox_To->currentText().toStdString();
        readGraph.Budget = ui->lineEditBudget->text().toInt();
        DFS dfs;
        dfs.setModal(true);
        hide();
        dfs.exec();
    }
}


void HomePage::on_BFS_clicked()
{
    if(ui->comboBoxFrom->currentText().toStdString()!=ui->comboBox_To->currentText().toStdString()){
        ReadGraph readGraph;
        readGraph.StartFrom = ui->comboBoxFrom->currentText().toStdString();
        readGraph.GoTo = ui->comboBox_To->currentText().toStdString();
        readGraph.Budget = ui->lineEditBudget->text().toInt();
        BFS bfs;
        bfs.setModal(true);
        hide();
        bfs.exec();
    }
}


void HomePage::on_completeGraph_clicked()
{
    bool complete=true;qDebug()<<ReadGraph::Cities.size();
    for(int i=0;i<ReadGraph::Cities.size();i++)
    {
        vector<string>destinationsOfSource;
        int totalnumberofdestination=0;
        for(int j=0;j<ReadGraph::graph[ReadGraph::Cities[i]].size();j++)
        {
            bool verfiy=true;
            for(int k=0;k<destinationsOfSource.size();k++)
            {
                if(destinationsOfSource[k]==ReadGraph::graph[ReadGraph::Cities[i]][j].destination||destinationsOfSource[k]==ReadGraph::Cities[i])
                    verfiy=false;

            }
            if(verfiy==true)
            {
                destinationsOfSource.push_back(ReadGraph::graph[ReadGraph::Cities[i]][j].destination);
                totalnumberofdestination++;
            }
        }

    }

    if(complete)
        qDebug()<<"Complete graph";
    else
         qDebug()<<"Not Complete graph";
}


void HomePage::on_pushButton_2_clicked()
{
    add trans ;
    trans.setModal(true);
    hide();
    trans.exec();
}


void HomePage::on_pushButton_3_clicked()
{
    Delete trans ;
    trans.setModal(true);
    hide();
    trans.exec();
}


void HomePage::on_pushButton_update_clicked()
{
    update_transportation u;
    u.setModal(true);
    hide();
    u.exec();
}


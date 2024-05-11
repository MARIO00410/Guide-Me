#include "homepage.h"
#include "ui_homepage.h"
#include <profle.h>
#include <dfs.h>
#include <readgraph.h>
#include <bfs.h>
#include"add.h"
#include"delete.h"

HomePage::HomePage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
    for(auto& item :ReadGraph::Cities){
        ui->comboBoxFrom->addItem(QString::fromStdString(item));
        ui->comboBox_To->addItem(QString::fromStdString(item));
    }
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
    ReadGraph readGraph;
    readGraph.StartFrom = ui->comboBoxFrom->currentText().toStdString();
    readGraph.GoTo = ui->comboBox_To->currentText().toStdString();
    readGraph.Budget = ui->lineEditBudget->text().toInt();
    DFS dfs;
    dfs.setModal(true);
    hide();
    dfs.exec();
}


void HomePage::on_BFS_clicked()
{
    ReadGraph readGraph;
    readGraph.StartFrom = ui->comboBoxFrom->currentText().toStdString();
    readGraph.GoTo = ui->comboBox_To->currentText().toStdString();
    readGraph.Budget = ui->lineEditBudget->text().toInt();
    BFS bfs;
    bfs.setModal(true);
    hide();
    bfs.exec();
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


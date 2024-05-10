#include "homepage.h"
#include "ui_homepage.h"
#include <profle.h>
#include <dfs.h>
#include <readgraph.h>
#include <bfs.h>
#include <QPainter>
#include <QMovie>
#include <QLabel>

HomePage::HomePage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
    for(auto& item :ReadGraph::Cities){
        ui->comboBoxFrom->addItem(QString::fromStdString(item));
        ui->comboBox_To->addItem(QString::fromStdString(item));
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


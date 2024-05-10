#include "add.h"
#include "path.h"
#include "readgraph.h"
#include "ui_add.h"
#include <QString>
#include <string>
#include <QLineEdit>
#include <QMessageBox>
#include <QDebug>
#include"homepage.h"
using namespace std;
add::add(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::add)
{
    ui->setupUi(this);
}
void add::addPath(string src, string dest  ,string transportation ,int money)
{


 Path newpath1(dest,money,transportation);
 Path newpath2(src,money,transportation);
  ReadGraph::graph[src].push_back(newpath1);
 ReadGraph::graph[dest].push_back(newpath2);
  if( ReadGraph::cits[src]==0)
     {
       ReadGraph::Cities.push_back(src);
       ReadGraph::cits[src]++;
     }
        if( ReadGraph::cits[dest]==0){
    ReadGraph::Cities.push_back(dest);
    ReadGraph::cits[dest]++;
 }
  int sourceId = ReadGraph::cityId[src] ? ReadGraph::cityId[src] : (ReadGraph::cityId[src] = ReadGraph::cityId.size() + 1);
  int destId = ReadGraph::cityId[dest] ? ReadGraph::cityId[dest] : (ReadGraph::cityId[dest] = ReadGraph::cityId.size() + 1);

  ReadGraph::adjList[sourceId].push_back(destId);
  ReadGraph::adjList[destId].push_back(sourceId);
}

add::~add()
{
    delete ui;
}

void add::on_add_path_clicked()
{
    string src=ui->lineEdit_addscr->text().toStdString();
    string dest = ui->lineEdit_adddest->text().toStdString();
    string transportation= ui->lineEdit_addtransportation->text().toStdString();
    int cost = ui->lineEdit_money->text().toInt();
    addPath( src, dest, transportation,cost) ;
    HomePage w ;
    w.setModal(true);
    hide();
    w.exec();
}


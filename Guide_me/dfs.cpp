#include "dfs.h"
#include "ui_dfs.h"
#include "path.h"
#include <QDialog>
#include <homepage.h>
#include <readgraph.h>
#include "nodeitem.h"
#include "edgeitem.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QPainter>
#include<QTimer>
#include <cstdlib>
#include <QThread>
#include <QLabel>
#include <qDebug>

DFS::DFS(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DFS)
{
    ui->setupUi(this);
    //ui->textEdit->setReadOnly(true);
    QPixmap bkgnd("C:\\Users\\youss\\OneDrive\\Desktop\\resource for Guide Me GUI\\WhatsApp_Image_2024-04-13_at_19.31.07_8e45379f.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

    QGraphicsScene *scene = new QGraphicsScene();
    view = ui->graphicsView; // Initialize view
    view->setScene(scene);
    view->setGeometry(0, 0, 700, 550);
    view->setRenderHint(QPainter::Antialiasing);
}


void dfs(string from, string destination, int budget, vector<Path>& route,map<string, bool>& vis, vector<vector<Path>>& Way) {
    vis[from] = true;

    if (vis[destination]) {
        Way.push_back(route);
        vis[from] = false;
        return;
    }

    const auto &graph = ReadGraph::graph;


    for (size_t i = 0; i < graph.at(from).size(); i++) {

        if (vis[graph.at(from)[i].destination]!=true && budget - graph.at(from)[i].money >= 0) {
            route.push_back({ graph.at(from)[i].destination,graph.at(from)[i].money ,graph.at(from)[i].transportation});
            dfs(graph.at(from)[i].destination,destination, budget -graph.at(from)[i].money,route, vis, Way);

            route.pop_back();
            vis[graph.at(from)[i].destination] = false;
        }
    }
}

bool comparePathsByTotalAmount(vector<Path>& route1, vector<Path>& route2) {
    int totalAmount1 = 0, totalAmount2 = 0;
    for (size_t i = 0; i < route1.size(); i++){
        totalAmount1 += route1[i].money;
    }
    for (size_t i = 0; i < route2.size(); i++) {
        totalAmount2 += route2[i].money;
    }
    return totalAmount1 < totalAmount2;
}


DFS::~DFS()
{
    delete ui;
}


void DFS::on_dfsButton_clicked()
{
    map<string, bool>vis;//visited map to check paths
    vector<vector<Path>>Way;

    QString Route="";
    int TotalAmount;
    vector<int> totalPrices;
    vector<Path>route;
    string start=ReadGraph::StartFrom;
    dfs(ReadGraph::StartFrom,ReadGraph::GoTo,ReadGraph::Budget,route, vis, Way);
    sort(Way.begin(), Way.end(), comparePathsByTotalAmount);

    for (size_t i = 0; i < Way.size(); i++) {
        TotalAmount = 0;
        Route += ReadGraph::StartFrom;
        for (size_t j = 0; j < Way[i].size(); j++) {
            Route+=( " (" + Way[i][j].transportation + ") -> " + Way[i][j].destination);
            TotalAmount += Way[i][j].money;
        }
        Route += ("\n TotalAmount "+ to_string(TotalAmount) +'\n');
        totalPrices.push_back(TotalAmount);
    }

    //ui->textEdit->setText(Route);
    qDebug() << Route;
    ui->dfsButton->setEnabled(false);


    for (int i = 0; i < Way.size(); i++) {
        int xOffset = 150; // Calculate yOffset for the current row
        QGraphicsScene *scene = view->scene();
        // Add source node for each row
        NodeItem *sourceNode = new NodeItem(QString::fromStdString(start));
        // Adjust the position as needed
        scene->addItem(sourceNode);
        int numNodes = Way[i].size();
        int yOffset = 150 *(i); // Reset x-coordinate for each new Way
        sourceNode->setPos(xOffset,yOffset);
        NodeItem *prev=sourceNode;
        for (int j = 0; j < numNodes; j++) {
            NodeItem *node = new NodeItem(QString::fromStdString(Way[i][j].destination));
            qreal x = xOffset + (j + 1) * 150;
            // Keep y position same for all nodes in the row
            qreal y = yOffset ;
            node->setPos(x, y);
            //QThread::msleep(1000);
            scene->addItem(node);
            //this_thread::sleep_for(2s);

            EdgeItem *edge=new EdgeItem(prev,node);
            scene->addItem(edge);

            qreal midX = (prev->pos().x() + node->pos().x()) / 2.0;
            qreal midY = (prev->pos().y() + node->pos().y()) / 2.0; // Adjust y to position the label above the edge

            // Create a label for the transportation method and position it above the edge


           // else if()
            QLabel *transportationLabel = new QLabel(QString::fromStdString(Way[i][j].transportation));
            transportationLabel->setParent(nullptr); // No parent, unless there is an appropriate QWidget to set as parent

            if(Way[i][j].transportation=="Bus")
            {
                  QPixmap pixmap("C:/Users/mario/ya rb/bus2.png");
                transportationLabel->setPixmap(pixmap);
            }
            else if(Way[i][j].transportation=="Metro")
            {
                QPixmap pixmap("C:/Users/mario/ya rb/metro2.png");
                transportationLabel->setPixmap(pixmap);
            }
            else if(Way[i][j].transportation=="Train")
            {    QPixmap pixmap("C:/Users/mario/ya rb/tain2.png");
                transportationLabel->setPixmap(pixmap);

            }
                else if(Way[i][j].transportation=="Microbus")
            {
                QPixmap pixmap("C:/Users/mario/ya rb/microbus2.png");
                transportationLabel->setPixmap(pixmap);
            }
                //   QPixmap pixmap("C:/Users/mario/ya rb/tain2.png");
          //  transportationLabel->setPixmap(pixmap);
           // transportationLabel->setMask(pixmap.mask());
            transportationLabel->setGeometry(midX-10, midY-35, 50, 65); // Adjust size as needed
            transportationLabel->setStyleSheet("background-color: rgba(0,0,0,0%)");

            scene->addWidget(transportationLabel); // Add the label to the scene


            QLabel *moneyLabel = new QLabel(QString::fromStdString(to_string(Way[i][j].money)));
            moneyLabel->setParent(nullptr); // No parent, unless there is an appropriate QWidget to set as parent
            moneyLabel->setStyleSheet("background-color: rgba(0,0,0,0%)");
            moneyLabel->setGeometry(midX, midY+20, 50, 20); // Adjust size as needed

            scene->addWidget(moneyLabel);

            qreal xTotal = xOffset + (numNodes+0.5) * 150;


            QLabel *totalLabel = new QLabel(QString::fromStdString("Total Price: " + to_string(totalPrices.at(i))));
            totalLabel->setParent(nullptr); // No parent, unless there is an appropriate QWidget to set as parent

            totalLabel->setGeometry(xTotal, y, 250, 20); // Adjust size as needed
            totalLabel->setStyleSheet("background-color: rgba(0,0,0,0%)");

            scene->addWidget(totalLabel);

            prev= node;
        }
    }
    totalPrices.clear();
}

void DFS::on_pushButtonBack_clicked()
{
    HomePage homePage;
    homePage.setModal(true);
    hide();
    homePage.exec();
}

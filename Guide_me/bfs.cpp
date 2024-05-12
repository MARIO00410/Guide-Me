#include "bfs.h"
#include <path.h>
#include "ui_bfs.h"
#include <vector>
#include <queue>
#include <set>
#include <string>
#include <homepage.h>
#include <readgraph.h>
#include "nodeitem.h"
#include "edgeitem.h"
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QPainter>
#include <QLabel>
#include <qDebug>

QString Route="";
int off=0;

BFS::BFS(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BFS)
{
    ui->setupUi(this);
    //ui->textEdit->setReadOnly(true);
    QPixmap bkgnd("C:/Users/mario/ya rb/WhatsApp_Image_2024-04-13_at_19.31.07_8e45379f.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::KeepAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Window, bkgnd);
    this->setPalette(palette);

    // Create a new QGraphicsScene and set it to the QGraphicsView
    QGraphicsScene *scene = new QGraphicsScene();
    view = ui->graphicsView; // Initialize view
    view->setScene(scene);
    view->setGeometry(0, 0, 700, 550);
    view->setRenderHint(QPainter::Antialiasing);
}




//control output format
/*struct Path {
    int cityId;//get city name
    string method;//transaction transportation
    int price;//calculate total spend in the journey
};*/

//sorting condition based on Path structure
struct ComparePaths {
    bool operator()(const vector<Path>& path1, const vector<Path>& path2) const {
        int totalSpend1 = 0, totalSpend2 = 0;
        for (const auto& segment : path1) totalSpend1 += segment.money;
        for (const auto& segment : path2) totalSpend2 += segment.money;
        return totalSpend1 < totalSpend2;
    }
};

//global variables
set<string> printedPaths;

string getCityById(int id) {//this func get id and return name of city
    ReadGraph readGraph;
    for (const auto& entry : readGraph.cityId) {
        if (entry.second == id) {
            return entry.first;
        }
    }
    return "";
}

//to get a unique path to use in the set
/*string generatePathKey(vector<Path>& path) {//to make sure this path is unique so we put it in set
    string key = "";
    for (auto& segment : path) {
        key += to_string(segment.id) + "-" + segment.transportation + "-" + to_string(segment.money) + "->";
    }
    return key;
}*/
set<vector<Path>,ComparePaths> sortedPaths ;


void printPath(QGraphicsScene* scene, string source) {
  //  string key = generatePathKey(path);

    //if (/*return index*/printedPaths.find(key) != printedPaths.end()) {
      //  return;
    //}
    //printedPaths.insert(key);

  for(auto it=sortedPaths.begin();it!=sortedPaths.end();it++){
     int totalSpend = 0;
      for (int i = 0; i < it->size(); i++){

          Route += getCityById(it->at(i).id);
        if (i != it->size() - 1) {
              Route += " (" + it->at(i + 1).transportation + ") ";
            Route += " -> ";
        }
        totalSpend += it->at(i).money;
    }
    Route += "\n Total Spend: " + to_string(totalSpend) + '\n';

    int xOffset = 150;
    NodeItem *sourceNode = new NodeItem(QString::fromStdString(source));
    scene->addItem(sourceNode);
    int numNodes = it->size();
    int yOffset = 150 * off++;
    sourceNode->setPos(xOffset, yOffset);
    NodeItem *prev = sourceNode;

    for (int j = 0; j < numNodes - 1 ; j++) {
        NodeItem *node = new NodeItem(QString::fromStdString(getCityById(it->at(j + 1).id)));
        qreal x = xOffset + (j + 1) * 150;
        qreal y = yOffset ;
        node->setPos(x, y);
        scene->addItem(node);

        // Create edge item
        EdgeItem *edge = new EdgeItem(prev, node);
        scene->addItem(edge);

        // Calculate the midpoint of the edge for positioning the method label
        qreal midX = (prev->pos().x() + node->pos().x()) / 2.0;
        qreal midY = (prev->pos().y() + node->pos().y()) / 2.0; // Adjust y to position the label above the edge

        // Create a label for the transportation method and position it above the edge
        QLabel *transportationLabel = new QLabel(QString::fromStdString(it->at(j+1).transportation));
        transportationLabel->setParent(nullptr); // No parent, unless there is an appropriate QWidget to set as parent
        qDebug()<<it->at(j).transportation;
        if(it->at(j+1).transportation=="Bus")
        {
            QPixmap pixmap("C:/Users/mario/ya rb/bus2.png");
            transportationLabel->setPixmap(pixmap);
        }
        else if(it->at(j+1).transportation=="Metro")
        {
            QPixmap pixmap("C:/Users/mario/ya rb/metro2.png");
            transportationLabel->setPixmap(pixmap);
        }
        else if(it->at(j+1).transportation=="Train")
        {
            QPixmap pixmap("C:/Users/mario/ya rb/tain2.png");
            transportationLabel->setPixmap(pixmap);
        }
        else if(it->at(j+1).transportation=="Microbus")
        {
            QPixmap pixmap("C:/Users/mario/ya rb/microbus2.png");
            transportationLabel->setPixmap(pixmap);
        }

        transportationLabel->setGeometry(midX-10, midY-35, 50, 65); // Adjust size as needed
        transportationLabel->setStyleSheet("background-color: rgba(0,0,0,0%)");

        scene->addWidget(transportationLabel);
        // Add the label to the scene


        QLabel *moneyLabel = new QLabel(QString::fromStdString(to_string(it->at(j+1).money)));
        moneyLabel->setParent(nullptr); // No parent, unless there is an appropriate QWidget to set as parent
        moneyLabel->setStyleSheet("background-color: rgba(0,0,0,0%)");
        moneyLabel->setGeometry(midX, midY+20, 50, 20); // Adjust size as needed
        scene->addWidget(moneyLabel);





        prev = node;
    }

    qreal x = xOffset + (numNodes-0.5) * 150;

    QLabel *totalLabel = new QLabel(QString::fromStdString("Total Price: " + to_string(totalSpend)));
    totalLabel->setParent(nullptr); // No parent, unless there is an appropriate QWidget to set as parent

    totalLabel->setGeometry(x, yOffset, 250, 20); // Adjust size as needed
    totalLabel->setStyleSheet("background-color: rgba(0,0,0,0%)");
    scene->addWidget(totalLabel);

}
}



bool isNotVisited(int nodeId, vector<Path>& path) {
    for (const auto& segment : path) {
        if (segment.id == nodeId) {
            return false;
        }
    }
    return true;
}

void findPaths(int sourceId, int destId, int budget, QGraphicsScene* scene, string source) {
    queue<vector<Path>> q;
    vector<Path> path;
    path.push_back(Path(getCityById(sourceId),0,"",sourceId));
    q.push(path);

    while (!q.empty()) {
        path = q.front();
        q.pop();

        int lastNodeId = path[path.size() - 1].id;
        int totalSpend = 0;

        for (auto& segment : path) {
            totalSpend += segment.money;
        }

        if (totalSpend <= budget) {
            if (lastNodeId == destId) {
               // printPath(path, scene, source);
                sortedPaths.insert(path);
            }

            ReadGraph readGraph;
            for (int nextNodeId : readGraph.adjList[lastNodeId]) {
                if (isNotVisited(nextNodeId, path)) {
                    for (const auto& edge : readGraph.graph[getCityById(lastNodeId)]) {
                        if (readGraph.cityId[edge.destination] == nextNodeId) {
                            vector<Path> newPath = path;
                            newPath.push_back(Path(getCityById(nextNodeId), edge.money, edge.transportation, nextNodeId));
                            q.push(newPath);
                        }
                    }
                }
            }
        }
    }
}

BFS::~BFS()
{
    delete ui;
}

void BFS::on_showRoute_clicked()
{
    ReadGraph readGraph;
    //readGraph.GetGraph();
    QGraphicsScene *scene = view -> scene();

    string source = readGraph.StartFrom;
    string destination = readGraph.GoTo;
    int budget = readGraph.Budget;
    findPaths(readGraph.cityId[source], readGraph.cityId[destination], budget, scene, source);
    printPath(scene,source);
    qDebug() << Route;
    Route = "";
    //ui->textEdit->setText(Route);
    ui->showRoute->setEnabled(false);
}

void BFS::on_pushButtonBack_clicked()
{
    HomePage homePage;
    homePage.setModal(true);
    hide();
    homePage.exec();
}


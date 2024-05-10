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

    // Create a new QGraphicsScene and set it to the QGraphicsView
    QGraphicsScene *scene = new QGraphicsScene();
    view = ui->graphicsView; // Initialize view
    view->setScene(scene);
    view->setGeometry(0, 0, 700, 550);
    view->setRenderHint(QPainter::Antialiasing);
}




//control output format
struct PrintSegment {
    int cityId;//get city name
    string method;//transaction transportation
    int price;//calculate total spend in the journey
};

//sorting condition based on PrintSegment structure
struct ComparePaths {
    bool operator()(const vector<PrintSegment>& path1, const vector<PrintSegment>& path2) const {
        int totalSpend1 = 0, totalSpend2 = 0;
        for (const auto& segment : path1) totalSpend1 += segment.price;
        for (const auto& segment : path2) totalSpend2 += segment.price;
        return totalSpend1 > totalSpend2;
    }
};

//global variables
set<string> printedPaths;

string getCityById(int id) {
    ReadGraph readGraph;
    for (const auto& entry : readGraph.cityId) {
        if (entry.second == id) {
            return entry.first;
        }
    }
    return "";
}

//to get a unique path to use in the set
string generatePathKey(vector<PrintSegment>& path) {
    string key = "";
    for (auto& segment : path) {
        key += to_string(segment.cityId) + "-" + segment.method + "-" + to_string(segment.price) + "->";
    }
    return key;
}

void printPath(vector<PrintSegment>& path, QGraphicsScene* scene, string source) {
    string key = generatePathKey(path);

    if (printedPaths.find(key) != printedPaths.end()) {
        return;
    }
    printedPaths.insert(key);

    int totalSpend = 0;

    for (int i = 0; i < path.size(); i++) {
        Route += getCityById(path[i].cityId);
        if (i != path.size() - 1) {
            Route += " (" + path[i + 1].method + ") ";
            Route += " -> ";
        }
        totalSpend += path[i].price;
    }
    Route += "\n Total Spend: " + to_string(totalSpend) + '\n';

    int xOffset = 150;
    NodeItem *sourceNode = new NodeItem(QString::fromStdString(source));
    scene->addItem(sourceNode);
    int numNodes = path.size();
    int yOffset = 150 * off++;
    sourceNode->setPos(xOffset, yOffset);
    NodeItem *prev = sourceNode;

    for (int j = 0; j < numNodes - 1 ; j++) {
        NodeItem *node = new NodeItem(QString::fromStdString(getCityById(path[j + 1].cityId)));
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
        QLabel *transportationLabel = new QLabel(QString::fromStdString(path[j+1].method));
        transportationLabel->setParent(nullptr); // No parent, unless there is an appropriate QWidget to set as parent

        transportationLabel->setGeometry(midX, midY-15, 50, 20); // Adjust size as needed

        scene->addWidget(transportationLabel); // Add the label to the scene


        QLabel *moneyLabel = new QLabel(QString::fromStdString(to_string(path[j+1].price)));
        moneyLabel->setParent(nullptr); // No parent, unless there is an appropriate QWidget to set as parent

        moneyLabel->setGeometry(midX, midY+15, 50, 20); // Adjust size as needed

        scene->addWidget(moneyLabel);





        prev = node;
    }

    qreal x = xOffset + (numNodes-0.5) * 150;

    QLabel *totalLabel = new QLabel(QString::fromStdString("Total Price: " + to_string(totalSpend)));
    totalLabel->setParent(nullptr); // No parent, unless there is an appropriate QWidget to set as parent

    totalLabel->setGeometry(x, yOffset, 250, 20); // Adjust size as needed

    scene->addWidget(totalLabel);

}





bool isNotVisited(int nodeId, vector<PrintSegment>& path) {
    for (const auto& segment : path) {
        if (segment.cityId == nodeId) {
            return false;
        }
    }
    return true;
}

void findPaths(int sourceId, int destId, int budget, QGraphicsScene* scene, string source) {
    priority_queue<vector<PrintSegment>, vector<vector<PrintSegment>>, ComparePaths> pq;
    vector<PrintSegment> initialPath = {{sourceId, "", 0} };
    pq.push(initialPath);

    while (!pq.empty()) {
        vector<PrintSegment> path = pq.top();
        pq.pop();

        int lastNodeId = path.back().cityId;
        int totalSpend = 0;

        for (auto& segment : path) {
            totalSpend += segment.price;
        }

        if (lastNodeId == destId && totalSpend <= budget) {
            printPath(path, scene, source);
        }
        ReadGraph readGraph;
        for (int nextNodeId : readGraph.adjList[lastNodeId]) {
            if (isNotVisited(nextNodeId, path)) {
                for (const auto& edge : readGraph.graph[getCityById(lastNodeId)]) {
                    if (readGraph.cityId[edge.destination] == nextNodeId) {
                        vector<PrintSegment> newPath = path;
                        newPath.push_back(PrintSegment{nextNodeId, edge.transportation, edge.money });
                        pq.push(newPath);
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


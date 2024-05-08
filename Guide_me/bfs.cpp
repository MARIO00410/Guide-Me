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

QString Route="";
int off=0;

BFS::BFS(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BFS)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);

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
    //path exist return pointer point to element if not exist return pointer point to end element of the set
    if (printedPaths.find(key) != printedPaths.end()) {
        //  if pointer not point to end then it not exist then unique key
        return;
    }
    printedPaths.insert(key);

    int totalSpend = 0;

    int *sizes=new int[path.size()];

    for (int i = 0; i < path.size(); ++i) {
        Route += getCityById(path[i].cityId);
        if(i!=path.size()-1)
            Route+=" (" + path[i+1].method + ") ";

        if (i != path.size() - 1) Route += " -> ";
            totalSpend += path[i].price;

    }

    Route+="\n Total Spend: " + to_string(totalSpend) + '\n';

        int xOffset = 150; // Calculate yOffset for the current row

        // Add source node for each row
        NodeItem *sourceNode = new NodeItem(QString::fromStdString(source));
        // Adjust the position as needed
        scene->addItem(sourceNode);
        int numNodes = path.size();
        int yOffset = 150 * off++; // Reset x-coordinate for each new path
        sourceNode->setPos(xOffset,yOffset);
        NodeItem *prev=sourceNode;
        for (int j = 0; j < numNodes-1; j++) {
            NodeItem *node = new NodeItem(QString::fromStdString(getCityById(path[j+1].cityId)));
            qreal x = xOffset + (j+1) * 150; ; // Adjust x position based on j and numNodes
            // Keep y position same for all nodes in the row
            qreal y = yOffset ;
            node->setPos(x, y);

            scene->addItem(node);

            EdgeItem *edge=new EdgeItem(prev,node);
            scene->addItem(edge);

            prev= node;
        }

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
    ui->textEdit->setText(Route);
    ui->showRoute->setEnabled(false);
}

void BFS::on_pushButtonBack_clicked()
{
    HomePage homePage;
    homePage.setModal(true);
    hide();
    homePage.exec();
}


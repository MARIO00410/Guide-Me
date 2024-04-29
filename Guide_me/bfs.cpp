#include "bfs.h"
#include <path.h>
#include "ui_bfs.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <string>


QString Route="";

BFS::BFS(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::BFS)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
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

bool sortVyTotalAmount(const vector<PrintSegment>& path1, const vector<PrintSegment>& path2){
    int totalSpend1 = 0, totalSpend2 = 0;
    for (const auto& segment : path1) totalSpend1 += segment.price;
    for (const auto& segment : path2) totalSpend2 += segment.price;
    return totalSpend1 > totalSpend2;
}

//global variables
unordered_map<string, vector<Path>> graph;
unordered_map<string, int> cityId;
vector<int> adjList[500];
unordered_set<string> printedPaths;



string getCityById(int id) {
    for (const auto& entry : cityId) {
        if (entry.second == id) {
            return entry.first;
        }
    }
    return "";
}

//to get a unique path to use in the set
string generatePathKey(const vector<PrintSegment>& path) {
    string key = "";
    for (const auto& segment : path) {
        key += to_string(segment.cityId) + "-" + segment.method + "-" + to_string(segment.price) + "->";
    }
    return key;
}

void printPath(const vector<PrintSegment>& path) {
    string key = generatePathKey(path);
    //path exist return pointer point to element if not exist return pointer point to end element of the set
    if (printedPaths.find(key) != printedPaths.end()) {
        //  if pointer not point to end then it not exist then unique key
        return;
    }
    printedPaths.insert(key);

    int totalSpend = 0;
    for (int i = 0; i < path.size(); ++i) {
        Route += getCityById(path[i].cityId) ;
        if(i!=path.size()-1)
            Route+=" (" + path[i+1].method + ") ";

        if (i != path.size() - 1) Route += " -> ";
        totalSpend += path[i].price;
    }
    Route+="\nTotal Spend: " + to_string(totalSpend) + '\n';
}


bool isNotVisited(int nodeId, const vector<PrintSegment>& path) {
    for (const auto& segment : path) {
        if (segment.cityId == nodeId) {
            return false;
        }
    }
    return true;
}


void findPaths(int sourceId, int destId, int budget) {
    priority_queue<vector<PrintSegment>, vector<vector<PrintSegment>>, ComparePaths> pq;
    vector<PrintSegment> initialPath = {{sourceId, "", 0} };
    pq.push(initialPath);

    while (!pq.empty()) {
        vector<PrintSegment> path = pq.top();
        pq.pop();

        int lastNodeId = path.back().cityId;
        int totalSpend = 0;

        for (const auto& segment : path) {
            totalSpend += segment.price;
        }

        if (lastNodeId == destId && totalSpend <= budget) {
            printPath(path);
        }

        for (int nextNodeId : adjList[lastNodeId]) {
            if (isNotVisited(nextNodeId, path)) {
                for (const auto& edge : graph[getCityById(lastNodeId)]) {
                    if (cityId[edge.destination] == nextNodeId) {
                        vector<PrintSegment> newPath = path;
                        newPath.push_back(PrintSegment{nextNodeId, edge.transportation, edge.money });
                        pq.push(newPath);
                    }
                }
            }
        }





    }
}

/*void addEdge(string source, string destination, string method, int price) {
    graph[source].push_back({ destination, method, price });
    graph[destination].push_back({ source, method, price });

    int sourceId = cityId[source] ? cityId[source] : (cityId[source] = cityId.size() + 1);
    int destId = cityId[destination] ? cityId[destination] : (cityId[destination] = cityId.size() + 1);

    adjList[sourceId].push_back(destId);
    adjList[destId].push_back(sourceId);
}*/

void addEdge(string source, string destination, string method, int price) {
    Path path1 = { destination, price ,method};
    Path path2 = { source, price , method};

    graph[source].push_back(path1);
    graph[destination].push_back(path2);

    int sourceId = cityId[source] ? cityId[source] : (cityId[source] = cityId.size() + 1);
    int destId = cityId[destination] ? cityId[destination] : (cityId[destination] = cityId.size() + 1);

    adjList[sourceId].push_back(destId);
    adjList[destId].push_back(sourceId);
}




BFS::~BFS()
{
    delete ui;
}

void BFS::on_showRoute_clicked()
{
    addEdge("Cairo", "Giza", "Metro", 30);
    addEdge("Cairo", "Giza", "Bus", 60);
    addEdge("Cairo", "Giza", "Uber", 230);
    addEdge("Dahab", "Giza", "Bus", 500);
    addEdge("Dahab", "Giza", "Microbus", 345);
    addEdge("Cairo", "BeniSuef", "Microbus", 20);
    addEdge("Cairo", "BeniSuef", "Bus", 15);
    addEdge("Asyut", "Cairo", "Train", 250);
    addEdge("Asyut", "Cairo", "Bus", 450);
    addEdge("Dahab", "BeniSuef", "Microbus", 200);
    addEdge("Dahab", "BeniSuef", "Bus", 315);

    string source = "Cairo";
    string destination = "Dahab";
    int budget = 550;

    // Call the function to find paths
    findPaths(cityId[source], cityId[destination], budget);
    ui->textEdit->setText(Route);
    ui->showRoute->setEnabled(false);
}


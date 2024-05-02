#include "dfs.h"
#include "ui_dfs.h"
#include "Path.h"
#include <QDialog>
#include <homepage.h>
#include <readgraph.h>



DFS::DFS(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DFS)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
}


void dfs(string from, string destination, int budget, vector<Path>& route,map<string, bool>& vis, vector<vector<Path>>& path) {
    vis[from] = true;

    if (vis[destination]) {
        path.push_back(route);
        vis[from] = false;
        return;
    }

    const auto &graph = ReadGraph::graph;


    for (size_t i = 0; i < graph.at(from).size(); i++) {

        if (vis[graph.at(from)[i].destination]!=true && budget - graph.at(from)[i].money >= 0) {
            route.push_back({ graph.at(from)[i].destination,graph.at(from)[i].money ,graph.at(from)[i].transportation});
            dfs(graph.at(from)[i].destination,destination, budget -graph.at(from)[i].money,route, vis, path);

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
    map<string, bool>vis;
    vector<vector<Path>>path;

    QString Route="";
    int TotalAmount;
    vector<Path>route;

    dfs(ReadGraph::StartFrom,ReadGraph::GoTo,ReadGraph::Budget,route, vis, path);
    sort(path.begin(), path.end(), comparePathsByTotalAmount);

    for (size_t i = 0; i < path.size(); i++) {
        TotalAmount = 0;
        Route += ReadGraph::StartFrom;
        for (size_t j = 0; j < path[i].size(); j++) {
            Route+=( " (" + path[i][j].transportation + ") -> " + path[i][j].destination);
            TotalAmount += path[i][j].money;
        }
        Route += ("\n TotalAmount "+ to_string(TotalAmount) +'\n');
    }

    ui->textEdit->setText(Route);
    ui->dfsButton->setEnabled(false);
}

void DFS::on_pushButtonBack_clicked()
{
    HomePage homePage;
    homePage.setModal(true);
    hide();
    homePage.exec();
}

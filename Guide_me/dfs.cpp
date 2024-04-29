#include "dfs.h"
#include "ui_dfs.h"
#include "Path.h"
#include <QDebug>

map<string, vector<Path>>source;
map<string, bool>vis;
vector<vector<Path>>path;

DFS::DFS(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DFS)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
}




void dfs(string from, string destination, int budget, vector<Path>& route) {
    vis[from] = true;
    if (vis[destination] == 1) {
        path.push_back(route);
        vis[from] = false;
        return;
    }
    for (int i = 0; i < source[from].size(); i++) {
        if (vis[source[from][i].destination]!=true && budget - source[from][i].money >= 0) {
            route.push_back({ source[from][i].destination, source[from][i].money ,source[from][i].transportation});
            dfs(source[from][i].destination,destination, budget - source[from][i].money,route);

            route.pop_back();
            vis[source[from][i].destination] = false;
        }
    }
}

void funct() {

    Path P=Path("Giza", 30, "Metro");
    source["Cairo"].push_back(P);
    P = Path("Giza", 60, "Bus");
    source["Cairo"].push_back(P);
    P = Path("Giza", 230, "Uber");
    source["Cairo"].push_back(P);

    P=Path("Giza", 500, "Bus");
    source["Dahab"].push_back(P);
    P = Path("Giza", 345, "Microbus");
    source["Dahab"].push_back(P);

    P = Path("BeniSuef", 20, "Microbus");
    source["Cairo"].push_back(P);
    P = Path("BeniSuef", 15, "Bus");
    source["Cairo"].push_back(P);

    P = Path("Cairo", 250, "Train");
    source["Asyut"].push_back(P);
    P = Path("Cairo", 450, "Bus");
    source["Asyut"].push_back(P);

    P = Path("BeniSuef", 200, "Microbus");
    source["Dahab"].push_back(P);
    P = Path("BeniSuef", 315, "Bus");
    source["Dahab"].push_back(P);



    P = Path("Cairo", 30, "Metro");
    source["Giza"].push_back(P);
    P = Path("Cairo", 60, "Bus");
    source["Giza"].push_back(P);
    P = Path("Cairo", 230, "Uber");
    source["Giza"].push_back(P);

    P = Path("Dahab", 500, "Bus");
    source["Giza"].push_back(P);
    P = Path("Dahab", 345, "Microbus");
    source["Giza"].push_back(P);

    P = Path("Cairo", 20, "Microbus");
    source["BeniSuef"].push_back(P);
    P = Path("Cairo", 15, "Bus");
    source["BeniSuef"].push_back(P);

    P = Path("Asyut", 250, "Train");
    source["Cairo"].push_back(P);
    P = Path("Asyut", 450, "Bus");
    source["Cairo"].push_back(P);

    P = Path("Dahab", 200, "Microbus");
    source["BeniSuef"].push_back(P);
    P = Path("Dahab", 315, "Bus");
    source["BeniSuef"].push_back(P);
}

bool comparePathsByTotalAmount(vector<Path>& route1, vector<Path>& route2) {
    int totalAmount1 = 0, totalAmount2 = 0;
    for (int i = 0; i < route1.size(); i++){
        totalAmount1 += route1[i].money;
    }
    for (int i = 0; i < route2.size(); i++) {
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
    QString Route="";
    int TotalAmount;
    vector<Path>route;
    funct();
    dfs("Giza","Dahab",6000,route);
    sort(path.begin(), path.end(), comparePathsByTotalAmount);

    for (int i = 0; i < path.size(); i++) {
        TotalAmount = 0;
        Route += "Giza\n";
        for (int j = 0; j < path[i].size(); j++) {
            Route+=('[' + path[i][j].transportation + ']' + path[i][j].destination + '\n');
            TotalAmount += path[i][j].money;
        }
        Route += (to_string(TotalAmount) +'\n');
    }
    ui->textEdit->setText(Route);
    ui->dfsButton->setEnabled(false);
}

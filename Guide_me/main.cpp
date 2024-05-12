#include "mainwindow.h"
#include <readgraph.h>
#include <data.h>
#include"update_transportation.h"
#include"homepage.h"
#include <QApplication>
#include <Login.h>
#include <QDir>
int main(int argc, char *argv[])
{

    ReadGraph::GetGraph();
    Data::ReadFile();
    QApplication a(argc, argv);

    HomePage w;
    w.show();
    return a.exec();
}

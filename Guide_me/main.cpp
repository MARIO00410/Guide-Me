#include "mainwindow.h"
#include <readgraph.h>
#include <data.h>
#include"update_transportation.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    ReadGraph::GetGraph();
    Data::ReadFile();
    QApplication a(argc, argv);
    update_transportation w;

    w.show();
    return a.exec();
}

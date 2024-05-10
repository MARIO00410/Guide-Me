#include "mainwindow.h"
#include <readgraph.h>
#include <data.h>

#include <QApplication>

int main(int argc, char *argv[])
{

    ReadGraph::GetGraph();
    Data::ReadFile();
    QApplication a(argc, argv);
    MainWindow w;

    w.show();
    return a.exec();
}

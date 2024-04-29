#include "homepage.h"
#include "ui_homepage.h"
#include <profle.h>
#include <dfs.h>
#include <bfs.h>

HomePage::HomePage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::HomePage)
{
    ui->setupUi(this);
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::on_pushButton_clicked()
{
    Profle profile;
    profile.setModal(true);
    hide();
    profile.exec();
}


void HomePage::on_dfs_clicked()
{
    DFS dfs;
    dfs.setModal(true);
    hide();
    dfs.exec();
}


void HomePage::on_BFS_clicked()
{
    BFS bfs;
    bfs.setModal(true);
    hide();
    bfs.exec();
}


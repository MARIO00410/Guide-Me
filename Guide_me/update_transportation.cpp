#include "update_transportation.h"
#include "ui_update_transportation.h"
#include <QLineEdit>
#include <QWidget>
#include <QVBoxLayout>
#include"readgraph.h"
#include"homepage.h"
#include"QLineEdit"

update_transportation::update_transportation(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::update_transportation)
{
    ui->setupUi(this);

}

update_transportation::~update_transportation()
{
    delete ui;
}

void update_transportation::on_show_transportation_clicked()
{
    src = ui->lineEdit_source->text().toStdString();
    dst = ui->lineEdit_dest->text().toStdString();
    for(auto& item :ReadGraph::graph){
        if(item.second.size()==0)
            continue;
        ui->comboBoxFrom->addItem(QString::fromStdString(item.first));
        ui->comboBox_To->addItem(QString::fromStdString(item.first));
    }


    for (int i = 0,j=0; i < ReadGraph::graph[src].size(); i++)
    {

        if (ReadGraph::graph[src][i].destination == dst)
        {
            QString text1= QString::fromStdString(ReadGraph::graph[src][i].transportation);
            int text2= ReadGraph::graph[src][i].money;

            QLineEdit* newLineEdit1 = new QLineEdit(text1, this);  // Create a new QLineEdit
            QLineEdit* newLineEdit2 = new QLineEdit(QString::number(text2), this);
            newLineEdit1->setGeometry(180, 150+j*40, 93, 36);  // Set the geometry (x, y, width, height)
            newLineEdit2->setGeometry(180+150, 150+j*40, 93, 36);
            newLineEdit1->show();  // Show the line edit
            newLineEdit2->show();
            lineEdit_trans.push_back(newLineEdit1);  // Add the line edit to the vector
            lineEdit_money.push_back(newLineEdit2);
            j++;  // Increase the y-position for the next line edit
        }
    }
}

void update_transportation::on_back_clicked()
{
    HomePage home;
    home.setModal(true);
    hide();
    home.exec();
}
void update_func()
{


}

void update_transportation::on_update_2_clicked()
{
    src = ui->lineEdit_source->text().toStdString();
    dst = ui->lineEdit_dest->text().toStdString();
    // Ensure vectors are not empty and have the same size
    // if (lineEdit_trans.size() != ReadGraph::graph[src].size() ||
    //     lineEdit_money.size() != ReadGraph::graph[src].size()) {
    //     // Handle the error or return early
    //     return;
    // }
    for (int i = 0; i < lineEdit_trans.size(); i++)
    {
        ReadGraph::graph[src][i].transportation =lineEdit_trans[i]->text().toStdString();
        ReadGraph::graph[src][i].money=lineEdit_money[i]->text().toInt();
        ReadGraph::graph[dst][i].transportation =lineEdit_trans[i]->text().toStdString();
        ReadGraph::graph[dst][i].money=lineEdit_money[i]->text().toInt();
    }
    // Clear the existing line edits if needed
    for (QLineEdit* edit : lineEdit_trans) {
        delete edit;
    }
    lineEdit_trans.clear();
    for (QLineEdit* edit : lineEdit_money) {
        delete edit;
    }
    lineEdit_money.clear();

}


#ifndef DELETE_H
#define DELETE_H
#include <QWidget>
#include<QCheckBox>

#include"readgraph.h"
using namespace std;

#include <QDialog>

namespace Ui {
class Delete;
}

class Delete : public QDialog
{
    Q_OBJECT

public:
    explicit Delete(QWidget *parent = nullptr);

    ~Delete();

private slots:

    void on_show_transportations_clicked();
    void del(string src,string dest,string transportation);
    void onCheckBoxStateChanged(int state);
    void on_delete_2_clicked();

    void on_Delete_back_clicked();

private:
     std::vector<QCheckBox*> checkbox;  // Vector of pointers to QCheckBox
    std::vector<QCheckBox*> checkedCheckboxes;
     string src;
     string dst;
    Ui::Delete *ui;
};

#endif // DELETE_H

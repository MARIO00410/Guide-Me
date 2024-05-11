#ifndef UPDATE_TRANSPORTATION_H
#define UPDATE_TRANSPORTATION_H
#include"readgraph.h"
#include <QDialog>
#include"QLineEdit"

namespace Ui {
class update_transportation;
}

class update_transportation : public QDialog
{
    Q_OBJECT

public:
    explicit update_transportation(QWidget *parent = nullptr);
    ~update_transportation();

private slots:
    void on_show_transportation_clicked();

    void on_back_clicked();

    void on_update_2_clicked();

private:
    string src;
    string dst;
    std::vector<QLineEdit*> lineEdit_trans;
    std::vector<QLineEdit*> lineEdit_money;
    Ui::update_transportation *ui;
};

#endif // UPDATE_TRANSPORTATION_H

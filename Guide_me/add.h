#ifndef ADD_H
#define ADD_H

#include <QDialog>
#include <QString>
#include <string>
#include <QLineEdit>
#include <QMessageBox>
#include <QDebug>
using namespace std;
namespace Ui {
class add;
}

class add : public QDialog
{
    Q_OBJECT

public:
    explicit add(QWidget *parent = nullptr);

    void addPath(string src, string dest  ,string transportation ,int money);
        ~add();
private slots:
    void on_add_path_clicked();

private:
    Ui::add *ui;
};

#endif // ADD_H

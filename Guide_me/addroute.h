#ifndef ADDROUTE_H
#define ADDROUTE_H

#include <QDialog>

namespace Ui {
class Addroute;
}

class Addroute : public QDialog
{
    Q_OBJECT

public:
    explicit Addroute(QWidget *parent = nullptr);
    ~Addroute();

private slots:
    void on_Add_clicked();

private:
    Ui::Addroute *ui;

};

#endif // ADDROUTE_H

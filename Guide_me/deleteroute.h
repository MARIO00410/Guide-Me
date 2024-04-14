#ifndef DELETEROUTE_H
#define DELETEROUTE_H

#include <QDialog>

namespace Ui {
class Deleteroute;
}

class Deleteroute : public QDialog
{
    Q_OBJECT

public:
    explicit Deleteroute(QWidget *parent = nullptr);
    ~Deleteroute();

private slots:
    void on_deletePlace_clicked();

    void on_deleteTransportation_clicked();

private:
    Ui::Deleteroute *ui;
};

#endif // DELETEROUTE_H

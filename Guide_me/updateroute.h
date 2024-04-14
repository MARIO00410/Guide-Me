#ifndef UPDATEROUTE_H
#define UPDATEROUTE_H

#include <QDialog>

namespace Ui {
class Updateroute;
}

class Updateroute : public QDialog
{
    Q_OBJECT

public:
    explicit Updateroute(QWidget *parent = nullptr);
    ~Updateroute();

private:
    Ui::Updateroute *ui;
};

#endif // UPDATEROUTE_H

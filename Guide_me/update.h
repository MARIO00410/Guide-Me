#ifndef UPDATE_H
#define UPDATE_H

#include <QDialog>

namespace Ui {
class update;
}

class update : public QDialog
{
    Q_OBJECT

public:
    explicit update(QWidget *parent = nullptr);
    ~update();

private:
    Ui::update *ui;
};

#endif // UPDATE_H

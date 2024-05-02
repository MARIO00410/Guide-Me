#ifndef BFS_H
#define BFS_H

#include <QDialog>

namespace Ui {
class BFS;
}

class BFS : public QDialog
{
    Q_OBJECT

public:
    explicit BFS(QWidget *parent = nullptr);
    ~BFS();

private slots:
    void on_showRoute_clicked();

    void on_pushButtonBack_clicked();

private:
    Ui::BFS *ui;
};

#endif // BFS_H

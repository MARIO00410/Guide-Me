#ifndef DFS_H
#define DFS_H

#include <QDialog>
#include <QGraphicsView>
namespace Ui {
class DFS;
}

class DFS : public QDialog
{
    Q_OBJECT

public:
    explicit DFS(QWidget *parent = nullptr);
    ~DFS();

private slots:

    void on_dfsButton_clicked();

    void on_pushButtonBack_clicked();

private:
    Ui::DFS *ui;
    QGraphicsView *view;
};

#endif // DFS_H

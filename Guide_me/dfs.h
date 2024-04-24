#ifndef DFS_H
#define DFS_H

#include <QDialog>

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

private:
    Ui::DFS *ui;
};

#endif // DFS_H

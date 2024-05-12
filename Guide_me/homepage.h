#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QDialog>

namespace Ui {
class HomePage;
}

class HomePage : public QDialog
{
    Q_OBJECT

public:
    explicit HomePage(QWidget *parent = nullptr);
    ~HomePage();

private slots:
    void on_pushButton_clicked();

    void on_dfs_clicked();

    void on_BFS_clicked();

    void on_completeGraph_clicked();

private:
    Ui::HomePage *ui;
};

#endif // HOMEPAGE1_H

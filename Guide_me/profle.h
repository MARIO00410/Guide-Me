#ifndef PROFLE_H
#define PROFLE_H

#include <QDialog>

namespace Ui {
class Profle;
}

class Profle : public QDialog
{
    Q_OBJECT

public:
    explicit Profle(QWidget *parent = nullptr);
    ~Profle();

private slots:
    void on_pushButton_back_clicked();

    void on_pushButton_logout_clicked();

    void on_pushButton_Info_clicked();

private:
    Ui::Profle *ui;
};

#endif // PROFILE1_H

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <QDialog>

namespace Ui {
class functions;
}

class functions : public QDialog
{
    Q_OBJECT

public:
    explicit functions(QWidget *parent = nullptr);
    ~functions();

private slots:
    void on_add_transfer_clicked();

private:
    Ui::functions *ui;
};

#endif // FUNCTIONS_H

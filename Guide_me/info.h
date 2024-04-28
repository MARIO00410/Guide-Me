#ifndef INFO_H
#define INFO_H

#include <QDialog>

namespace Ui {
class Info;
}

class Info : public QDialog
{
    Q_OBJECT

public:
    explicit Info(QWidget *parent = nullptr);
    ~Info();
private slots:

    void on_on_pushButtonEditFname_clicked();

    void on_on_pushButton_lName_clicked();

    void on_on_pushButton_uName_clicked();

    void on_on_pushButton_pass_clicked();

    void on_on_pushButton_country_clicked();

    void on_on_pushButton_age_clicked();

    void on_on_pushButtonBack_clicked();

private:
    Ui::Info *ui;
};

#endif // INFO1_H

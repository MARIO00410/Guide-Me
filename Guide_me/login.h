#ifndef LOGIN_H
#define LOGIN_H
#include<QCloseEvent>
#include <QDialog>
#include<data.h>
#include<readgraph.h>

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    bool checkCredentials(const QString &username, const QString &password);
    ~Login();

private slots:
    void on_login_button_clicked();

    void on_signup_button_clicked();

    void on_Login_destroyed();
    void closeEvent(QCloseEvent *event) override  {
        qDebug()<<"ok2222";
        Data::writeFile();
        ReadGraph::writeFile();
        event->accept();
    }

private:
    Ui::Login *ui;
};

#endif // LOGIN_H

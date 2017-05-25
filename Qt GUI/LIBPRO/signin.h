#ifndef SIGNIN_H
#define SIGNIN_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
extern bool breader,blibrarian,badmin;
namespace Ui {
class signin;
}

class signin : public QDialog
{
    Q_OBJECT

public:
    explicit signin(QWidget *parent = 0);
    ~signin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::signin *ui;
    //QSqlDatabase mydb;
};

#endif // SIGNIN_H

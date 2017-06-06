#ifndef EDITUSER_H
#define EDITUSER_H

#include <QDialog>

namespace Ui {
class editUSER;
}

class editUSER : public QDialog
{
    Q_OBJECT

public:
    explicit editUSER(QWidget *parent = 0);
    ~editUSER();

private slots:
    void on_pushButton_ok_clicked();

private:
    Ui::editUSER *ui;
};

#endif // EDITUSER_H

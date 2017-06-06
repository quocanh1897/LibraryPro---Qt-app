#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
extern QString hoten,email,nghenghiep,cmnd,ngaysinh,accountname;
namespace Ui {
class admin;
}

class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = 0);
    ~admin();

private slots:
    void on_pushButton_5_clicked();

    void on_tableView_activated(const QModelIndex &index);



private:
    Ui::admin *ui;
};

#endif // ADMIN_H

#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>

namespace Ui {
class admin;
}

class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = 0);
    ~admin();

private:
    Ui::admin *ui;
};

#endif // ADMIN_H

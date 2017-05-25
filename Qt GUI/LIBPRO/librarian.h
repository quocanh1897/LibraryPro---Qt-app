#ifndef LIBRARIAN_H
#define LIBRARIAN_H

#include <QWidget>

namespace Ui {
class librarian;
}

class librarian : public QWidget
{
    Q_OBJECT

public:
    explicit librarian(QWidget *parent = 0);
    ~librarian();

private slots:
    void on_pushButton_5_clicked();

private:
    Ui::librarian *ui;
};

#endif // LIBRARIAN_H

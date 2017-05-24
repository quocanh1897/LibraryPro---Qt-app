#ifndef WORKSPACE_H
#define WORKSPACE_H

#include <QDialog>

namespace Ui {
class workspace;
}

class workspace : public QDialog
{
    Q_OBJECT

public:
    explicit workspace(QWidget *parent = 0);
    ~workspace();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::workspace *ui;
};

#endif // WORKSPACE_H

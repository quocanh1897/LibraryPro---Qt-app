#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "signupdialog.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_muon_clicked();

    void on_pushButton_lienhe_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

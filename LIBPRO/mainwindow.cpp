#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signupdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_6_clicked()
{
    SignUpDialog  sd;
    sd.setModal(true);
    sd.exec();
}

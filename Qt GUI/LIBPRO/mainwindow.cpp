#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signupdialog.h"
#include "user.h"
#include "signin.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1024,654);

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

void MainWindow::on_pushButton_5_clicked()
{

   signin signin;
   signin.setModal(true);
   signin.exec();
}

void MainWindow::on_pushButton_7_clicked()
{
    this->close();
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signupdialog.h"
#include "reader.h"
#include "admin.h"
#include "librarian.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->addTab(new reader(),QString("Reader"));
    ui->tabWidget->addTab(new admin(),QString("Admin"));
    ui->tabWidget->addTab(new librarian(),QString("Librarian"));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_actionSignUp_triggered()
{
    SignUpDialog  sd;
    sd.setModal(true);
    sd.exec();
}

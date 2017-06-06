#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signup.h"
#include "ui_admin.h"
#include "ui_librarian.h"
#include "ui_reader.h"
#include "reader.h"
#include "admin.h"
#include "ui_home.h"
#include "home.h"
#include "librarian.h"
#include "noiquy.h"
#include <QVBoxLayout>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1000,600);
    ui->tabWidget->close();
    ui->toolBar->close();
    Home *home = new Home();
    QVBoxLayout *layout = new QVBoxLayout;
         layout->addWidget(home);
    QWidget *p = new QWidget();
    p->setLayout(layout);
    setCentralWidget(p);
}
MainWindow::MainWindow(bool badmin,bool breader, bool blibrarian, QString pin,QString name,QWidget * par) :QMainWindow(par),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->toolBar_2->close();

    accReader = breader;accAdmin = badmin;accLibrarian = blibrarian;
    PIN = pin;accName = name;
    if(accReader)
        ui->tabWidget->addTab(new reader(),QString("Độc giả"));
    if(accAdmin)
        ui->tabWidget->addTab(new admin(),QString("Quản lý"));
    if(accLibrarian)
        ui->tabWidget->addTab(new librarian(),QString("Thủ thư"));
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

void MainWindow::on_actionSignIn_triggered()
{
    this->deleteLater();
    SignIn si;
    si.setModal(true);
    si.exec();
}

void MainWindow::on_actionSignOut_triggered()
{
    this->deleteLater();
}

void MainWindow::on_actionHome_triggered()
{
    this->deleteLater();
    MainWindow * wn = new MainWindow();
    wn->setWindowTitle("Trang Chủ");
    wn->show();
}

void MainWindow::on_actionabout_triggered()
{
    QMessageBox::information(this,"Thông tin tác giả","<p><b>Nhóm 1, L01, Trường ĐHBK Tp HCM</b></p> <p>Nguyễn Quốc Anh</p> <p>Nguyễn Huỳnh Thoại</p><p>Huỳnh Song Anh Quân</p><p>Nguyễn Thị Như Ý</p>");

}

void MainWindow::on_actionrule_triggered()
{
    noiquy nquy;
    nquy.setModal(true);
    nquy.exec();
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "signupdialog.h"
#include "user.h"
#include "signin.h"
#include "databaseconnection.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1024,578);

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

void MainWindow::on_pushButton_11_clicked()
{
    connectDatabase searchDB;

        if(!searchDB.openConnection()){
            QMessageBox::critical(this,"Database Error!","Error Connecting to Database! Please try again or Check Database.");
        }

        searchDB.openConnection();

        QSqlQueryModel* databaseModel = new QSqlQueryModel;

        QSqlQuery* aqry = new QSqlQuery(searchDB.mydb);


        if(ui->comboBox->currentText() == "ISBN"){

            aqry->prepare("select Title, isbn from SACH where ISBN like '%'||:isbn||'%';");
            aqry->bindValue(":isbn",ui->lineEdit->text().toInt());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "Tựa đề"){

            aqry->prepare("select title,author from SACH where Title like '%'||:name||'%';");
            aqry->bindValue(":name",ui->lineEdit->text());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "Tác giả"){

            aqry->prepare("select title,author from SACH where Author like '%'||:author||'%';");
            aqry->bindValue(":author",ui->lineEdit->text());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "Năm"){


            aqry->prepare("select title,year from SACH where year = :year;");
            aqry->bindValue(":year",ui->lineEdit->text().toInt());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "NXB"){

            aqry->prepare("select title,publisher from SACH where publisher like '%'||:nxb||'%';");
            aqry->bindValue(":nxb",ui->lineEdit->text());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "Tất cả sách"){

            aqry->exec("select title,author from SACH;");
        }


        databaseModel->setQuery(*aqry);
        ui->tableView_2->setModel(databaseModel);
        //ui->tableView_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        searchDB.closeConnection();
}

void MainWindow::on_pushButton_muon_clicked()
{
    QMessageBox muonsachBox;
    muonsachBox.setText("Để mượn sách bạn cần phải đăng nhập trước đã!");
    muonsachBox.setInformativeText("Hoặc chọn OK để đăng kí");
    muonsachBox.setStandardButtons(QMessageBox::Ok);
    muonsachBox.setDefaultButton(QMessageBox::Ok);
    muonsachBox.exec();
    //QMessageBox::about(this,"Thông báo","Để mượn sách bạn phải đăng nhập trước đã!");
    SignUpDialog  sd;
    sd.setModal(true);
    sd.exec();
}

void MainWindow::on_pushButton_lienhe_clicked()
{
    QMessageBox lienhe;
    this->setWindowTitle("Thông tin tác giả");
    lienhe.setText("<p><b>Nhóm 1, L01, Trường ĐHBK Tp HCM</b></p> <p>Nguyễn Quốc Anh</p> <p>Nguyễn Huỳnh Thoại</p><p>Huỳnh Song Anh Quân</p><p>Nguyễn Thị Như Ý</p>");
    lienhe.setStandardButtons(QMessageBox::Ok);
    lienhe.exec();
}

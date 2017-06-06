#include "home.h"
#include "ui_home.h"
#include "ui_signin.h"
#include "signin.h"
#include "ui_signup.h"
#include "signup.h"
#include "databaseconnection.h"
Home::Home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Home)
{
    ui->setupUi(this);

}

Home::~Home()
{
    delete ui;
}




void Home::on_pushButton_2_clicked()
{
    connectDatabase searchDB;

        if(!searchDB.openConnection()){
            QMessageBox::critical(this,"Lỗi kết nối!","Không kết nối được cơ sở dữ liệu, liên hệ admin.");
        }

        searchDB.openConnection();

        QSqlQueryModel* databaseModel = new QSqlQueryModel;

        QSqlQuery* aqry = new QSqlQuery(searchDB.mydb);


        if(ui->comboBox->currentText() == "ISBN"){

            aqry->prepare("select TUADE,TACGIA,ISBN,NHAXUATBAN,NAM from SACH where ISBN like '%'||:isbn||'%';");
            aqry->bindValue(":isbn",ui->lineEdit->text().toInt());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "Tựa đề"){

            aqry->prepare("select TUADE,TACGIA,ISBN,NHAXUATBAN,NAM from SACH where TUADE like '%'||:name||'%';");
            aqry->bindValue(":name",ui->lineEdit->text());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "Tác giả"){

            aqry->prepare("select TUADE,TACGIA,ISBN,NHAXUATBAN,NAM from SACH where TACGIA like '%'||:author||'%';");
            aqry->bindValue(":author",ui->lineEdit->text());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "Năm"){


            aqry->prepare("select TUADE,TACGIA,ISBN,NHAXUATBAN,NAM from SACH where NAM = :year;");
            aqry->bindValue(":year",ui->lineEdit->text().toInt());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "NXB"){

            aqry->prepare("select TUADE,TACGIA,ISBN,NHAXUATBAN,NAM from SACH where NHAXUATBAN like '%'||:nxb||'%';");
            aqry->bindValue(":nxb",ui->lineEdit->text());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "Tất cả sách"){

            aqry->exec("select TUADE,TACGIA,ISBN,NHAXUATBAN,NAM from SACH;");
        }


        databaseModel->setQuery(*aqry);
        ui->tableView->setModel(databaseModel);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        //QModelIndexList ids = ui->tableView->selectionModel()->selectedRows();
        //ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        searchDB.closeConnection();
}

void Home::on_pushButton_muon_clicked()
{
    QMessageBox::information(this,"Thông báo","Để mượn sách bạn phải đăng nhập trước đã!");

}


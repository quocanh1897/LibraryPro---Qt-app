#include "reader.h"
#include "ui_reader.h"
#include "signup.h"
#include "databaseconnection.h"

reader::reader(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reader)
{
    ui->setupUi(this);
}

reader::~reader()
{
    delete ui;
}

void reader::on_pushButton_clicked()
{
    connectDatabase searchDB;

        if(!searchDB.openConnection()){
            QMessageBox::critical(this,"Lỗi kết nối!","Không kết nối được cơ sở dữ liệu, liên hệ admin.");
        }

        searchDB.openConnection();

        QSqlQueryModel* databaseModel = new QSqlQueryModel;

        QSqlQuery* aqry = new QSqlQuery(searchDB.mydb);


        if(ui->comboBox->currentText() == "ISBN"){

            aqry->prepare("select * from SACH where ISBN like '%'||:isbn||'%';");
            aqry->bindValue(":isbn",ui->lineEdit->text().toInt());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "Tựa đề"){

            aqry->prepare("select * from SACH where TUADE like '%'||:name||'%';");
            aqry->bindValue(":name",ui->lineEdit->text());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "Tác giả"){

            aqry->prepare("select * from SACH where TACGIA like '%'||:author||'%';");
            aqry->bindValue(":author",ui->lineEdit->text());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "Năm"){


            aqry->prepare("select * from SACH where NAM = :year;");
            aqry->bindValue(":year",ui->lineEdit->text().toInt());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "NXB"){

            aqry->prepare("select * from SACH where NHAXUATBAN like '%'||:nxb||'%';");
            aqry->bindValue(":nxb",ui->lineEdit->text());
            aqry->exec();
        }


        else if(ui->comboBox->currentText() == "Tất cả"){

            aqry->exec("select * from SACH;");
        }


        databaseModel->setQuery(*aqry);
        ui->tableView->setModel(databaseModel);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        //QModelIndexList ids = ui->tableView->selectionModel()->selectedRows();
        //ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        searchDB.closeConnection();
}

#include "librarian.h"
#include "ui_librarian.h"
#include "databaseconnection.h"

librarian::librarian(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::librarian)
{
    ui->setupUi(this);
}

librarian::~librarian()
{
    delete ui;
}

void librarian::on_pushButton_5_clicked()
{
    connectDatabase searchDB;

        if(!searchDB.openConnection()){
            QMessageBox::critical(this,"Lỗi kết nối!","Không kết nối được cơ sở dữ liệu, liên hệ admin.");
        }

        searchDB.openConnection();

        QSqlQueryModel* databaseModel = new QSqlQueryModel;

        QSqlQuery* aqry = new QSqlQuery(searchDB.mydb);


        if(ui->comboBox_2->currentText() == "ISBN"){

            aqry->prepare("select * from SACH where ISBN like '%'||:isbn||'%';");
            aqry->bindValue(":isbn",ui->lineEdit->text().toInt());
            aqry->exec();
        }


        else if(ui->comboBox_2->currentText() == "Tựa đề"){

            aqry->prepare("select * from SACH where TUADE like '%'||:name||'%';");
            aqry->bindValue(":name",ui->lineEdit->text());
            aqry->exec();
        }


        else if(ui->comboBox_2->currentText() == "Tác giả"){

            aqry->prepare("select * from SACH where TACGIA like '%'||:author||'%';");
            aqry->bindValue(":author",ui->lineEdit->text());
            aqry->exec();
        }


        else if(ui->comboBox_2->currentText() == "Năm"){


            aqry->prepare("select * from SACH where NAM = :year;");
            aqry->bindValue(":year",ui->lineEdit->text().toInt());
            aqry->exec();
        }


        else if(ui->comboBox_2->currentText() == "NXB"){

            aqry->prepare("select * from SACH where NHAXUATBAN like '%'||:nxb||'%';");
            aqry->bindValue(":nxb",ui->lineEdit->text());
            aqry->exec();
        }


        else if(ui->comboBox_2->currentText() == "Tất cả"){

            aqry->exec("select * from SACH;");
        }


        databaseModel->setQuery(*aqry);
        ui->tableView->setModel(databaseModel);
        ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        //QModelIndexList ids = ui->tableView->selectionModel()->selectedRows();
        //ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        searchDB.closeConnection();
}

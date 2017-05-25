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
            QMessageBox::critical(this,"Database Error!","Error Connecting to Database! Please try again or Check Database.");
        }

        searchDB.openConnection();

        QSqlQueryModel* databaseModel = new QSqlQueryModel;

        QSqlQuery* databaseQuery = new QSqlQuery(searchDB.mydb);


        if(ui->comboBox_2->currentText() == "ISBN"){

            databaseQuery->prepare("select *from SACH where ISBN like '%'||:isbn||'%';");
            databaseQuery->bindValue(":isbn",ui->lineEdit->text().toInt());
            databaseQuery->exec();
        }


        else if(ui->comboBox_2->currentText() == "Tua de"){

            databaseQuery->prepare("select *from SACH where Tiltle like '%'||:name||'%';");
            databaseQuery->bindValue(":name",ui->lineEdit->text());
            databaseQuery->exec();
        }


        else if(ui->comboBox_2->currentText() == "Tac gia"){

            databaseQuery->prepare("select *from SACH where Author like '%'||:author||'%';");
            databaseQuery->bindValue(":author",ui->lineEdit->text());
            databaseQuery->exec();
        }


        else if(ui->comboBox_2->currentText() == "Nam"){


            databaseQuery->prepare("select *from SACH where year = :year;");
            databaseQuery->bindValue(":year",ui->lineEdit->text().toInt());
            databaseQuery->exec();
        }


        else if(ui->comboBox_2->currentText() == "NXB"){

            databaseQuery->prepare("select *from SACH where publisher like '%'||:nxb||'%';");
            databaseQuery->bindValue(":nxb",ui->lineEdit->text());
            databaseQuery->exec();
        }


        else if(ui->comboBox_2->currentText() == "Tat ca"){

            databaseQuery->exec("select *from SACH;");
        }


        databaseModel->setQuery(*databaseQuery);
        ui->tableView_1->setModel(databaseModel);
        ui->tableView_1->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        searchDB.closeConnection();
}

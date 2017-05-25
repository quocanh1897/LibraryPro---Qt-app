#include "admin.h"
#include "ui_admin.h"
#include "databaseconnection.h"
admin::admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

void admin::on_pushButton_5_clicked()
{
    connectDatabase searchDB;

    if(!searchDB.openConnection()){
        QMessageBox::critical(this,"Database Error!","Error Connecting to Database! Please try again or Check Database.");
    }

    searchDB.openConnection();

    QSqlQueryModel* databaseModel = new QSqlQueryModel;

    QSqlQuery* databaseQuery = new QSqlQuery(searchDB.mydb);


    if(ui->comboBox_2->currentText() == "Tai khoan"){

        databaseQuery->prepare("select *from TAIKHOAN where TAIKHOAN = :taikhoan ;");
        databaseQuery->bindValue(":taikhoan",ui->lineEdit->text());
        databaseQuery->exec();
    }
    if(ui->comboBox_2->currentText() == "Tat ca"){
        databaseQuery->exec("select *from TAIKHOAN ;");
    }

    else if(ui->comboBox_2->currentText() == "CMND"){

        databaseQuery->prepare("select *from TAIKHOAN where CMND =  :cmnd ;");
        databaseQuery->bindValue(":cmnd",ui->lineEdit->text());
        databaseQuery->exec();
    }


    else if(ui->comboBox_2->currentText() == "Quan Ly"){
        databaseQuery->exec("select *from TAIKHOAN where QUANLY = 'TRUE';");
    }


    else if(ui->comboBox_2->currentText() == "Doc Gia"){
        databaseQuery->exec("select *from TAIKHOAN where DOCGIA = 'TRUE';");
    }

    else if(ui->comboBox_2->currentText() == "Thu Thu"){
        databaseQuery->exec("select *from TAIKHOAN where THUTHU = 'TRUE';");
    }
    //


    databaseModel->setQuery(*databaseQuery);
    ui->tableView->setModel(databaseModel);
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    searchDB.closeConnection();
}

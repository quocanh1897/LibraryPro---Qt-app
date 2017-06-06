#include "admin.h"
#include "ui_admin.h"
#include "databaseconnection.h"
#include "edituser.h"
#include <QTableView>
QString hoten,email,nghenghiep,cmnd,ngaysinh,accountname="";
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

    QSqlQuery* aqry = new QSqlQuery(searchDB.mydb);


    if(ui->comboBox_2->currentText() == "Tên tài khoản"){
        aqry->prepare("select t.CMND, t.TAIKHOAN, n.HOTEN from TAIKHOAN as t JOIN NGUOIDUNG as n on t.cmnd=n.cmnd where TAIKHOAN like '%'||:taikhoan||'%';");
        aqry->bindValue(":taikhoan",ui->lineEdit_2->text());
        aqry->exec();
    }

    else if(ui->comboBox_2->currentText() == "CMND/MSSV"){

        aqry->prepare("select t.CMND, t.TAIKHOAN, n.HOTEN from TAIKHOAN as t JOIN NGUOIDUNG as n on t.cmnd=n.cmnd where t.CMND like '%'||:cmnd||'%';");
        aqry->bindValue(":cmnd",ui->lineEdit_2->text());
        aqry->exec();
    }

    else if(ui->comboBox_2->currentText() == "Người dùng"){

        aqry->prepare("select t.CMND, t.TAIKHOAN, n.HOTEN from TAIKHOAN as t JOIN NGUOIDUNG as n on t.cmnd=n.cmnd where n.HOTEN like '%'||:hoten||'%';");
        aqry->bindValue(":hoten",ui->lineEdit_2->text());
        aqry->exec();
    }

    else if(ui->comboBox_2->currentText() == "Vai trò"){
        QString vaitro=ui->lineEdit_2->text();
        if(vaitro=="thu thu"||vaitro=="thủ thư"||vaitro=="Thủ thư"){
            aqry->prepare("SELECT t.TAIKHOAN,n.HOTEN,t.CMND FROM TAIKHOAN as t JOIN NGUOIDUNG as n on t.cmnd = n.cmnd where t.THUTHU='true'");
            aqry->exec();
        }
        else if(vaitro=="quan ly"||vaitro=="quản lý"||vaitro=="Quản lý"){
            aqry->prepare("SELECT t.TAIKHOAN,n.HOTEN,t.CMND FROM TAIKHOAN as t JOIN NGUOIDUNG as n on t.cmnd = n.cmnd where t.QUANLY='true'");
            aqry->exec();
        }
        else if(vaitro=="độc giả"||vaitro=="doc gia"||vaitro=="đọc giả"||vaitro=="Độc giả"){
            aqry->prepare("SELECT t.TAIKHOAN,n.HOTEN,t.CMND FROM TAIKHOAN as t JOIN NGUOIDUNG as n on t.cmnd = n.cmnd where t.DOCGIA='true'");
            aqry->exec();
        }
    }


    databaseModel->setQuery(*aqry);
    ui->tableView->setModel(databaseModel);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    searchDB.closeConnection();
}

void admin::on_tableView_activated(const QModelIndex &index)
{
    QString gtri=ui->tableView->model()->data(index).toString();
    connectDatabase data;
    data.openConnection();

    QSqlQuery* qry = new QSqlQuery(data.mydb);
    qry->prepare("select * from TAIKHOAN as t JOIN NGUOIDUNG as n on t.cmnd=n.cmnd where TAIKHOAN=:giatri or n.HOTEN=:giatri or t.CMND=:giatri;");
    qry->bindValue(":giatri",gtri);
    if(qry->exec()){
        while(qry->next()){
            cmnd=qry->value(0).toString();
            hoten=qry->value(6).toString();
            email=qry->value(7).toString();
            nghenghiep=qry->value(10).toString();
            ngaysinh=qry->value(9).toString();
            editUSER edit;
            edit.setModal(true);
            edit.exec();
        }
    }
}



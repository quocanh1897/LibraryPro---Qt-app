#include "signin.h"
#include "ui_signin.h"
#include "mainwindow.h"
#include "workspace.h"
#include "databaseconnection.h"
#include <QMessageBox>
#include <QString>
bool breader=0,blibrarian=0,badmin=0;
QString acc=NULL;
signin::signin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signin){
        ui->setupUi(this);
        this->setFixedSize(287,136);
        this->setWindowTitle("Đăng Nhập");
        connectDatabase searchDB;

        if(!searchDB.openConnection()){
            QMessageBox::critical(this,"Database Error!","Error Connecting to Database! Please try again or Check Database.");
        }

        searchDB.openConnection();


}

signin::~signin()
{
    delete ui;
}
QString accountname,password;
void signin::on_pushButton_clicked()
{


    accountname=ui->lineEdit_accountname->text();
    password=ui->lineEdit_password->text();
    QSqlQuery qry;
    qry.prepare("select * from TAIKHOAN where TAIKHOAN = :accountname and MATKHAU = :password;");
    qry.bindValue(":accountname",accountname);qry.bindValue(":password",password);
    if(qry.exec()){
       if(qry.next()){
           breader=qry.value(3).toBool(),blibrarian=qry.value(4).toBool(),badmin=qry.value(5).toBool();
           QMessageBox::about(this,"Thành công!","Chào mừng đến LIBPRO");
           this->close();
           workspace wspace;
           wspace.setModal(true);
           wspace.exec();
       }
       else
           QMessageBox::warning(this,"Đăng nhập thất bại!","Tài khoản hoặc mật khẩu không đúng!");
    }


}


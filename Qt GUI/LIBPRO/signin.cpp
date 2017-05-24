#include "signin.h"
#include "ui_signin.h"
#include "mainwindow.h"
#include "workspace.h"
#include <QMessageBox>
#include <QString>
bool breader=0,blibrarian=0,badmin=0;
signin::signin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signin){
        ui->setupUi(this);
        QString path=QCoreApplication::applicationDirPath();
        path+="/book.sqlite";
        QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName(path);
        if (!mydb.open()) {
          qDebug() << "Error: connection with database fail"<<path;
        }
        else {
          qDebug() << "Database: connection ok";
        }

}

signin::~signin()
{
    delete ui;
}

void signin::on_pushButton_clicked()
{
    mydb.open();
    QString accountname,password;
    accountname=ui->lineEdit_accountname->text();
    password=ui->lineEdit_password->text();
    QSqlQuery qry;
    qry.prepare("select * from account where accountname = :accountname and password = :password;");
    qry.bindValue(":accountname",accountname);qry.bindValue(":password",password);
    if(qry.exec()){
       if(qry.next()){
           breader=qry.value(2).toBool(),blibrarian=qry.value(3).toBool(),badmin=qry.value(4).toBool();
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


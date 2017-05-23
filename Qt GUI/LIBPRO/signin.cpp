#include "signin.h"
#include "ui_signin.h"
#include <QMessageBox>
signin::signin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signin)
{
    ui->setupUi(this);
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("D:/sqlite/book.sqlite");
    if (!mydb.open())
       {
          qDebug() << "Error: connection with database fail";
       }
       else
       {
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
    /*qry.prepare("select * from account where accountname = :accountname;");
    qry.bindValue(":accountname",accountname);
    if(!qry.exec()) QMessageBox::about(this,"Đăng nhậpfail!",accountname);*/

   if(qry.exec("select * from account where accountname='"+accountname+"' and password='"+password+"' ;")) {
       if(qry.next())
       QMessageBox::about(this,"Thành công!","Chào mừng bạn đến với LIBPRO");
       else
          QMessageBox::warning(this,"Đăng nhập thất bại!","Tài khoản hoặc mật khẩu không đúng!");
    }


}


#include "signin.h"
#include "ui_signin.h"
#include <QMessageBox>
signin::signin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signin)
{
    ui->setupUi(this);
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/You/Documents/Assignment2_cpp/Qt GUI/LIBPRO/book.sqlite");
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
        qry.prepare("select * from account where accountname = :accountname and password = :password and reader = :reader;");
        qry.bindValue(":accountname",accountname);qry.bindValue(":password",password);
        if(qry.exec()){
           if(qry.next())
                QString reader = qry.value(2).toBool();
                QMessageBox::about(this,"Thành công!","Chào mừng bạn đến với LIBPRO");
           else
            QMessageBox::warning(this,"Đăng nhập thất bại!","Tài khoản hoặc mật khẩu không đúng!");
        }
}


#include "signin.h"
#include "ui_signin.h"
#include "home.h"
#include "databaseconnection.h"
#include "QDebug"
#include "mainwindow.h"
#include "ui_mainwindow.h"
SignIn::SignIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
}

SignIn::~SignIn()
{
    delete ui;
}

void SignIn::on_pushButton_clicked()
{
    connectDatabase si;
    if(!si.openConnection()){
        qDebug()<<"Khong co ket noi database :( ";
        return;
    }
    si.openConnection();
    QString accName = ui->lineEdit->text();
    QString accPass = ui->lineEdit_2->text();
    QSqlQuery qry;
    //if(qry.exec("select * from TAIKHOAN where TAIKHOAN =\'" + accName + "\' and MATKHAU =\'"+accPass+"\'")){
    if(qry.exec("select * from TAIKHOAN where TAIKHOAN =\'" + accName + "\' and MATKHAU =\'"+accPass+"\'")){
        if(qry.next()){
             bool accA = qry.value(5).toBool();
             bool accL = qry.value(4).toBool();
             bool accR = qry.value(3).toBool();
             bool accK = qry.value(6).toBool();
             QString accN = qry.value(1).toString();
             QString PIN = qry.value(0).toString();
            if(accK){
                QMessageBox::about(this,"Đăng nhập thành công","Tài khoản <b>" + accN +"</b>");
                this->close();

                MainWindow *n = new MainWindow(accA,accR,accL,PIN,accN,0);
                n->setWindowTitle("[+] " + accN + " [+]" );
                n->show();
            }
            else{
                QMessageBox::about(this,"Không thành công","Tài khoản <b>" + accN + "</b> đang bị khoá :(" );
                this->show();
            }
        }
        else{
            QMessageBox::warning(this,"Đăng nhập thất bại","Tài khoản hoặc mật khẩu không đúng");
            this->show();
        }
    }
}



void SignIn::on_pushButton_2_clicked()
{
    MainWindow *mw=new MainWindow();
    this->close();
    mw->show();

}

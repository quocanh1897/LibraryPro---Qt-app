#include "signup.h"
#include "ui_signup.h"
#include "databaseconnection.h"
#include <QMessageBox>
#include <QSql>
SignUpDialog::SignUpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpDialog)
{
    ui->setupUi(this);
}

SignUpDialog::~SignUpDialog()
{
    delete ui;
}
void SignUpDialog::on_pushButton_clicked()
{
    this->close();
}

bool reader=0, librarian=0, admin=0;
QString gender;
void SignUpDialog::on_pushButton_2_clicked()
{
    if (ui->checkBox_reader->isChecked())
    {
        reader = 1;
    }
    if (ui->checkBox_librarian->isChecked())
    {
       librarian = 1;
    }
    if (ui->checkBox_admin->isChecked())
    {
        admin  = 1;
    }
    if (ui->radioButton_male->isChecked())
    {
        gender  = "Nam";
    }
    if (ui->radioButton_female->isChecked())
    {
        gender  = "Nữ";
    }
    if (ui->radioButton_others->isChecked())
    {
        gender  = "Khác";
    }

    QString accountname =  ui->lineEdit_account->text();
    QString CMND = ui->lineEdit_id->text();
    QString pass = ui->lineEdit_pass -> text();
    QString confirm = ui->lineEdit_confirm -> text();
    if (confirm != pass){
        QMessageBox :: warning (this, "Lỗi!", "Mật khẩu không trùng khớp!");
        ui->lineEdit_pass ->setText ("");
        ui->lineEdit_confirm ->setText ("");
    }
    QString email = ui->lineEdit_email->text();
    QString username =  ui->lineEdit_username->text();
    QString job = ui->lineEdit_job->text();
    QString bd = ui->spinBox_d->text() + ui->spinBox_m->text() + ui->spinBox_y->text() ;

    connectDatabase DB;
    if(!DB.openConnection()){
       QMessageBox::critical(this,"Database Error!","Error Connecting to Database! Please try again or Check Database.");
    }
    DB.openConnection();
    QSqlQuery qry;
    qry.prepare("insert into NGUOIDUNG VALUES(:acc,:email,:cmnd,:ngaysinh,:congviec,:gioitinh)");
    qry.bindValue(":acc",username);
    qry.bindValue(":email",email);
    qry.bindValue(":cmnd",CMND);
    qry.bindValue(":ngaysinh",bd);
    qry.bindValue(":congviec",job);
    qry.bindValue(":gioitinh",gender);
    qry.exec();

    qry.prepare("insert into TAIKHOAN VALUES(:cmnd,:taikhoan,:matkhau,:docgia)");
    qry.bindValue(":cmnd",CMND);
    qry.bindValue(":taikhoan",accountname);
    qry.bindValue(":matkhau",pass);
    qry.bindValue(":docgia",reader);
    qry.exec();
}



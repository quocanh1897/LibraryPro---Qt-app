#include "edituser.h"
#include "ui_edituser.h"
#include "signin.h"
#include "admin.h"
editUSER::editUSER(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editUSER)
{
    ui->setupUi(this);
    this->setWindowTitle("");
    ui->lineEdit_cmnd->setText(cmnd);
    ui->lineEdit_email->setText(email);
    ui->lineEdit_hoten->setText(hoten);
    ui->lineEdit_ngaysinh->setText(ngaysinh);
    ui->lineEdit_nghenghiep->setText(nghenghiep);
    ui->lineEdit_taikhoan->setText(accountname);
}

editUSER::~editUSER()
{
    delete ui;
}

void editUSER::on_pushButton_ok_clicked()
{
    this->close();
}

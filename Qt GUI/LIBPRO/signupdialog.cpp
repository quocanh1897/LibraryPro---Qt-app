#include "signupdialog.h"
#include "ui_signupdialog.h"

SignUpDialog::SignUpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SignUpDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Đăng Kí");
}

SignUpDialog::~SignUpDialog()
{
    delete ui;
}

void SignUpDialog::on_pushButton_clicked()
{
    this->close();
}

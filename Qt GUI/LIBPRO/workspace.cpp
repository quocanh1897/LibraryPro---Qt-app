#include "workspace.h"
#include "ui_workspace.h"
#include "signin.h"
#include "reader.h"
#include "librarian.h"
#include "admin.h"
workspace::workspace(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::workspace)
{
    ui->setupUi(this);
    if(breader==1) ui->tabWidget->addTab(new reader(),QString("Độc giả"));
    if(blibrarian==1) ui->tabWidget->addTab(new admin(),QString("Thủ thư"));
    if(badmin==1) ui->tabWidget->addTab(new librarian(),QString("Quản lý"));
}

workspace::~workspace()
{
    delete ui;
}

void workspace::on_pushButton_2_clicked()
{
    this->close();
}
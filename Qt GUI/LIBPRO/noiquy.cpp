#include "noiquy.h"
#include "ui_noiquy.h"
#include <QFile>
#include <QTextStream>
#include <QCoreApplication>
#include <QDebug>
noiquy::noiquy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::noiquy)
{
    ui->setupUi(this);
    this->setFixedSize(500,420);
    QString filename=QCoreApplication::applicationDirPath()+"/noiquy.txt";
    QFile file(filename);
    if(!file.exists()){
        qDebug() << "error open file "<<filename;
    }

    QString line;
    ui->plainTextEdit->clear();
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&file);
        while (!stream.atEnd()){
            line = stream.readLine();
            ui->plainTextEdit->setPlainText(ui->plainTextEdit->toPlainText()+line+"\n");

        }
    }
    file.close();

}

noiquy::~noiquy()
{
    delete ui;
}

void noiquy::on_pushButton_clicked()
{
    this->close();
    /*QString path = QCoreApplication::applicationDirPath()+"/noiquy.txt";
    QFile file(path);
    QTextStream in(&file);
    ui->textBrowser->setPlainText(in.readAll());*/


}

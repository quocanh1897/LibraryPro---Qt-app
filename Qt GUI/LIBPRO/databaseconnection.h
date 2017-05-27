#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QMainWindow>
#include <QtSql>
#include <QFileInfo>
#include <QDebug>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <string>
#include <QString>
#include <QComboBox>
class connectDatabase
{
public:
    connectDatabase() {}
    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    QString path = QCoreApplication::applicationDirPath()+"/book.sqlite";


    bool openConnection(){
        mydb.setDatabaseName(path);
        mydb.exec("PRAGMA foreign_keys = ON");
        return mydb.open();
    }

    void closeConnection(){
        mydb.close();
    }
};
#endif // DATABASECONNECTION_H

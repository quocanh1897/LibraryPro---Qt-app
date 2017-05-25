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
//"D:/OneDrive/OneDrive - vietscience/Fundamental C++/QtProject/build-LIBPRO-Desktop_Qt_5_9_0_MSVC2015_64bit-Release/release/libpro.db"
class connectDatabase
{
public:
    connectDatabase() {}
    QSqlDatabase mydb = QSqlDatabase::addDatabase("QSQLITE");
    QString path = QCoreApplication::applicationDirPath()+"/book.sqlite";


    bool openConnection(){
        mydb.setDatabaseName(path);
        return mydb.open();
    }

    void closeConnection(){
        mydb.close();
    }
};
#endif // DATABASECONNECTION_H

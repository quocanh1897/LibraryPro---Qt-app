#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{

    //QWidget::setWindowIcon(QIcon::addFile(":/images/iconwindow.ico"));
    QApplication a(argc, argv);
    MainWindow *m = new MainWindow();
    m->setWindowTitle("LIBPRO");
    m->show();
    return a.exec();
}

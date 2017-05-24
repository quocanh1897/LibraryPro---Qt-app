/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionUser;
    QAction *actionSignUp;
    QAction *actionSignIn;
    QAction *actionSignOut;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionUser = new QAction(MainWindow);
        actionUser->setObjectName(QStringLiteral("actionUser"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/users.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUser->setIcon(icon);
        actionSignUp = new QAction(MainWindow);
        actionSignUp->setObjectName(QStringLiteral("actionSignUp"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/pen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSignUp->setIcon(icon1);
        actionSignIn = new QAction(MainWindow);
        actionSignIn->setObjectName(QStringLiteral("actionSignIn"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/signin1.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSignIn->setIcon(icon2);
        actionSignOut = new QAction(MainWindow);
        actionSignOut->setObjectName(QStringLiteral("actionSignOut"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/image/signo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSignOut->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));

        verticalLayout->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionUser);
        toolBar->addSeparator();
        toolBar->addAction(actionSignUp);
        toolBar->addSeparator();
        toolBar->addAction(actionSignIn);
        toolBar->addSeparator();
        toolBar->addAction(actionSignOut);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionUser->setText(QApplication::translate("MainWindow", "User", Q_NULLPTR));
        actionSignUp->setText(QApplication::translate("MainWindow", "SignUp", Q_NULLPTR));
        actionSignIn->setText(QApplication::translate("MainWindow", "SignIn", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSignIn->setToolTip(QApplication::translate("MainWindow", "SignIn", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSignOut->setText(QApplication::translate("MainWindow", "SignOut", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

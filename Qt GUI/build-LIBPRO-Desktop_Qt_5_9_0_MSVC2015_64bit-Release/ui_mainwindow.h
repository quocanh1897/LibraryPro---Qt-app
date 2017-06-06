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
    QAction *actionHome;
    QAction *actioncontact;
    QAction *actionguide;
    QAction *actionrule;
    QAction *actionabout;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 626);
        MainWindow->setMouseTracking(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/iconwindow.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setIconSize(QSize(36, 36));
        MainWindow->setDockOptions(QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks);
        actionUser = new QAction(MainWindow);
        actionUser->setObjectName(QStringLiteral("actionUser"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/Oxygen-Icons.org-Oxygen-Apps-preferences-contact-list.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionUser->setIcon(icon1);
        actionSignUp = new QAction(MainWindow);
        actionSignUp->setObjectName(QStringLiteral("actionSignUp"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/signupicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSignUp->setIcon(icon2);
        actionSignIn = new QAction(MainWindow);
        actionSignIn->setObjectName(QStringLiteral("actionSignIn"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/signin.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSignIn->setIcon(icon3);
        actionSignOut = new QAction(MainWindow);
        actionSignOut->setObjectName(QStringLiteral("actionSignOut"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/signout.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSignOut->setIcon(icon4);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QStringLiteral("actionHome"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/home.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionHome->setIcon(icon5);
        actioncontact = new QAction(MainWindow);
        actioncontact->setObjectName(QStringLiteral("actioncontact"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/about-us-icon-15.png"), QSize(), QIcon::Normal, QIcon::Off);
        actioncontact->setIcon(icon6);
        actionguide = new QAction(MainWindow);
        actionguide->setObjectName(QStringLiteral("actionguide"));
        QIcon icon7;
        QString iconThemeName = QStringLiteral("guide");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QStringLiteral(":/images/25.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionguide->setIcon(icon7);
        actionrule = new QAction(MainWindow);
        actionrule->setObjectName(QStringLiteral("actionrule"));
        QIcon icon8;
        iconThemeName = QStringLiteral("rule");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QStringLiteral(":/images/rule.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionrule->setIcon(icon8);
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName(QStringLiteral("actionabout"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/contact.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionabout->setIcon(icon9);
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
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        MainWindow->insertToolBarBreak(toolBar_2);

        toolBar->addAction(actionHome);
        toolBar->addSeparator();
        toolBar->addAction(actionUser);
        toolBar->addSeparator();
        toolBar->addAction(actionSignOut);
        toolBar_2->addAction(actionabout);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionguide);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionrule);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actioncontact);
        toolBar_2->addSeparator();
        toolBar_2->addAction(actionSignUp);
        toolBar_2->addAction(actionSignIn);
        toolBar_2->addAction(actionSignOut);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionUser->setText(QApplication::translate("MainWindow", "User", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionUser->setToolTip(QApplication::translate("MainWindow", "Th\303\264ng tin ng\306\260\341\273\235i d\303\271ng", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionUser->setStatusTip(QApplication::translate("MainWindow", "Th\303\264ng tin ng\306\260\341\273\235i d\303\271ng/t\303\240i kho\341\272\243n li\303\252n k\341\272\277t ng\306\260\341\273\235i d\303\271ng", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionSignUp->setText(QApplication::translate("MainWindow", "SignUp", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSignUp->setToolTip(QApplication::translate("MainWindow", "\304\220\304\203ng k\303\255 t\303\240i kho\341\272\243n m\341\273\233i", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSignUp->setStatusTip(QApplication::translate("MainWindow", "\304\220\304\203ng k\303\255 t\303\240i kho\341\272\243n m\341\273\233i", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionSignIn->setText(QApplication::translate("MainWindow", "SignIn", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSignIn->setToolTip(QApplication::translate("MainWindow", "\304\220\304\203ng nh\341\272\255p", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSignOut->setText(QApplication::translate("MainWindow", "SignOut", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSignOut->setToolTip(QApplication::translate("MainWindow", "Tho\303\241t", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionSignOut->setStatusTip(QApplication::translate("MainWindow", "Tho\303\241t ch\306\260\306\241ng tr\303\254nh", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionHome->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionHome->setToolTip(QApplication::translate("MainWindow", "\304\220\304\203ng xu\341\272\245t", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionHome->setStatusTip(QApplication::translate("MainWindow", "Tr\341\273\237 v\341\273\201 trang ch\341\273\247", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actioncontact->setText(QApplication::translate("MainWindow", "contact", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actioncontact->setToolTip(QApplication::translate("MainWindow", "Li\303\252n H\341\273\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actioncontact->setStatusTip(QApplication::translate("MainWindow", "Li\303\252n h\341\273\207 v\341\273\233i nh\303\242n vi\303\252n th\306\260 vi\341\273\207n", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionguide->setText(QApplication::translate("MainWindow", "guide", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionguide->setToolTip(QApplication::translate("MainWindow", "H\306\260\341\273\233ng D\341\272\253n", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionguide->setStatusTip(QApplication::translate("MainWindow", "H\306\260\341\273\233ng d\341\272\253n s\341\273\255 d\341\273\245ng th\306\260 vi\341\273\207n", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionrule->setText(QApplication::translate("MainWindow", "rule", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionrule->setToolTip(QApplication::translate("MainWindow", "Quy \304\220\341\273\213nh", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionrule->setStatusTip(QApplication::translate("MainWindow", "T\341\273\225ng h\341\273\243p n\341\273\231i quy th\306\260 vi\341\273\207n", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionabout->setText(QApplication::translate("MainWindow", "about", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionabout->setToolTip(QApplication::translate("MainWindow", "Nh\303\263m ph\303\241t tri\341\273\203n", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionabout->setStatusTip(QApplication::translate("MainWindow", "Th\303\264ng tin t\303\241c gi\341\272\243", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

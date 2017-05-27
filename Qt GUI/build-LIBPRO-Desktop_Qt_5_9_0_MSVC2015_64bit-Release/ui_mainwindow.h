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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton_11;
    QTableView *tableView_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_muon;
    QPushButton *pushButton_9;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbl;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_lienhe;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_7;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1024, 578);
        QIcon icon;
        icon.addFile(QStringLiteral(":/iconwindow.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(5);
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(11, 225, 561, 341));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setMaximumSize(QSize(60, 16777215));

        horizontalLayout_2->addWidget(comboBox);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(201, 0));
        lineEdit->setMaximumSize(QSize(524, 20));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_11 = new QPushButton(groupBox);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        horizontalLayout_2->addWidget(pushButton_11);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 9);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout_3->addLayout(horizontalLayout_2);

        tableView_2 = new QTableView(groupBox);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        verticalLayout_3->addWidget(tableView_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_muon = new QPushButton(groupBox);
        pushButton_muon->setObjectName(QStringLiteral("pushButton_muon"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_muon->sizePolicy().hasHeightForWidth());
        pushButton_muon->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton_muon);

        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(pushButton_9);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(582, 225, 431, 341));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);

        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 12, 1001, 211));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbl = new QLabel(layoutWidget);
        lbl->setObjectName(QStringLiteral("lbl"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl->sizePolicy().hasHeightForWidth());
        lbl->setSizePolicy(sizePolicy1);
        lbl->setTextFormat(Qt::PlainText);
        lbl->setPixmap(QPixmap(QString::fromUtf8(":/sdh.png")));
        lbl->setScaledContents(true);
        lbl->setWordWrap(false);

        verticalLayout_2->addWidget(lbl);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_lienhe = new QPushButton(layoutWidget);
        pushButton_lienhe->setObjectName(QStringLiteral("pushButton_lienhe"));
        sizePolicy.setHeightForWidth(pushButton_lienhe->sizePolicy().hasHeightForWidth());
        pushButton_lienhe->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_lienhe);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(pushButton_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        horizontalLayout_4->addWidget(pushButton_7);


        verticalLayout_2->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        groupBox_2->raise();
        groupBox->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "T\303\254m s\303\241ch", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "T\341\272\245t c\341\272\243", Q_NULLPTR)
         << QApplication::translate("MainWindow", "T\341\273\261a \304\221\341\273\201", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ISBN", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NXB", Q_NULLPTR)
         << QApplication::translate("MainWindow", "N\304\203m", Q_NULLPTR)
         << QApplication::translate("MainWindow", "T\303\241c gi\341\272\243", Q_NULLPTR)
        );
        pushButton_11->setText(QApplication::translate("MainWindow", "T\303\254m", Q_NULLPTR));
        pushButton_muon->setText(QApplication::translate("MainWindow", "M\306\260\341\273\243n s\303\241ch", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MainWindow", "\304\220\341\273\215c th\341\273\255", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "B\341\272\243ng tin", Q_NULLPTR));
        lbl->setText(QString());
        pushButton_lienhe->setText(QApplication::translate("MainWindow", "Li\303\252n h\341\273\207", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Quy \304\221\341\273\213nh", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\304\220\304\203ng nh\341\272\255p", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "\304\220\304\203ng k\303\255", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Tho\303\241t", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

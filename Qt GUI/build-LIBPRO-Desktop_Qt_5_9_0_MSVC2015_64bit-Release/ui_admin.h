/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_12;
    QPushButton *pushButton_11;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_5;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QTableView *tableView;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_7;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QStringLiteral("admin"));
        admin->resize(738, 504);
        admin->setAutoFillBackground(true);
        verticalLayout_7 = new QVBoxLayout(admin);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_12 = new QPushButton(admin);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        horizontalLayout_5->addWidget(pushButton_12);

        pushButton_11 = new QPushButton(admin);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        horizontalLayout_5->addWidget(pushButton_11);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_7->addLayout(horizontalLayout_5);

        groupBox_2 = new QGroupBox(admin);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_6 = new QVBoxLayout(groupBox_2);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_3->addWidget(comboBox_2);

        lineEdit_2 = new QLineEdit(groupBox_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_3->addWidget(pushButton_5);

        horizontalLayout_3->setStretch(0, 2);
        horizontalLayout_3->setStretch(1, 11);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_6->addLayout(horizontalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout_4->addWidget(tableView);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        pushButton_8 = new QPushButton(groupBox_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_4->addWidget(pushButton_8);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_4->addWidget(pushButton_6);

        pushButton_9 = new QPushButton(groupBox_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout_4->addWidget(pushButton_9);

        pushButton_7 = new QPushButton(groupBox_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_4->addWidget(pushButton_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        horizontalLayout_4->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_7->addWidget(groupBox_2);

        groupBox = new QGroupBox(admin);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));

        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        horizontalLayout_2->addWidget(tableWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        verticalSpacer = new QSpacerItem(17, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_7->addWidget(groupBox);


        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QWidget *admin)
    {
        admin->setWindowTitle(QApplication::translate("admin", "Admin", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("admin", "Th\303\264ng b\303\241o", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("admin", "H\341\273\231p th\306\260", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("admin", "Qu\341\272\243n l\303\275 t\303\240i kho\341\272\243n", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("admin", "T\303\252n t\303\240i kho\341\272\243n", Q_NULLPTR)
         << QApplication::translate("admin", "Ng\306\260\341\273\235i d\303\271ng", Q_NULLPTR)
         << QApplication::translate("admin", "CMND/MSSV", Q_NULLPTR)
         << QApplication::translate("admin", "Vai tr\303\262", Q_NULLPTR)
        );
        pushButton_5->setText(QApplication::translate("admin", "Tim", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("admin", "Th\303\252m", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("admin", "Ch\341\273\211nh s\341\273\255a", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("admin", "Xo\303\241", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("admin", "Reset m\341\272\255t kh\341\272\251u", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("admin", "T\303\241c v\341\273\245", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("admin", "Th\303\252m", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("admin", "Ch\341\273\211nh s\341\273\255a", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("admin", "Xo\303\241", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H

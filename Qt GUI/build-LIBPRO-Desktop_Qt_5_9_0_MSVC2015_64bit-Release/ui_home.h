/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView_thongbao;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_muon;
    QTableView *tableView;

    void setupUi(QWidget *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QStringLiteral("Home"));
        Home->resize(1016, 619);
        verticalLayout_3 = new QVBoxLayout(Home);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label = new QLabel(Home);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/Home.png")));
        label->setScaledContents(true);

        verticalLayout_3->addWidget(label);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox = new QGroupBox(Home);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        tableView_thongbao = new QTableView(groupBox);
        tableView_thongbao->setObjectName(QStringLiteral("tableView_thongbao"));

        verticalLayout->addWidget(tableView_thongbao);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(Home);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_3->addWidget(comboBox);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);

        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/search-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(21, 21));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_muon = new QPushButton(groupBox_2);
        pushButton_muon->setObjectName(QStringLiteral("pushButton_muon"));

        horizontalLayout_3->addWidget(pushButton_muon);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tableView = new QTableView(groupBox_2);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout_2->addWidget(tableView);


        horizontalLayout_4->addWidget(groupBox_2);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 5);

        verticalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(Home);

        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QWidget *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Form", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("Home", "Th\303\264ng b\303\241o Th\306\260 vi\341\273\207n", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        pushButton->setStatusTip(QApplication::translate("Home", "Ch\341\273\215n m\341\273\231t  m\341\273\245c \304\221\341\273\203 xem chi ti\341\272\277t", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton->setText(QApplication::translate("Home", "Xem chi ti\341\272\277t", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("Home", "T\303\254m s\303\241ch", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Home", "ISBN", Q_NULLPTR)
         << QApplication::translate("Home", "T\341\272\245t c\341\272\243 s\303\241ch", Q_NULLPTR)
         << QApplication::translate("Home", "T\341\273\261a \304\221\341\273\201", Q_NULLPTR)
         << QApplication::translate("Home", "T\303\241c gi\341\272\243", Q_NULLPTR)
         << QApplication::translate("Home", "NXB", Q_NULLPTR)
         << QApplication::translate("Home", "N\304\203m", Q_NULLPTR)
        );
#ifndef QT_NO_STATUSTIP
        comboBox->setStatusTip(QApplication::translate("Home", "T\303\254m ki\341\272\277m theo", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_2->setText(QString());
        pushButton_muon->setText(QApplication::translate("Home", "M\306\260\341\273\243n s\303\241ch", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H

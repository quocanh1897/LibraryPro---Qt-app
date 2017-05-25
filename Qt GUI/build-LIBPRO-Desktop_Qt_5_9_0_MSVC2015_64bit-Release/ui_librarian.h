/********************************************************************************
** Form generated from reading UI file 'librarian.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARIAN_H
#define UI_LIBRARIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_librarian
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QListView *listView;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView_1;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *librarian)
    {
        if (librarian->objectName().isEmpty())
            librarian->setObjectName(QStringLiteral("librarian"));
        librarian->resize(695, 374);
        librarian->setAutoFillBackground(true);
        verticalLayout_4 = new QVBoxLayout(librarian);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton = new QPushButton(librarian);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(librarian);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(librarian);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(librarian);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox_2 = new QGroupBox(librarian);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        listView = new QListView(groupBox_2);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout_3->addWidget(listView);


        horizontalLayout_4->addWidget(groupBox_2);

        groupBox = new QGroupBox(librarian);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout->addWidget(pushButton_5);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableView_1 = new QTableView(groupBox);
        tableView_1->setObjectName(QStringLiteral("tableView_1"));

        horizontalLayout_2->addWidget(tableView_1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout->addWidget(pushButton_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 2);

        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_4->addWidget(groupBox);

        horizontalLayout_4->setStretch(0, 3);
        horizontalLayout_4->setStretch(1, 5);

        verticalLayout_4->addLayout(horizontalLayout_4);


        retranslateUi(librarian);

        QMetaObject::connectSlotsByName(librarian);
    } // setupUi

    void retranslateUi(QWidget *librarian)
    {
        librarian->setWindowTitle(QApplication::translate("librarian", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("librarian", "Thong Bao", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("librarian", "Tac vu", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("librarian", "Lien He", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("librarian", "Hop Thu", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("librarian", "Tac Vu", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("librarian", "Quan Li Sach", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("librarian", "Tat ca", Q_NULLPTR)
         << QApplication::translate("librarian", "ISBN", Q_NULLPTR)
         << QApplication::translate("librarian", "Tua de", Q_NULLPTR)
         << QApplication::translate("librarian", "Tac gia", Q_NULLPTR)
         << QApplication::translate("librarian", "NXB", Q_NULLPTR)
         << QApplication::translate("librarian", "Nam", Q_NULLPTR)
        );
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("librarian", "Chinh xac", Q_NULLPTR)
         << QApplication::translate("librarian", "Gan giong", Q_NULLPTR)
        );
        pushButton_5->setText(QApplication::translate("librarian", "Tim Kiem", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("librarian", "Them vao", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("librarian", "Chinh Sua", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("librarian", "Xoa", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class librarian: public Ui_librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIAN_H

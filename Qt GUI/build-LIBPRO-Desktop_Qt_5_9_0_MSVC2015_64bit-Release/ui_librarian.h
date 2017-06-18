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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_librarian
{
public:
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout_5;
    QTableView *tableView_2;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_9;
    QPushButton *pushButton_12;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QTableView *tableView_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_11;
    QSpinBox *spinBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_10;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_13;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *librarian)
    {
        if (librarian->objectName().isEmpty())
            librarian->setObjectName(QStringLiteral("librarian"));
        librarian->resize(790, 476);
        librarian->setAutoFillBackground(true);
        horizontalLayout_7 = new QHBoxLayout(librarian);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        groupBox_2 = new QGroupBox(librarian);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        toolBox = new QToolBox(groupBox_2);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 363, 308));
        verticalLayout_5 = new QVBoxLayout(page);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tableView_2 = new QTableView(page);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed);

        verticalLayout_5->addWidget(tableView_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        pushButton_9 = new QPushButton(page);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        horizontalLayout_6->addWidget(pushButton_9);

        pushButton_12 = new QPushButton(page);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        horizontalLayout_6->addWidget(pushButton_12);


        verticalLayout_5->addLayout(horizontalLayout_6);

        toolBox->addItem(page, QString::fromUtf8("Y\303\252u C\341\272\247u M\341\273\233i"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 363, 308));
        verticalLayout_2 = new QVBoxLayout(page_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableView_3 = new QTableView(page_2);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed);

        verticalLayout_2->addWidget(tableView_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        toolBox->addItem(page_2, QString::fromUtf8("S\303\241ch \304\220ang M\306\260\341\273\243n"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 363, 308));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        tableView_4 = new QTableView(page_3);
        tableView_4->setObjectName(QStringLiteral("tableView_4"));
        tableView_4->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::EditKeyPressed);

        verticalLayout_4->addWidget(tableView_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButton_11 = new QPushButton(page_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        horizontalLayout_5->addWidget(pushButton_11);

        spinBox = new QSpinBox(page_3);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        horizontalLayout_5->addWidget(spinBox);

        label = new QLabel(page_3);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        pushButton_10 = new QPushButton(page_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        horizontalLayout_5->addWidget(pushButton_10);


        verticalLayout_4->addLayout(horizontalLayout_5);

        toolBox->addItem(page_3, QString::fromUtf8("S\303\241ch Qu\303\241 H\341\272\241n"));

        verticalLayout_3->addWidget(toolBox);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_13 = new QPushButton(groupBox_2);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_13->setIcon(icon);
        pushButton_13->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(pushButton_13);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);


        verticalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_7->addWidget(groupBox_2);

        groupBox = new QGroupBox(librarian);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/search-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon1);
        pushButton_5->setIconSize(QSize(21, 21));

        horizontalLayout->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEditTriggers(QAbstractItemView::EditKeyPressed);
        tableView->setSelectionMode(QAbstractItemView::SingleSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setShowGrid(true);
        tableView->setGridStyle(Qt::SolidLine);
        tableView->setCornerButtonEnabled(false);

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/Button-Close-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon2);
        pushButton_8->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/Pencil-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon3);
        pushButton_7->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/update3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon4);
        pushButton_6->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(pushButton_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_7->addWidget(groupBox);


        retranslateUi(librarian);

        toolBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(librarian);
    } // setupUi

    void retranslateUi(QWidget *librarian)
    {
        librarian->setWindowTitle(QApplication::translate("librarian", "Form", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("librarian", "T\303\241c V\341\273\245", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_9->setToolTip(QApplication::translate("librarian", "Ch\341\273\215n m\341\273\231t \304\221\341\273\221i t\306\260\341\273\243ng tr\306\260\341\273\233c ", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_9->setText(QApplication::translate("librarian", "Cho M\306\260\341\273\243n", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        pushButton_12->setStatusTip(QApplication::translate("librarian", "Ch\341\273\215n tr\306\260\341\273\233c m\341\273\231t \304\221\341\273\221i t\306\260\341\273\243ng", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_12->setText(QApplication::translate("librarian", "Hu\341\273\267 y\303\252u c\341\272\247u", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("librarian", "Y\303\252u C\341\272\247u M\341\273\233i", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("librarian", "X\303\241c Nh\341\272\255n Tr\341\272\243", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("librarian", "S\303\241ch \304\220ang M\306\260\341\273\243n", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("librarian", "Gia H\341\272\241n Th\303\252m", Q_NULLPTR));
        label->setText(QApplication::translate("librarian", "Ng\303\240y", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("librarian", "Ph\341\272\241t", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("librarian", "S\303\241ch Qu\303\241 H\341\272\241n", Q_NULLPTR));
        pushButton_13->setText(QString());
        groupBox->setTitle(QApplication::translate("librarian", "Qu\341\272\243n L\303\255 S\303\241ch", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("librarian", "T\341\272\245t c\341\272\243", Q_NULLPTR)
         << QApplication::translate("librarian", "ISBN", Q_NULLPTR)
         << QApplication::translate("librarian", "T\341\273\261a \304\221\341\273\201", Q_NULLPTR)
         << QApplication::translate("librarian", "T\303\241c gi\341\272\243", Q_NULLPTR)
         << QApplication::translate("librarian", "NXB", Q_NULLPTR)
         << QApplication::translate("librarian", "N\304\203m", Q_NULLPTR)
        );
        pushButton_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_8->setToolTip(QApplication::translate("librarian", "Xo\303\241 S\303\241ch", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_8->setStatusTip(QApplication::translate("librarian", "Ch\341\273\215n m\341\273\231t d\303\262ng c\341\272\247n xo\303\241 tr\306\260\341\273\233c.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_8->setText(QApplication::translate("librarian", "Xo\303\241", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton_8->setShortcut(QApplication::translate("librarian", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        pushButton_7->setToolTip(QApplication::translate("librarian", "Ch\341\273\211nh s\341\273\255a s\303\241ch", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_7->setStatusTip(QApplication::translate("librarian", "Ch\341\273\215n m\341\273\231t d\303\262ng c\341\272\247n s\341\273\255a \304\221\341\273\225i tr\306\260\341\273\233c", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_7->setText(QApplication::translate("librarian", "S\341\273\255a", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_6->setToolTip(QApplication::translate("librarian", "Th\303\252m s\303\241ch", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_6->setText(QApplication::translate("librarian", "Th\303\252m", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class librarian: public Ui_librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIAN_H

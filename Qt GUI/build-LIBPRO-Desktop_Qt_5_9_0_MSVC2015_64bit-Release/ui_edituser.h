/********************************************************************************
** Form generated from reading UI file 'edituser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITUSER_H
#define UI_EDITUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editUSER
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *lineEdit_taikhoan;
    QLineEdit *lineEdit_hoten;
    QLineEdit *lineEdit_cmnd;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_ngaysinh;
    QLineEdit *lineEdit_congviec;
    QLineEdit *lineEdit_nghenghiep;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_update;
    QPushButton *pushButton;
    QPushButton *pushButton_del;
    QPushButton *pushButton_lock;
    QPushButton *pushButton_reset;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *editUSER)
    {
        if (editUSER->objectName().isEmpty())
            editUSER->setObjectName(QStringLiteral("editUSER"));
        editUSER->resize(525, 312);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/users.png"), QSize(), QIcon::Normal, QIcon::Off);
        editUSER->setWindowIcon(icon);
        layoutWidget = new QWidget(editUSER);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 504, 281));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 170, 47, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 59, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 110, 24, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 50, 32, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 200, 60, 16));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 46, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 140, 47, 16));
        lineEdit_taikhoan = new QLineEdit(groupBox);
        lineEdit_taikhoan->setObjectName(QStringLiteral("lineEdit_taikhoan"));
        lineEdit_taikhoan->setGeometry(QRect(80, 20, 411, 20));
        lineEdit_hoten = new QLineEdit(groupBox);
        lineEdit_hoten->setObjectName(QStringLiteral("lineEdit_hoten"));
        lineEdit_hoten->setGeometry(QRect(80, 50, 411, 20));
        lineEdit_cmnd = new QLineEdit(groupBox);
        lineEdit_cmnd->setObjectName(QStringLiteral("lineEdit_cmnd"));
        lineEdit_cmnd->setGeometry(QRect(80, 80, 411, 20));
        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(80, 110, 411, 20));
        lineEdit_ngaysinh = new QLineEdit(groupBox);
        lineEdit_ngaysinh->setObjectName(QStringLiteral("lineEdit_ngaysinh"));
        lineEdit_ngaysinh->setGeometry(QRect(80, 140, 411, 20));
        lineEdit_congviec = new QLineEdit(groupBox);
        lineEdit_congviec->setObjectName(QStringLiteral("lineEdit_congviec"));
        lineEdit_congviec->setGeometry(QRect(80, 170, 411, 20));
        lineEdit_nghenghiep = new QLineEdit(groupBox);
        lineEdit_nghenghiep->setObjectName(QStringLiteral("lineEdit_nghenghiep"));
        lineEdit_nghenghiep->setGeometry(QRect(80, 200, 411, 20));
        lineEdit_cmnd->raise();
        lineEdit_email->raise();
        lineEdit_ngaysinh->raise();
        lineEdit_congviec->raise();
        lineEdit_nghenghiep->raise();
        lineEdit_taikhoan->raise();
        lineEdit_hoten->raise();
        label_6->raise();
        label_3->raise();
        label_4->raise();
        label_2->raise();
        label_7->raise();
        label->raise();
        label_5->raise();

        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pushButton_update = new QPushButton(layoutWidget);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));

        horizontalLayout_8->addWidget(pushButton_update);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_8->addWidget(pushButton);

        pushButton_del = new QPushButton(layoutWidget);
        pushButton_del->setObjectName(QStringLiteral("pushButton_del"));

        horizontalLayout_8->addWidget(pushButton_del);

        pushButton_lock = new QPushButton(layoutWidget);
        pushButton_lock->setObjectName(QStringLiteral("pushButton_lock"));

        horizontalLayout_8->addWidget(pushButton_lock);

        pushButton_reset = new QPushButton(layoutWidget);
        pushButton_reset->setObjectName(QStringLiteral("pushButton_reset"));

        horizontalLayout_8->addWidget(pushButton_reset);


        verticalLayout_2->addLayout(horizontalLayout_8);

        layoutWidget1 = new QWidget(editUSER);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 501, 22));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_9->addWidget(label_8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_2);


        retranslateUi(editUSER);

        QMetaObject::connectSlotsByName(editUSER);
    } // setupUi

    void retranslateUi(QDialog *editUSER)
    {
        editUSER->setWindowTitle(QApplication::translate("editUSER", "Ng\306\260\341\273\235i d\303\271ng", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_6->setText(QApplication::translate("editUSER", "C\303\264ng vi\341\273\207c", Q_NULLPTR));
        label_3->setText(QApplication::translate("editUSER", "CMND/MSSV", Q_NULLPTR));
        label_4->setText(QApplication::translate("editUSER", "Email", Q_NULLPTR));
        label_2->setText(QApplication::translate("editUSER", "H\341\273\215 t\303\252n", Q_NULLPTR));
        label_7->setText(QApplication::translate("editUSER", "Ngh\341\273\201 nghi\341\273\207p", Q_NULLPTR));
        label->setText(QApplication::translate("editUSER", "T\303\240i kho\341\272\243n", Q_NULLPTR));
        label_5->setText(QApplication::translate("editUSER", "Ng\303\240y sinh", Q_NULLPTR));
        pushButton_update->setText(QApplication::translate("editUSER", "C\341\272\255p nh\341\272\255t", Q_NULLPTR));
        pushButton->setText(QApplication::translate("editUSER", "Xo\303\241 ng\306\260\341\273\235i d\303\271ng", Q_NULLPTR));
        pushButton_del->setText(QApplication::translate("editUSER", "Xo\303\241 t\303\240i kho\341\272\243n", Q_NULLPTR));
        pushButton_lock->setText(QApplication::translate("editUSER", "Kho\303\241 t\303\240i kho\341\272\243n", Q_NULLPTR));
        pushButton_reset->setText(QApplication::translate("editUSER", "Reset m\341\272\255t kh\341\272\251u", Q_NULLPTR));
        label_8->setText(QApplication::translate("editUSER", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600;\">TH\303\224NG TIN NG\306\257\341\273\234I D\303\231NG</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class editUSER: public Ui_editUSER {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITUSER_H

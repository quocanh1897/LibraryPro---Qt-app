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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editUSER
{
public:
    QHBoxLayout *horizontalLayout_2;
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
    QLineEdit *lineEdit_nghenghiep;
    QLabel *label_8;
    QLineEdit *lineEdit_gioitinh;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox_dg;
    QCheckBox *checkBox_tt;
    QCheckBox *checkBox_ql;
    QGroupBox *groupBox_pass;
    QLineEdit *lineEdit_mkmoi;
    QLineEdit *lineEdit_xacnhan;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_9;
    QLineEdit *lineEdit_mkcu;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_user;
    QPushButton *pushButton_update;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_admin;
    QPushButton *pushButton_reset;
    QPushButton *pushButton_lock;
    QPushButton *pushButton_del;
    QPushButton *pushButton_deall;
    QGroupBox *groupBox_profile;
    QPushButton *pushButton_changepass;
    QPushButton *pushButton_savepass;
    QLabel *status;

    void setupUi(QDialog *editUSER)
    {
        if (editUSER->objectName().isEmpty())
            editUSER->setObjectName(QStringLiteral("editUSER"));
        editUSER->resize(483, 354);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/users.png"), QSize(), QIcon::Normal, QIcon::Off);
        editUSER->setWindowIcon(icon);
        horizontalLayout_2 = new QHBoxLayout(editUSER);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        groupBox = new QGroupBox(editUSER);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 170, 47, 16));
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
        lineEdit_taikhoan->setGeometry(QRect(80, 20, 271, 20));
        lineEdit_hoten = new QLineEdit(groupBox);
        lineEdit_hoten->setObjectName(QStringLiteral("lineEdit_hoten"));
        lineEdit_hoten->setGeometry(QRect(80, 50, 271, 20));
        lineEdit_cmnd = new QLineEdit(groupBox);
        lineEdit_cmnd->setObjectName(QStringLiteral("lineEdit_cmnd"));
        lineEdit_cmnd->setGeometry(QRect(80, 80, 271, 20));
        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));
        lineEdit_email->setGeometry(QRect(80, 110, 271, 20));
        lineEdit_ngaysinh = new QLineEdit(groupBox);
        lineEdit_ngaysinh->setObjectName(QStringLiteral("lineEdit_ngaysinh"));
        lineEdit_ngaysinh->setGeometry(QRect(80, 140, 271, 20));
        lineEdit_nghenghiep = new QLineEdit(groupBox);
        lineEdit_nghenghiep->setObjectName(QStringLiteral("lineEdit_nghenghiep"));
        lineEdit_nghenghiep->setGeometry(QRect(80, 200, 271, 20));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 230, 47, 13));
        lineEdit_gioitinh = new QLineEdit(groupBox);
        lineEdit_gioitinh->setObjectName(QStringLiteral("lineEdit_gioitinh"));
        lineEdit_gioitinh->setGeometry(QRect(80, 230, 271, 20));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(80, 170, 271, 20));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        checkBox_dg = new QCheckBox(widget);
        checkBox_dg->setObjectName(QStringLiteral("checkBox_dg"));

        horizontalLayout->addWidget(checkBox_dg);

        checkBox_tt = new QCheckBox(widget);
        checkBox_tt->setObjectName(QStringLiteral("checkBox_tt"));

        horizontalLayout->addWidget(checkBox_tt);

        checkBox_ql = new QCheckBox(widget);
        checkBox_ql->setObjectName(QStringLiteral("checkBox_ql"));

        horizontalLayout->addWidget(checkBox_ql);

        lineEdit_cmnd->raise();
        lineEdit_email->raise();
        lineEdit_ngaysinh->raise();
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
        checkBox_dg->raise();
        checkBox_tt->raise();
        checkBox_ql->raise();
        label_8->raise();
        lineEdit_gioitinh->raise();

        verticalLayout_2->addWidget(groupBox);

        groupBox_pass = new QGroupBox(editUSER);
        groupBox_pass->setObjectName(QStringLiteral("groupBox_pass"));
        lineEdit_mkmoi = new QLineEdit(groupBox_pass);
        lineEdit_mkmoi->setObjectName(QStringLiteral("lineEdit_mkmoi"));
        lineEdit_mkmoi->setGeometry(QRect(240, 10, 113, 20));
        lineEdit_mkmoi->setEchoMode(QLineEdit::Password);
        lineEdit_xacnhan = new QLineEdit(groupBox_pass);
        lineEdit_xacnhan->setObjectName(QStringLiteral("lineEdit_xacnhan"));
        lineEdit_xacnhan->setGeometry(QRect(240, 40, 113, 20));
        lineEdit_xacnhan->setEchoMode(QLineEdit::Password);
        label_10 = new QLabel(groupBox_pass);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(200, 10, 31, 16));
        label_11 = new QLabel(groupBox_pass);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(180, 40, 51, 16));
        label_9 = new QLabel(groupBox_pass);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 10, 61, 20));
        lineEdit_mkcu = new QLineEdit(groupBox_pass);
        lineEdit_mkcu->setObjectName(QStringLiteral("lineEdit_mkcu"));
        lineEdit_mkcu->setGeometry(QRect(80, 10, 113, 20));
        lineEdit_mkcu->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(groupBox_pass);

        verticalLayout_2->setStretch(0, 7);
        verticalLayout_2->setStretch(1, 2);

        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_user = new QGroupBox(editUSER);
        groupBox_user->setObjectName(QStringLiteral("groupBox_user"));
        pushButton_update = new QPushButton(groupBox_user);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));
        pushButton_update->setGeometry(QRect(50, 0, 51, 51));
        pushButton_update->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/update2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_update->setIcon(icon1);
        pushButton_update->setIconSize(QSize(40, 40));
        pushButton_2 = new QPushButton(groupBox_user);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 0, 51, 51));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/ucontract.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(40, 40));

        verticalLayout->addWidget(groupBox_user);

        groupBox_admin = new QGroupBox(editUSER);
        groupBox_admin->setObjectName(QStringLiteral("groupBox_admin"));
        pushButton_reset = new QPushButton(groupBox_admin);
        pushButton_reset->setObjectName(QStringLiteral("pushButton_reset"));
        pushButton_reset->setGeometry(QRect(0, 0, 51, 51));
        pushButton_reset->setStyleSheet(QStringLiteral(""));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/reset2.png"), QSize(), QIcon::Selected, QIcon::Off);
        pushButton_reset->setIcon(icon3);
        pushButton_reset->setIconSize(QSize(49, 61));
        pushButton_reset->setCheckable(true);
        pushButton_lock = new QPushButton(groupBox_admin);
        pushButton_lock->setObjectName(QStringLiteral("pushButton_lock"));
        pushButton_lock->setGeometry(QRect(50, 0, 51, 51));
        pushButton_lock->setStyleSheet(QStringLiteral(""));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/select_code-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_lock->setIcon(icon4);
        pushButton_lock->setIconSize(QSize(40, 40));
        pushButton_lock->setAutoDefault(true);
        pushButton_del = new QPushButton(groupBox_admin);
        pushButton_del->setObjectName(QStringLiteral("pushButton_del"));
        pushButton_del->setGeometry(QRect(0, 50, 51, 51));
        pushButton_del->setAutoFillBackground(true);
        pushButton_del->setStyleSheet(QStringLiteral(""));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/del3.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_del->setIcon(icon5);
        pushButton_del->setIconSize(QSize(40, 40));
        pushButton_del->setAutoRepeat(true);
        pushButton_deall = new QPushButton(groupBox_admin);
        pushButton_deall->setObjectName(QStringLiteral("pushButton_deall"));
        pushButton_deall->setGeometry(QRect(50, 50, 51, 51));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/del2.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_deall->setIcon(icon6);
        pushButton_deall->setIconSize(QSize(40, 40));

        verticalLayout->addWidget(groupBox_admin);

        groupBox_profile = new QGroupBox(editUSER);
        groupBox_profile->setObjectName(QStringLiteral("groupBox_profile"));
        pushButton_changepass = new QPushButton(groupBox_profile);
        pushButton_changepass->setObjectName(QStringLiteral("pushButton_changepass"));
        pushButton_changepass->setGeometry(QRect(0, 0, 51, 51));
        pushButton_changepass->setIcon(icon4);
        pushButton_changepass->setIconSize(QSize(40, 40));
        pushButton_savepass = new QPushButton(groupBox_profile);
        pushButton_savepass->setObjectName(QStringLiteral("pushButton_savepass"));
        pushButton_savepass->setGeometry(QRect(50, 0, 51, 51));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/floppy-disk.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_savepass->setIcon(icon7);
        pushButton_savepass->setIconSize(QSize(40, 40));

        verticalLayout->addWidget(groupBox_profile);

        status = new QLabel(editUSER);
        status->setObjectName(QStringLiteral("status"));

        verticalLayout->addWidget(status);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 2);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 7);
        horizontalLayout_2->setStretch(1, 2);

        retranslateUi(editUSER);

        QMetaObject::connectSlotsByName(editUSER);
    } // setupUi

    void retranslateUi(QDialog *editUSER)
    {
        editUSER->setWindowTitle(QApplication::translate("editUSER", "Th\303\264ng tin ng\306\260\341\273\235i d\303\271ng", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_6->setText(QApplication::translate("editUSER", "Vai tr\303\262", Q_NULLPTR));
        label_3->setText(QApplication::translate("editUSER", "CMND/MSSV", Q_NULLPTR));
        label_4->setText(QApplication::translate("editUSER", "Email", Q_NULLPTR));
        label_2->setText(QApplication::translate("editUSER", "H\341\273\215 t\303\252n", Q_NULLPTR));
        label_7->setText(QApplication::translate("editUSER", "Ngh\341\273\201 nghi\341\273\207p", Q_NULLPTR));
        label->setText(QApplication::translate("editUSER", "T\303\240i kho\341\272\243n", Q_NULLPTR));
        label_5->setText(QApplication::translate("editUSER", "Ng\303\240y sinh", Q_NULLPTR));
        label_8->setText(QApplication::translate("editUSER", "Gi\341\273\233i t\303\255nh", Q_NULLPTR));
        checkBox_dg->setText(QApplication::translate("editUSER", "\304\220\341\273\231c gi\341\272\243", Q_NULLPTR));
        checkBox_tt->setText(QApplication::translate("editUSER", "Th\341\273\247 th\306\260", Q_NULLPTR));
        checkBox_ql->setText(QApplication::translate("editUSER", "Qu\341\272\243n l\303\275", Q_NULLPTR));
        groupBox_pass->setTitle(QString());
        label_10->setText(QApplication::translate("editUSER", "M\341\273\233i", Q_NULLPTR));
        label_11->setText(QApplication::translate("editUSER", "X\303\241c nh\341\272\255n", Q_NULLPTR));
        label_9->setText(QApplication::translate("editUSER", "M\341\272\255t kh\341\272\251u c\305\251", Q_NULLPTR));
        groupBox_user->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_update->setToolTip(QApplication::translate("editUSER", "C\341\272\255p nh\341\272\255t", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_update->setStatusTip(QApplication::translate("editUSER", "C\341\272\255p nh\341\272\255t th\303\264ng tin \304\221\303\243 thay \304\221\341\273\225i", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_update->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("editUSER", "S\341\273\255a th\303\264ng tin", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_2->setStatusTip(QApplication::translate("editUSER", "S\341\273\255a \304\221\341\273\225i th\303\264ng tin t\303\240i kho\341\272\243n n\303\240y", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_2->setText(QString());
        groupBox_admin->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_reset->setToolTip(QApplication::translate("editUSER", "Kho\303\241/M\341\273\237 kho\303\241 t\303\240i kho\341\272\243n", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_reset->setStatusTip(QApplication::translate("editUSER", "Kho\303\241/M\341\273\237 kho\303\241 t\303\240i kho\341\272\243n n\303\240y", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_reset->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_lock->setToolTip(QApplication::translate("editUSER", "\304\220\341\272\267t l\341\272\241i m\341\272\255t kh\341\272\251u", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_lock->setStatusTip(QApplication::translate("editUSER", "Reset m\341\272\255t kh\341\272\251u cho t\303\240i kho\341\272\243n n\303\240y", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_lock->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_del->setToolTip(QApplication::translate("editUSER", "Xo\303\241 t\303\240i kho\341\272\243n", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_del->setStatusTip(QApplication::translate("editUSER", "Xo\303\241 t\303\240i kho\341\272\243n n\303\240y kh\341\273\217i h\341\273\207 th\341\273\221ng", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_del->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_deall->setToolTip(QApplication::translate("editUSER", "Xo\303\241 ng\306\260\341\273\235i d\303\271ng", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_deall->setStatusTip(QApplication::translate("editUSER", "Xo\303\241 ng\306\260\341\273\235i d\303\271ng n\303\240y ra kh\341\273\217i h\341\273\207 th\341\273\221ng", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_deall->setText(QString());
        groupBox_profile->setTitle(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_changepass->setToolTip(QApplication::translate("editUSER", "\304\220\341\273\225i m\341\272\255t kh\341\272\251u", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pushButton_changepass->setText(QString());
        pushButton_savepass->setText(QString());
        status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class editUSER: public Ui_editUSER {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITUSER_H

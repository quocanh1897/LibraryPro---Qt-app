/********************************************************************************
** Form generated from reading UI file 'notice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTICE_H
#define UI_NOTICE_H

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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_notice
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_dangtb;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_tieude;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_3;
    QPlainTextEdit *plainTextEdit_noidung;
    QVBoxLayout *verticalLayout_nguoi_tgian;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_ndang;
    QLineEdit *lineEdit_ndang;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_tgian;
    QLineEdit *lineEdit_tgian;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_dang;
    QPushButton *pushButton_capnhat;
    QPushButton *pushButton_huy;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_xemtb;
    QHBoxLayout *horizontalLayout_3;
    QTableView *tableView_thongbao;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_refresh;
    QPushButton *pushButton_sua;
    QPushButton *pushButton_xoa;
    QPushButton *pushButton_xem;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *notice)
    {
        if (notice->objectName().isEmpty())
            notice->setObjectName(QStringLiteral("notice"));
        notice->resize(612, 586);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/notice.png"), QSize(), QIcon::Normal, QIcon::Off);
        notice->setWindowIcon(icon);
        verticalLayout_4 = new QVBoxLayout(notice);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_dangtb = new QGroupBox(notice);
        groupBox_dangtb->setObjectName(QStringLiteral("groupBox_dangtb"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_dangtb);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox_dangtb);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEdit_tieude = new QLineEdit(groupBox_dangtb);
        lineEdit_tieude->setObjectName(QStringLiteral("lineEdit_tieude"));

        horizontalLayout->addWidget(lineEdit_tieude);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(groupBox_dangtb);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);


        horizontalLayout_2->addLayout(verticalLayout_3);

        plainTextEdit_noidung = new QPlainTextEdit(groupBox_dangtb);
        plainTextEdit_noidung->setObjectName(QStringLiteral("plainTextEdit_noidung"));

        horizontalLayout_2->addWidget(plainTextEdit_noidung);


        verticalLayout_5->addLayout(horizontalLayout_2);


        verticalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_nguoi_tgian = new QVBoxLayout();
        verticalLayout_nguoi_tgian->setObjectName(QStringLiteral("verticalLayout_nguoi_tgian"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_ndang = new QLabel(groupBox_dangtb);
        label_ndang->setObjectName(QStringLiteral("label_ndang"));
        label_ndang->setFont(font);

        horizontalLayout_4->addWidget(label_ndang);

        lineEdit_ndang = new QLineEdit(groupBox_dangtb);
        lineEdit_ndang->setObjectName(QStringLiteral("lineEdit_ndang"));

        horizontalLayout_4->addWidget(lineEdit_ndang);


        verticalLayout_nguoi_tgian->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_tgian = new QLabel(groupBox_dangtb);
        label_tgian->setObjectName(QStringLiteral("label_tgian"));
        label_tgian->setFont(font);

        horizontalLayout_5->addWidget(label_tgian);

        lineEdit_tgian = new QLineEdit(groupBox_dangtb);
        lineEdit_tgian->setObjectName(QStringLiteral("lineEdit_tgian"));

        horizontalLayout_5->addWidget(lineEdit_tgian);


        verticalLayout_nguoi_tgian->addLayout(horizontalLayout_5);


        verticalLayout_7->addLayout(verticalLayout_nguoi_tgian);


        horizontalLayout_6->addLayout(verticalLayout_7);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_dang = new QPushButton(groupBox_dangtb);
        pushButton_dang->setObjectName(QStringLiteral("pushButton_dang"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/52-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_dang->setIcon(icon1);
        pushButton_dang->setIconSize(QSize(21, 21));

        verticalLayout_2->addWidget(pushButton_dang);

        pushButton_capnhat = new QPushButton(groupBox_dangtb);
        pushButton_capnhat->setObjectName(QStringLiteral("pushButton_capnhat"));
        pushButton_capnhat->setIcon(icon1);
        pushButton_capnhat->setIconSize(QSize(21, 21));

        verticalLayout_2->addWidget(pushButton_capnhat);

        pushButton_huy = new QPushButton(groupBox_dangtb);
        pushButton_huy->setObjectName(QStringLiteral("pushButton_huy"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_huy->setIcon(icon2);
        pushButton_huy->setIconSize(QSize(21, 21));

        verticalLayout_2->addWidget(pushButton_huy);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_6->addLayout(verticalLayout_2);


        verticalLayout_4->addWidget(groupBox_dangtb);

        groupBox_xemtb = new QGroupBox(notice);
        groupBox_xemtb->setObjectName(QStringLiteral("groupBox_xemtb"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_xemtb);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        tableView_thongbao = new QTableView(groupBox_xemtb);
        tableView_thongbao->setObjectName(QStringLiteral("tableView_thongbao"));

        horizontalLayout_3->addWidget(tableView_thongbao);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_refresh = new QPushButton(groupBox_xemtb);
        pushButton_refresh->setObjectName(QStringLiteral("pushButton_refresh"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_refresh->setIcon(icon3);
        pushButton_refresh->setIconSize(QSize(31, 31));

        verticalLayout->addWidget(pushButton_refresh);

        pushButton_sua = new QPushButton(groupBox_xemtb);
        pushButton_sua->setObjectName(QStringLiteral("pushButton_sua"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/Pencil-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_sua->setIcon(icon4);
        pushButton_sua->setIconSize(QSize(21, 21));

        verticalLayout->addWidget(pushButton_sua);

        pushButton_xoa = new QPushButton(groupBox_xemtb);
        pushButton_xoa->setObjectName(QStringLiteral("pushButton_xoa"));
        pushButton_xoa->setIcon(icon2);
        pushButton_xoa->setIconSize(QSize(21, 21));

        verticalLayout->addWidget(pushButton_xoa);

        pushButton_xem = new QPushButton(groupBox_xemtb);
        pushButton_xem->setObjectName(QStringLiteral("pushButton_xem"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_xem->setIcon(icon5);
        pushButton_xem->setIconSize(QSize(21, 21));

        verticalLayout->addWidget(pushButton_xem);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalLayout_3->setStretch(0, 11);
        horizontalLayout_3->setStretch(1, 1);

        verticalLayout_4->addWidget(groupBox_xemtb);


        retranslateUi(notice);

        QMetaObject::connectSlotsByName(notice);
    } // setupUi

    void retranslateUi(QDialog *notice)
    {
        notice->setWindowTitle(QApplication::translate("notice", "Th\303\264ng b\303\241o", Q_NULLPTR));
        groupBox_dangtb->setTitle(QApplication::translate("notice", "\304\220\304\203ng th\303\264ng b\303\241o m\341\273\233i", Q_NULLPTR));
        label->setText(QApplication::translate("notice", "Ti\303\252u \304\221\341\273\201  ", Q_NULLPTR));
        label_2->setText(QApplication::translate("notice", "N\341\273\231i dung", Q_NULLPTR));
        label_ndang->setText(QApplication::translate("notice", "Ng\306\260\341\273\235i \304\221\304\203ng", Q_NULLPTR));
        label_tgian->setText(QApplication::translate("notice", "Th\341\273\235i gian", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_dang->setToolTip(QApplication::translate("notice", "\304\220\304\203ng th\303\264ng b\303\241o m\341\273\233i", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_dang->setStatusTip(QApplication::translate("notice", "\304\220\304\203ng th\303\264ng b\303\241o m\341\273\233i", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_dang->setText(QApplication::translate("notice", "\304\220\304\203ng", Q_NULLPTR));
        pushButton_capnhat->setText(QApplication::translate("notice", "OK", Q_NULLPTR));
        pushButton_huy->setText(QApplication::translate("notice", "H\341\273\247y", Q_NULLPTR));
        groupBox_xemtb->setTitle(QApplication::translate("notice", "T\341\272\245t c\341\272\243 th\303\264ng b\303\241o", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        pushButton_refresh->setToolTip(QApplication::translate("notice", "C\341\272\255p nh\341\272\255t", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_refresh->setStatusTip(QApplication::translate("notice", "C\341\272\255p nh\341\272\255t l\341\272\241i th\303\264ng b\303\241o", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_refresh->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_sua->setToolTip(QApplication::translate("notice", "S\341\273\255a th\303\264ng b\303\241o", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_sua->setStatusTip(QApplication::translate("notice", "S\341\273\255a th\303\264ng b\303\241o", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_sua->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_xoa->setToolTip(QApplication::translate("notice", "X\303\263a", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        pushButton_xoa->setStatusTip(QApplication::translate("notice", "X\303\263a th\303\264ng b\303\241o", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        pushButton_xoa->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_xem->setToolTip(QApplication::translate("notice", "Chi ti\341\272\277t", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        pushButton_xem->setWhatsThis(QApplication::translate("notice", "xem chi ti\341\272\277t th\303\264ng b\303\241o", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pushButton_xem->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class notice: public Ui_notice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTICE_H

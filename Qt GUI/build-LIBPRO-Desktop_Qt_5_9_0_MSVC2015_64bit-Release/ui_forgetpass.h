/********************************************************************************
** Form generated from reading UI file 'forgetpass.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASS_H
#define UI_FORGETPASS_H

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

class Ui_forgetpass
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_tk;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_email;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_pass;
    QPushButton *pushButton_3;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *forgetpass)
    {
        if (forgetpass->objectName().isEmpty())
            forgetpass->setObjectName(QStringLiteral("forgetpass"));
        forgetpass->resize(265, 185);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/select_code-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        forgetpass->setWindowIcon(icon);
        groupBox = new QGroupBox(forgetpass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 241, 121));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 24, 71, 81));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        widget1 = new QWidget(groupBox);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(80, 24, 151, 81));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_tk = new QLineEdit(widget1);
        lineEdit_tk->setObjectName(QStringLiteral("lineEdit_tk"));

        verticalLayout->addWidget(lineEdit_tk);

        lineEdit_id = new QLineEdit(widget1);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));

        verticalLayout->addWidget(lineEdit_id);

        lineEdit_email = new QLineEdit(widget1);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));

        verticalLayout->addWidget(lineEdit_email);

        groupBox_2 = new QGroupBox(forgetpass);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 20, 231, 56));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit_pass = new QLineEdit(groupBox_2);
        lineEdit_pass->setObjectName(QStringLiteral("lineEdit_pass"));

        horizontalLayout_2->addWidget(lineEdit_pass);

        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/copy_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalLayout_2->setStretch(0, 9);
        horizontalLayout_2->setStretch(1, 1);
        widget2 = new QWidget(forgetpass);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(10, 130, 241, 41));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(31, 31));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(31, 31));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(forgetpass);

        QMetaObject::connectSlotsByName(forgetpass);
    } // setupUi

    void retranslateUi(QDialog *forgetpass)
    {
        forgetpass->setWindowTitle(QApplication::translate("forgetpass", "X\303\241c nh\341\272\255n th\303\264ng tin", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("forgetpass", "Y\303\252u c\341\272\247u \304\221\341\272\267t l\341\272\241i m\341\272\255t kh\341\272\251u", Q_NULLPTR));
        label->setText(QApplication::translate("forgetpass", "T\303\240i kho\341\272\243n", Q_NULLPTR));
        label_2->setText(QApplication::translate("forgetpass", "CMND/MSSV", Q_NULLPTR));
        label_3->setText(QApplication::translate("forgetpass", "Email \304\221\304\203ng k\303\255", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("forgetpass", "M\341\272\255t kh\341\272\251u m\341\273\233i", Q_NULLPTR));
        pushButton_3->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class forgetpass: public Ui_forgetpass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASS_H

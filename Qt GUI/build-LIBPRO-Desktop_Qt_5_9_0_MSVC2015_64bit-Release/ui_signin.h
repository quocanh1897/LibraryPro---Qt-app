/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signin
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_accountname;
    QLineEdit *lineEdit_password;

    void setupUi(QDialog *signin)
    {
        if (signin->objectName().isEmpty())
            signin->setObjectName(QStringLiteral("signin"));
        signin->resize(287, 136);
        pushButton = new QPushButton(signin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 110, 75, 23));
        groupBox = new QGroupBox(signin);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 271, 101));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 51, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 50, 51, 16));
        lineEdit_accountname = new QLineEdit(groupBox);
        lineEdit_accountname->setObjectName(QStringLiteral("lineEdit_accountname"));
        lineEdit_accountname->setGeometry(QRect(100, 20, 161, 20));
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(100, 50, 161, 20));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        retranslateUi(signin);

        QMetaObject::connectSlotsByName(signin);
    } // setupUi

    void retranslateUi(QDialog *signin)
    {
        signin->setWindowTitle(QApplication::translate("signin", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("signin", "\304\220\304\203ng Nh\341\272\255p!", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("signin", "Th\303\264ng tin", Q_NULLPTR));
        label->setText(QApplication::translate("signin", "T\303\240i kho\341\272\243n", Q_NULLPTR));
        label_2->setText(QApplication::translate("signin", "M\341\272\255t kh\341\272\251u", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class signin: public Ui_signin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H

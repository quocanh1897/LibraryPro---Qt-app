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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QStringLiteral("SignIn"));
        SignIn->resize(279, 143);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/acc.png"), QSize(), QIcon::Normal, QIcon::Off);
        SignIn->setWindowIcon(icon);
        groupBox = new QGroupBox(SignIn);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(11, 11, 261, 77));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 71, 19));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral(""));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 20, 151, 21));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 50, 151, 20));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 65, 19));
        label_2->setFont(font);
        widget = new QWidget(SignIn);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 100, 259, 26));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QFont font1;
        font1.setPointSize(10);
        pushButton->setFont(font1);

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setFont(font1);

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font1);

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QDialog *SignIn)
    {
        SignIn->setWindowTitle(QString());
        groupBox->setTitle(QApplication::translate("SignIn", "Th\303\264ng tin", Q_NULLPTR));
        label->setText(QApplication::translate("SignIn", "T\303\240i Kho\341\272\243n", Q_NULLPTR));
        label_2->setText(QApplication::translate("SignIn", "M\341\272\255t Kh\341\272\251u", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SignIn", "\304\220\304\203ng Nh\341\272\255p", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("SignIn", "Qu\303\252n m\341\272\255t kh\341\272\251u", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SignIn", "\304\220\303\263ng", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H

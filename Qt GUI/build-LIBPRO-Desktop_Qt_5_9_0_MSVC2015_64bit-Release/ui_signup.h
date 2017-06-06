/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUpDialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_male;
    QRadioButton *radioButton_female;
    QRadioButton *radioButton_others;
    QLineEdit *lineEdit_confirm;
    QLineEdit *lineEdit_id;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEdit_account;
    QLabel *label_2;
    QLabel *label_7;
    QLineEdit *lineEdit_pass;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_email;
    QHBoxLayout *horizontalLayout;
    QLabel *label_11;
    QSpinBox *spinBox_d;
    QLabel *label_12;
    QSpinBox *spinBox_m;
    QLabel *label_13;
    QSpinBox *spinBox_y;
    QLineEdit *lineEdit_job;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_reader;
    QCheckBox *checkBox_librarian;
    QCheckBox *checkBox_admin;
    QLabel *label_8;
    QLabel *label_14;
    QLabel *label_9;
    QLabel *label_6;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *SignUpDialog)
    {
        if (SignUpDialog->objectName().isEmpty())
            SignUpDialog->setObjectName(QStringLiteral("SignUpDialog"));
        SignUpDialog->resize(437, 346);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/signupicon.png"), QSize(), QIcon::Normal, QIcon::Off);
        SignUpDialog->setWindowIcon(icon);
        widget = new QWidget(SignUpDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 6, 421, 331));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButton_male = new QRadioButton(groupBox);
        radioButton_male->setObjectName(QStringLiteral("radioButton_male"));

        horizontalLayout_4->addWidget(radioButton_male);

        radioButton_female = new QRadioButton(groupBox);
        radioButton_female->setObjectName(QStringLiteral("radioButton_female"));

        horizontalLayout_4->addWidget(radioButton_female);

        radioButton_others = new QRadioButton(groupBox);
        radioButton_others->setObjectName(QStringLiteral("radioButton_others"));

        horizontalLayout_4->addWidget(radioButton_others);


        gridLayout->addLayout(horizontalLayout_4, 10, 2, 1, 1);

        lineEdit_confirm = new QLineEdit(groupBox);
        lineEdit_confirm->setObjectName(QStringLiteral("lineEdit_confirm"));
        lineEdit_confirm->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_confirm, 3, 2, 1, 1);

        lineEdit_id = new QLineEdit(groupBox);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));

        gridLayout->addWidget(lineEdit_id, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_account = new QLineEdit(groupBox);
        lineEdit_account->setObjectName(QStringLiteral("lineEdit_account"));

        gridLayout->addWidget(lineEdit_account, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        lineEdit_pass = new QLineEdit(groupBox);
        lineEdit_pass->setObjectName(QStringLiteral("lineEdit_pass"));
        lineEdit_pass->setEchoMode(QLineEdit::Password);
        lineEdit_pass->setReadOnly(false);

        gridLayout->addWidget(lineEdit_pass, 2, 2, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        lineEdit_email = new QLineEdit(groupBox);
        lineEdit_email->setObjectName(QStringLiteral("lineEdit_email"));

        gridLayout->addWidget(lineEdit_email, 4, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(1, 10, 0, 0);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setTextFormat(Qt::RichText);
        label_11->setScaledContents(false);
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_11);

        spinBox_d = new QSpinBox(groupBox);
        spinBox_d->setObjectName(QStringLiteral("spinBox_d"));
        spinBox_d->setMinimum(1);
        spinBox_d->setMaximum(31);

        horizontalLayout->addWidget(spinBox_d);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_12);

        spinBox_m = new QSpinBox(groupBox);
        spinBox_m->setObjectName(QStringLiteral("spinBox_m"));
        spinBox_m->setMinimum(1);
        spinBox_m->setMaximum(12);

        horizontalLayout->addWidget(spinBox_m);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_13);

        spinBox_y = new QSpinBox(groupBox);
        spinBox_y->setObjectName(QStringLiteral("spinBox_y"));
        spinBox_y->setMinimum(1900);
        spinBox_y->setMaximum(2017);

        horizontalLayout->addWidget(spinBox_y);

        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(5, 1);

        gridLayout->addLayout(horizontalLayout, 6, 2, 1, 1);

        lineEdit_job = new QLineEdit(groupBox);
        lineEdit_job->setObjectName(QStringLiteral("lineEdit_job"));

        gridLayout->addWidget(lineEdit_job, 8, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBox_reader = new QCheckBox(groupBox);
        checkBox_reader->setObjectName(QStringLiteral("checkBox_reader"));
        checkBox_reader->setEnabled(false);
        checkBox_reader->setChecked(true);

        horizontalLayout_2->addWidget(checkBox_reader);

        checkBox_librarian = new QCheckBox(groupBox);
        checkBox_librarian->setObjectName(QStringLiteral("checkBox_librarian"));

        horizontalLayout_2->addWidget(checkBox_librarian);

        checkBox_admin = new QCheckBox(groupBox);
        checkBox_admin->setObjectName(QStringLiteral("checkBox_admin"));

        horizontalLayout_2->addWidget(checkBox_admin);


        gridLayout->addLayout(horizontalLayout_2, 11, 2, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 10, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 11, 0, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        lineEdit_username = new QLineEdit(groupBox);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        gridLayout->addWidget(lineEdit_username, 5, 2, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton->raise();

        retranslateUi(SignUpDialog);

        QMetaObject::connectSlotsByName(SignUpDialog);
    } // setupUi

    void retranslateUi(QDialog *SignUpDialog)
    {
        SignUpDialog->setWindowTitle(QApplication::translate("SignUpDialog", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SignUpDialog", "\304\220\304\203ng k\303\255", Q_NULLPTR));
        radioButton_male->setText(QApplication::translate("SignUpDialog", "Nam", Q_NULLPTR));
        radioButton_female->setText(QApplication::translate("SignUpDialog", "N\341\273\257", Q_NULLPTR));
        radioButton_others->setText(QApplication::translate("SignUpDialog", "Kh\303\241c", Q_NULLPTR));
        label_3->setText(QApplication::translate("SignUpDialog", "M\341\272\255t kh\341\272\251u", Q_NULLPTR));
        label->setText(QApplication::translate("SignUpDialog", "T\303\252n t\303\240i kho\341\272\243n", Q_NULLPTR));
        label_2->setText(QApplication::translate("SignUpDialog", "CMND/MSSV", Q_NULLPTR));
        label_7->setText(QApplication::translate("SignUpDialog", "Ngh\341\273\201 nghi\341\273\207p", Q_NULLPTR));
        label_4->setText(QApplication::translate("SignUpDialog", "Email", Q_NULLPTR));
        label_5->setText(QApplication::translate("SignUpDialog", "Ng\303\240y sinh", Q_NULLPTR));
        label_11->setText(QApplication::translate("SignUpDialog", "DD", Q_NULLPTR));
        label_12->setText(QApplication::translate("SignUpDialog", "MM", Q_NULLPTR));
        label_13->setText(QApplication::translate("SignUpDialog", "YYYY", Q_NULLPTR));
        checkBox_reader->setText(QApplication::translate("SignUpDialog", "\304\220\341\273\231c gi\341\272\243", Q_NULLPTR));
        checkBox_librarian->setText(QApplication::translate("SignUpDialog", "Th\341\273\247 th\306\260", Q_NULLPTR));
        checkBox_admin->setText(QApplication::translate("SignUpDialog", "Qu\341\272\243n l\303\255", Q_NULLPTR));
        label_8->setText(QApplication::translate("SignUpDialog", "X\303\241c nh\341\272\255n m\341\272\255t kh\341\272\251u", Q_NULLPTR));
        label_14->setText(QApplication::translate("SignUpDialog", "Gi\341\273\233i t\303\255nh", Q_NULLPTR));
        label_9->setText(QApplication::translate("SignUpDialog", "Vai tr\303\262", Q_NULLPTR));
        label_6->setText(QApplication::translate("SignUpDialog", "H\341\273\215 v\303\240 t\303\252n", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SignUpDialog", "OK", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SignUpDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SignUpDialog: public Ui_SignUpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H

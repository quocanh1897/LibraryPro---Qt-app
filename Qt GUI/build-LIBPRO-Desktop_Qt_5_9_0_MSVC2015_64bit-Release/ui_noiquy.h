/********************************************************************************
** Form generated from reading UI file 'noiquy.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOIQUY_H
#define UI_NOIQUY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_noiquy
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *noiquy)
    {
        if (noiquy->objectName().isEmpty())
            noiquy->setObjectName(QStringLiteral("noiquy"));
        noiquy->resize(500, 420);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/rule.png"), QSize(), QIcon::Normal, QIcon::Off);
        noiquy->setWindowIcon(icon);
        layoutWidget = new QWidget(noiquy);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 481, 401));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(layoutWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        plainTextEdit->setAcceptDrops(true);
        plainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(noiquy);

        QMetaObject::connectSlotsByName(noiquy);
    } // setupUi

    void retranslateUi(QDialog *noiquy)
    {
        noiquy->setWindowTitle(QApplication::translate("noiquy", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("noiquy", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class noiquy: public Ui_noiquy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOIQUY_H

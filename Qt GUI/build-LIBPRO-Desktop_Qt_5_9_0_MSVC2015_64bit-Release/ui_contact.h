/********************************************************************************
** Form generated from reading UI file 'contact.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACT_H
#define UI_CONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_contact
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView;

    void setupUi(QDialog *contact)
    {
        if (contact->objectName().isEmpty())
            contact->setObjectName(QStringLiteral("contact"));
        contact->resize(526, 240);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/about-us-icon-15.png"), QSize(), QIcon::Normal, QIcon::Off);
        contact->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(contact);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(contact);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(contact);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);


        retranslateUi(contact);

        QMetaObject::connectSlotsByName(contact);
    } // setupUi

    void retranslateUi(QDialog *contact)
    {
        contact->setWindowTitle(QApplication::translate("contact", "Li\303\252n H\341\273\207", Q_NULLPTR));
        label->setText(QApplication::translate("contact", "C\303\201C QU\341\272\242N L\303\235 V\303\200 TH\341\273\246 TH\306\257 C\303\223 TH\341\273\202 LI\303\212N H\341\273\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class contact: public Ui_contact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACT_H

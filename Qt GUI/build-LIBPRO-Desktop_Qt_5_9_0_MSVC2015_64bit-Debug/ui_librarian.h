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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_librarian
{
public:

    void setupUi(QWidget *librarian)
    {
        if (librarian->objectName().isEmpty())
            librarian->setObjectName(QStringLiteral("librarian"));
        librarian->resize(400, 300);

        retranslateUi(librarian);

        QMetaObject::connectSlotsByName(librarian);
    } // setupUi

    void retranslateUi(QWidget *librarian)
    {
        librarian->setWindowTitle(QApplication::translate("librarian", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class librarian: public Ui_librarian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIAN_H

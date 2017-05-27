/********************************************************************************
** Form generated from reading UI file 'workspace.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKSPACE_H
#define UI_WORKSPACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_workspace
{
public:
    QTabWidget *tabWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QDialog *workspace)
    {
        if (workspace->objectName().isEmpty())
            workspace->setObjectName(QStringLiteral("workspace"));
        workspace->resize(1156, 714);
        tabWidget = new QTabWidget(workspace);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 40, 1141, 671));
        layoutWidget = new QWidget(workspace);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 1141, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(workspace);

        QMetaObject::connectSlotsByName(workspace);
    } // setupUi

    void retranslateUi(QDialog *workspace)
    {
        workspace->setWindowTitle(QApplication::translate("workspace", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("workspace", "Th\303\264ng tin", Q_NULLPTR));
        label->setText(QApplication::translate("workspace", "TextLabel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("workspace", "Tho\303\241t", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class workspace: public Ui_workspace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKSPACE_H

/********************************************************************************
** Form generated from reading UI file 'reader.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READER_H
#define UI_READER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reader
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QListView *listView;

    void setupUi(QWidget *reader)
    {
        if (reader->objectName().isEmpty())
            reader->setObjectName(QStringLiteral("reader"));
        reader->resize(738, 508);
        tableWidget = new QTableWidget(reader);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(300, 280, 351, 192));
        label = new QLabel(reader);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 91, 61));
        pushButton = new QPushButton(reader);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 280, 75, 23));
        pushButton_2 = new QPushButton(reader);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(660, 310, 75, 23));
        pushButton_3 = new QPushButton(reader);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(590, 250, 75, 23));
        lineEdit = new QLineEdit(reader);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(460, 250, 113, 20));
        comboBox = new QComboBox(reader);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(300, 250, 69, 22));
        comboBox_2 = new QComboBox(reader);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(380, 250, 69, 22));
        listView = new QListView(reader);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(30, 280, 191, 192));

        retranslateUi(reader);

        QMetaObject::connectSlotsByName(reader);
    } // setupUi

    void retranslateUi(QWidget *reader)
    {
        reader->setWindowTitle(QApplication::translate("reader", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("reader", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("reader", "PushButton", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("reader", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("reader", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class reader: public Ui_reader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_H

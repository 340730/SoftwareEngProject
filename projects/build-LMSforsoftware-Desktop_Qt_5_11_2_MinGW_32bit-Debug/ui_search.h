/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QTableView *tableView;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QStringLiteral("Search"));
        Search->resize(526, 367);
        tableView = new QTableView(Search);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 30, 431, 291));
        tableView->horizontalHeader()->setDefaultSectionSize(150);
        tableView->verticalHeader()->setDefaultSectionSize(40);

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QApplication::translate("Search", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H

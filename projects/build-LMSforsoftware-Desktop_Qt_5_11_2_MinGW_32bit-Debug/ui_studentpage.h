/********************************************************************************
** Form generated from reading UI file 'studentpage.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTPAGE_H
#define UI_STUDENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Studentpage
{
public:
    QTableView *studentView;

    void setupUi(QDialog *Studentpage)
    {
        if (Studentpage->objectName().isEmpty())
            Studentpage->setObjectName(QStringLiteral("Studentpage"));
        Studentpage->resize(522, 396);
        studentView = new QTableView(Studentpage);
        studentView->setObjectName(QStringLiteral("studentView"));
        studentView->setGeometry(QRect(30, 11, 361, 191));

        retranslateUi(Studentpage);

        QMetaObject::connectSlotsByName(Studentpage);
    } // setupUi

    void retranslateUi(QDialog *Studentpage)
    {
        Studentpage->setWindowTitle(QApplication::translate("Studentpage", "Studentpage", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Studentpage: public Ui_Studentpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTPAGE_H

/********************************************************************************
** Form generated from reading UI file 'change.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_H
#define UI_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_change
{
public:

    void setupUi(QDialog *change)
    {
        if (change->objectName().isEmpty())
            change->setObjectName(QStringLiteral("change"));
        change->resize(400, 300);

        retranslateUi(change);

        QMetaObject::connectSlotsByName(change);
    } // setupUi

    void retranslateUi(QDialog *change)
    {
        change->setWindowTitle(QApplication::translate("change", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change: public Ui_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_H

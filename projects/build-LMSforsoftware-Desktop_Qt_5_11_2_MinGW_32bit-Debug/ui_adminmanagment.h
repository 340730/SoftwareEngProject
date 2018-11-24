/********************************************************************************
** Form generated from reading UI file 'adminmanagment.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMANAGMENT_H
#define UI_ADMINMANAGMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Adminmanagment
{
public:
    QGroupBox *groupBox;
    QPushButton *gotoSearch;

    void setupUi(QDialog *Adminmanagment)
    {
        if (Adminmanagment->objectName().isEmpty())
            Adminmanagment->setObjectName(QStringLiteral("Adminmanagment"));
        Adminmanagment->resize(520, 361);
        groupBox = new QGroupBox(Adminmanagment);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 40, 341, 241));
        gotoSearch = new QPushButton(groupBox);
        gotoSearch->setObjectName(QStringLiteral("gotoSearch"));
        gotoSearch->setGeometry(QRect(60, 60, 75, 23));

        retranslateUi(Adminmanagment);

        QMetaObject::connectSlotsByName(Adminmanagment);
    } // setupUi

    void retranslateUi(QDialog *Adminmanagment)
    {
        Adminmanagment->setWindowTitle(QApplication::translate("Adminmanagment", "Adminmanagment", nullptr));
        groupBox->setTitle(QApplication::translate("Adminmanagment", "Admin's function", nullptr));
        gotoSearch->setText(QApplication::translate("Adminmanagment", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Adminmanagment: public Ui_Adminmanagment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMANAGMENT_H

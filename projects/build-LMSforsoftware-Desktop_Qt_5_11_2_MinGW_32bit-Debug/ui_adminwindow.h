/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminwindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *adminwindow)
    {
        if (adminwindow->objectName().isEmpty())
            adminwindow->setObjectName(QStringLiteral("adminwindow"));
        adminwindow->setEnabled(true);
        adminwindow->resize(800, 600);
        centralwidget = new QWidget(adminwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        adminwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(adminwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        adminwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(adminwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        adminwindow->setStatusBar(statusbar);

        retranslateUi(adminwindow);

        QMetaObject::connectSlotsByName(adminwindow);
    } // setupUi

    void retranslateUi(QMainWindow *adminwindow)
    {
        adminwindow->setWindowTitle(QApplication::translate("adminwindow", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminwindow: public Ui_adminwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H

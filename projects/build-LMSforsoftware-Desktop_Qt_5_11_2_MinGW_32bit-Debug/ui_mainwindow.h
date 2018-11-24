/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineedit_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineedit_password;
    QPushButton *loginpush;
    QPushButton *pushButton_register;
    QPushButton *pushButton_exit;
    QMenuBar *menuBar;
    QMenu *menu123;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(495, 423);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 491, 55));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineedit_username = new QLineEdit(groupBox);
        lineedit_username->setObjectName(QStringLiteral("lineedit_username"));

        horizontalLayout->addWidget(lineedit_username);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineedit_password = new QLineEdit(groupBox);
        lineedit_password->setObjectName(QStringLiteral("lineedit_password"));

        horizontalLayout_2->addWidget(lineedit_password);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        loginpush = new QPushButton(groupBox);
        loginpush->setObjectName(QStringLiteral("loginpush"));

        horizontalLayout_3->addWidget(loginpush);

        pushButton_register = new QPushButton(centralWidget);
        pushButton_register->setObjectName(QStringLiteral("pushButton_register"));
        pushButton_register->setGeometry(QRect(110, 160, 75, 23));
        pushButton_exit = new QPushButton(centralWidget);
        pushButton_exit->setObjectName(QStringLiteral("pushButton_exit"));
        pushButton_exit->setGeometry(QRect(310, 160, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 495, 22));
        menu123 = new QMenu(menuBar);
        menu123->setObjectName(QStringLiteral("menu123"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu123->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Sign in", nullptr));
        label->setText(QApplication::translate("MainWindow", "User Name", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password", nullptr));
        loginpush->setText(QApplication::translate("MainWindow", "Login", nullptr));
        pushButton_register->setText(QApplication::translate("MainWindow", "Register", nullptr));
        pushButton_exit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        menu123->setTitle(QApplication::translate("MainWindow", "Learning Management System", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

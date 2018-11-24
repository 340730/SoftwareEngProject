/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QPushButton *pushButton_okayforreg;
    QPushButton *pushButton_cancelforreg;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_stname;
    QLineEdit *lineEdit_studentnameforreg;
    QLabel *label_2;
    QLineEdit *lineEdit_studnetidforreg;
    QLabel *label_3;
    QLineEdit *lineEdit_passwordforreg;
    QLabel *label_4;
    QLineEdit *lineEdit_numbersofcourses;
    QGroupBox *groupBox;
    QCheckBox *boxCS3306;
    QCheckBox *boxCS3321;
    QCheckBox *boxCS4108;
    QCheckBox *boxCS4109;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(400, 300);
        pushButton_okayforreg = new QPushButton(Register);
        pushButton_okayforreg->setObjectName(QStringLiteral("pushButton_okayforreg"));
        pushButton_okayforreg->setGeometry(QRect(70, 200, 75, 23));
        pushButton_cancelforreg = new QPushButton(Register);
        pushButton_cancelforreg->setObjectName(QStringLiteral("pushButton_cancelforreg"));
        pushButton_cancelforreg->setGeometry(QRect(240, 200, 75, 23));
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 0, 261, 100));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_stname = new QLabel(layoutWidget);
        label_stname->setObjectName(QStringLiteral("label_stname"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_stname);

        lineEdit_studentnameforreg = new QLineEdit(layoutWidget);
        lineEdit_studentnameforreg->setObjectName(QStringLiteral("lineEdit_studentnameforreg"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_studentnameforreg);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_studnetidforreg = new QLineEdit(layoutWidget);
        lineEdit_studnetidforreg->setObjectName(QStringLiteral("lineEdit_studnetidforreg"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_studnetidforreg);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_passwordforreg = new QLineEdit(layoutWidget);
        lineEdit_passwordforreg->setObjectName(QStringLiteral("lineEdit_passwordforreg"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_passwordforreg);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_numbersofcourses = new QLineEdit(layoutWidget);
        lineEdit_numbersofcourses->setObjectName(QStringLiteral("lineEdit_numbersofcourses"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_numbersofcourses);

        groupBox = new QGroupBox(Register);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 110, 261, 80));
        boxCS3306 = new QCheckBox(groupBox);
        boxCS3306->setObjectName(QStringLiteral("boxCS3306"));
        boxCS3306->setGeometry(QRect(10, 20, 73, 16));
        boxCS3321 = new QCheckBox(groupBox);
        boxCS3321->setObjectName(QStringLiteral("boxCS3321"));
        boxCS3321->setGeometry(QRect(160, 20, 73, 16));
        boxCS4108 = new QCheckBox(groupBox);
        boxCS4108->setObjectName(QStringLiteral("boxCS4108"));
        boxCS4108->setGeometry(QRect(10, 50, 73, 16));
        boxCS4109 = new QCheckBox(groupBox);
        boxCS4109->setObjectName(QStringLiteral("boxCS4109"));
        boxCS4109->setGeometry(QRect(160, 50, 73, 16));

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Dialog", nullptr));
        pushButton_okayforreg->setText(QApplication::translate("Register", "Confirm", nullptr));
        pushButton_cancelforreg->setText(QApplication::translate("Register", "Cancel", nullptr));
        label_stname->setText(QApplication::translate("Register", "Student Name  (Also login id)", nullptr));
        label_2->setText(QApplication::translate("Register", "Student ID", nullptr));
        label_3->setText(QApplication::translate("Register", "Login password", nullptr));
        label_4->setText(QApplication::translate("Register", "Numbers of Courses Registed", nullptr));
        groupBox->setTitle(QApplication::translate("Register", "Courses enrolled", nullptr));
        boxCS3306->setText(QApplication::translate("Register", "CS3306", nullptr));
        boxCS3321->setText(QApplication::translate("Register", "CS3321", nullptr));
        boxCS4108->setText(QApplication::translate("Register", "CS4108", nullptr));
        boxCS4109->setText(QApplication::translate("Register", "CS4109", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H

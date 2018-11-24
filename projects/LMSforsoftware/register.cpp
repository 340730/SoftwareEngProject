#include "register.h"
#include "ui_register.h"
#include <QDebug>

Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_cancelforreg_clicked()
{
    close();
}

void Register::on_pushButton_okayforreg_clicked()
{
    QString name=ui->lineEdit_studentnameforreg->text();
    QString id=ui->lineEdit_studnetidforreg->text();
    QString passwordforreg= ui-> lineEdit_passwordforreg-> text();
    QString numsofcourses=ui->lineEdit_numbersofcourses->text();
    qint64 GPA = 0;
    QFile file("student.txt");
    qDebug()<<name<<" "<<id<<endl;
    QTextStream Out(&file);
    if(!file.open (QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append))
            return;
     Out<<name<<" "<<passwordforreg<<" "<<id<<" "<<numsofcourses<<" "<< GPA;

     ui->lineEdit_studentnameforreg->clear();
     ui->lineEdit_studnetidforreg->clear();
     ui->lineEdit_passwordforreg->clear();
     ui->lineEdit_numbersofcourses->clear();
     Out<<endl;
     file.close();
}

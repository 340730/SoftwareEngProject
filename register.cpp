#include "register.h"
#include "ui_register.h"
#include <QDebug>
#include <string>
using namespace std;

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
    QList<QAbstractButton*>cos=ui->courses_button->buttons();
    QFile file("student.txt");
    QFile courses("courses.txt");
    qDebug()<<name<<" "<<id<<endl;
    qDebug()<<name<<" "<<id<<endl;

    QTextStream Out(&file);
    if(!file.open (QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append))
            return;
     Out<<name<<" "<<passwordforreg<<" "<<id<<" "<<numsofcourses<<" "<< GPA;
     for(int i=0;i<cos.size();i++)
     {
         if(cos[i]->isChecked())
         {
             Out<<" "<<cos[i]->text()<<" "<<score[i];
         }
         else
            {
             Out<<" "<<cos[i]->text()<<" "<<noenrolledscore;

            }
             cos[i]->setChecked(false);
     }
     Out<<endl;
     file.close();
    /*
     QTextStream Out2(&courses);
     if(!courses.open (QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append))
             return;
     Out2<<name<<" "<<id<<" "; //output name and id before courses

     for(int i=0;i<cos.size();i++)
     {
         if(cos[i]->isChecked())
         {
             Out2<<" "<<cos[i]->text()<<" "<<score[i];
         }
         else
            {
             Out2<<" "<<cos[i]->text()<<" "<<"null";

            }
             cos[i]->setChecked(false);
     }

     Out2<< endl;
    */
     ui->lineEdit_studentnameforreg->clear();
     ui->lineEdit_studnetidforreg->clear();
     ui->lineEdit_passwordforreg->clear();
     ui->lineEdit_numbersofcourses->clear();


}



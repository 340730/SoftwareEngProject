#include "modify.h"
#include "ui_modify.h"
#include <QMessageBox>
#include "search.h"
#include <fstream>
#include <QString>
#include <QDebug>
#include <string>
#include <cctype>
#include <sstream>
#include <iostream>
using namespace std;



Modify::Modify(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Modify)
{
    ui->setupUi(this);
    readfile(stu_lines);
    m_id=0;
    display(0);
    readfile3(stu_lines3);
    display3(0);
}



Modify::~Modify()
{
    delete ui;
}

void Modify::readfile(QList<QString> &stu_lines)
{
    QFile file("student.txt");


    if(!file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        return;
    }
    else
    {
    while(!file.atEnd())
    {
       stu_lines.append(file.readLine());
    }
    }


}

void Modify::readfile3(QList<QString> &stu_lines3)
{
     QFile file2("course.txt");

     if(!file2.open(QIODevice::ReadOnly|QIODevice::Text))
     {
         return;
     }
     while(!file2.atEnd())
     {
        stu_lines3.append(file2.readLine());

     }


}
void Modify::on_NextStudent_clicked()
{
    m_id=(++m_id)%stu_lines.size();
    display(m_id);
}

void Modify::on_Change_clicked()
{
    QMessageBox::StandardButton replyforchange;
    replyforchange = QMessageBox::question(this,"Comfirm Changes?","Click No to Cancel",
                                           QMessageBox::Yes|QMessageBox::No);
    if (replyforchange==QMessageBox::Yes)
    {
        double notenrolled =-1;
        QString tem = "";
        tem+=ui->lineEdit_nameinmo->text();
        tem+=' ';
        tem+=ui->lineEdit_passwordinmo->text();
        tem+=' ';
        tem+=ui->lineEdit_idinmo->text();
        tem+=' ';
        tem+=ui->lineEdit_numsofcourseinmo->text();
        tem+=' ';
        tem+=ui->lineEdit_gpa->text();




        QList <QAbstractButton*>coursechange=ui->Coursegroupinmo->buttons();

            if(coursechange[0]->isChecked())
            {
                tem.append(' ');
                tem+=coursechange[0]->text();
                tem+=' ';
                tem+=ui->score_3306->text();

            }
            else if (!coursechange[0]->isChecked())
            {
                tem.append(' ');
                tem+=coursechange[0]->text();
                tem+=' ';
                tem.append("-1");
             }

            if(coursechange[1]->isChecked())
            {
                tem.append(' ');
                tem+=coursechange[1]->text();
                tem+=' ';
                tem+=ui->score_3321->text();

            }
            else if (!coursechange[1]->isChecked())
            {
                tem.append(' ');
                tem+=coursechange[1]->text();
                tem+=' ';
                tem.append("-1");
             }

            if(coursechange[2]->isChecked())
            {
                tem.append(' ');
                tem+=coursechange[2]->text();
                tem+=' ';
                tem+=ui->score_4108->text();

            }
            else if (!coursechange[2]->isChecked())
            {
                tem.append(' ');
                tem+=coursechange[2]->text();
                tem+=' ';
                tem.append("-1");
             }

            if(coursechange[3]->isChecked())
            {
                tem.append(' ');
                tem+=coursechange[3]->text();
                tem+=' ';
                tem+=ui->score_4109->text();

            }
            else if (!coursechange[3]->isChecked())
            {
                tem.append(' ');
                tem+=coursechange[3]->text();
                tem+=' ';
                tem.append("-1");
             }



        stu_lines[m_id]=tem;

    }
    else
    {
        return;
    }

}



void Modify::on_Delete_clicked()
{
    QMessageBox::StandardButton replyfordelete;
    replyfordelete = QMessageBox::question(this,"Comfirm Delete?","Click No to Cancel",
                                           QMessageBox::Yes|QMessageBox::No);
    if (replyfordelete==QMessageBox::Yes)
    {
    if(stu_lines.size()<=1)
        return;
    stu_lines.removeAt(m_id); //prevent unexist value which will cause program to crash

    if(m_id>=stu_lines.size())
        m_id=0;
    display(m_id);
    }
    else
    {
        return;
    }
}

void Modify::display(int index)
{
    QString line=stu_lines[index];
    QStringList subs=line.split(' ');
    ui->lineEdit_nameinmo-> setText(subs[0]);
    ui->lineEdit_passwordinmo-> setText(subs[1]);
    ui->lineEdit_idinmo-> setText(subs[2]);
    ui->lineEdit_numsofcourseinmo->setText(subs[3]);
    ui->lineEdit_gpa->setText(subs[4]);


    ui->score_3306->setText(subs[6]);
    ui->score_3321->setText(subs[8]);
    ui->score_4108->setText(subs[10]);
    ui->score_4109->setText(subs[12]);
    QString score1= subs[6];
    QString score2= subs[8];
    QString score3= subs[10];
    QString score4= subs[12];




    ui->lineEdit_gpa->setText(subs[4]);

    QList <QAbstractButton*>coursesmo=ui->Coursegroupinmo->buttons();

    for(int i=0;i<coursesmo.size();i++)
    {
       coursesmo[i]->setChecked(true);
    }
    for(int i=5;i<subs.size();i++)
    {

        qDebug()<<subs[i];
        if (subs[6] =="-1")
            coursesmo[0]->setChecked(false);

        if(subs[8] == "-1")
            coursesmo[1]->setChecked(false);
        if(subs[10]== "-1")
            coursesmo[2]->setChecked(false);
        if(subs[12]== "-1\n")
            coursesmo[3]->setChecked(false);



        /*
        QString temp=subs[i].trimmed();//delete the empty spaces on the eages;
        for(int j=0;j<coursesmo.size();j++)
        {
         if(coursesmo[j]->text()==temp)
         {
             coursesmo[j]->setChecked(true);
             break;
         }
        }
        */
    }
        qDebug()<< subs.size();


}

void Modify::display3(int index3)
{


    //declare strings that will be used to read courses.txt

    string line;
    QList<QAbstractButton*>cos2=ui->Coursegroupinmo->buttons();

    ifstream file2("course.txt");
    while (getline(file2, line))
    {
        istringstream iss(line);

        string current_name;
        string current_id;


    }


}

void Modify::closeEvent(QCloseEvent *event)
{

    if(QMessageBox::Cancel==QMessageBox::warning(NULL,"If you close right now",
                                                 "all change will be saved",\
                                                 QMessageBox::Ok|QMessageBox::Cancel))
    {
        event->ignore();
        return;
    }
    QFile myfile("student.txt");
    if(!myfile.open(QIODevice::WriteOnly|QIODevice::Text))
    {
        return;
    }
    QTextStream out(&myfile);
    for(int i=0;i<stu_lines.size();i++)
    {
        out<<stu_lines[i].trimmed()<<endl;
    }
    myfile.close();

}

void Modify::on_Exitandsave_clicked()
{
     close();
}

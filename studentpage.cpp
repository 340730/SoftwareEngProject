#include "studentpage.h"
#include "ui_studentpage.h"


Studentpage::Studentpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Studentpage)
{

    ui->setupUi(this);
    QFile myfile("student.txt");
    if(!myfile.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        return;
    }
    while (!myfile.atEnd())
    {
        stu_lines2.append(myfile.readLine());
    }
     studenttable=new QStandardItemModel;
     studenttable->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("Name")));
     studenttable->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("password")));
     studenttable->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("ID")));
     studenttable->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("Total Course")));
     studenttable->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("GPA")));
     studenttable->setHorizontalHeaderItem(5,new QStandardItem(QObject::tr("Course1")));
     studenttable->setHorizontalHeaderItem(6,new QStandardItem(QObject::tr("Average of c1")));

     studenttable->setHorizontalHeaderItem(7,new QStandardItem(QObject::tr("Course2")));
      studenttable->setHorizontalHeaderItem(8,new QStandardItem(QObject::tr("Average of c2")));

     studenttable->setHorizontalHeaderItem(9,new QStandardItem(QObject::tr("Course3")));
      studenttable->setHorizontalHeaderItem(10,new QStandardItem(QObject::tr("Average of c3")));

     studenttable->setHorizontalHeaderItem(11,new QStandardItem(QObject::tr("Course4")));
      studenttable->setHorizontalHeaderItem(12,new QStandardItem(QObject::tr("Average of c4")));

     ui->studentView->setModel(studenttable);
     ui->studentView->setColumnWidth(0,150);
     ui->studentView->setColumnWidth(1,100);
     ui->studentView->setColumnWidth(2,100);
     ui->studentView->setColumnWidth(3,100);
     ui->studentView->setColumnWidth(4,100);
     ui->studentView->setColumnWidth(5,100);
     ui->studentView->setColumnWidth(6,100);
     ui->studentView->setColumnWidth(7,100);
     ui->studentView->setColumnWidth(8,100);
     ui->studentView->setColumnWidth(9,100);
     ui->studentView->setColumnWidth(10,100);
     ui->studentView->setColumnWidth(11,100);
     ui->studentView->setColumnWidth(12,100);
     doquery2();


}

Studentpage::~Studentpage()
{
    delete ui;
}

void Studentpage::doquery2()
{



    for(int i=0; i<stu_lines2.size();i++)
    {
        QString line= stu_lines2[i];
        QStringList subs=line.split(' ');
        for(int j=0;j<13;j++)
        {

                studenttable->setItem(i,j,new QStandardItem(subs[j]));


        }


    }

}



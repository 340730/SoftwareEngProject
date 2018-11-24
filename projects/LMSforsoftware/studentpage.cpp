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
     ui->studentView->setModel(studenttable);
     ui->studentView->setColumnWidth(0,150);
     ui->studentView->setColumnWidth(1,100);
     ui->studentView->setColumnWidth(2,100);
     ui->studentView->setColumnWidth(3,100);
     ui->studentView->setColumnWidth(4,50);

}

Studentpage::~Studentpage()
{
    delete ui;
}



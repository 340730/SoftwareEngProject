#include "search.h"
#include "ui_search.h"

Search::Search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);
    QFile myfile("student.txt");
    if(!myfile.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        return;
    }
    while (!myfile.atEnd())
    {
        stu_lines.append(myfile.readLine());
    }
     mytable=new QStandardItemModel;
     mytable->setHorizontalHeaderItem(0,new QStandardItem(QObject::tr("Name")));
     mytable->setHorizontalHeaderItem(1,new QStandardItem(QObject::tr("password")));
     mytable->setHorizontalHeaderItem(2,new QStandardItem(QObject::tr("ID")));
     mytable->setHorizontalHeaderItem(3,new QStandardItem(QObject::tr("Total Course")));
     mytable->setHorizontalHeaderItem(4,new QStandardItem(QObject::tr("GPA")));
     ui->tableView->setModel(mytable);
     ui->tableView->setColumnWidth(0,150);
     ui->tableView->setColumnWidth(1,100);
     ui->tableView->setColumnWidth(2,100);
     ui->tableView->setColumnWidth(3,100);
     ui->tableView->setColumnWidth(4,50);
     doquery();

}
Search::~Search()
{
    delete ui;
}

void Search::doquery()
{
    for(int i=0; i<stu_lines.size();i++)
    {
        QString line= stu_lines[i];
        QStringList subs=line.split(' ');
        for(int j=0;j<5;j++)
        {

            mytable->setItem(i,j,new QStandardItem(subs[j]));

        }


    }
}

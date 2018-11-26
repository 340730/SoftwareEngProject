#include "adminmanagment.h"
#include "ui_adminmanagment.h"

Adminmanagment::Adminmanagment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Adminmanagment)
{
    ui->setupUi(this);
}

Adminmanagment::~Adminmanagment()
{
    delete ui;
}




void Adminmanagment::on_gotoSearch_clicked()
{
    Search gotosearch;
    gotosearch.exec();
}

void Adminmanagment::on_Modify_clicked()
{
    Modify gotomodify;
    gotomodify.exec();
}

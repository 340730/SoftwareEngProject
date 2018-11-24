#include "change.h"
#include "ui_change.h"
#include "search.h"

change::change(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::change)
{
    ui->setupUi(this);
    m_id=0;
    display(m_id);
}

change::~change()
{
    delete ui;
}

void change::display(int index)
{

}

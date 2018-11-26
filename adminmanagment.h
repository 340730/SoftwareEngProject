#ifndef ADMINMANAGMENT_H
#define ADMINMANAGMENT_H

#include <QDialog>
#include  <QString>
#include <QList>
#include <QAbstractButton>
#include<QFile>
#include <QTextStream>
#include "search.h"
#include "register.h"
#include "modify.h"

namespace Ui {
class Adminmanagment;
}

class Adminmanagment : public QDialog
{
    Q_OBJECT

public:
    explicit Adminmanagment(QWidget *parent = nullptr);
    ~Adminmanagment();

private slots:


    void on_gotoSearch_clicked();

    void on_Modify_clicked();

private:
    Ui::Adminmanagment *ui;
};

#endif // ADMINMANAGMENT_H

#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>
#include <QCloseEvent>
#include <QMessageBox>
#include <QAbstractItemModel>
#include<QStandardItemModel>
#include  <QString>
#include <QList>
#include <QAbstractButton>
#include<QFile>
#include <QTextStream>
#include <QStringList>
#include "register.h"



namespace Ui {
class Search;
}

class Search : public QDialog
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = nullptr);
    ~Search();

    void doquery();

private:
    Ui::Search *ui;
    QStandardItemModel * mytable;
    QList <QString> stu_lines;

};

#endif // SEARCH_H

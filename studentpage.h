#ifndef STUDENTPAGE_H
#define STUDENTPAGE_H

#include <QDialog>
#include <QCloseEvent>
#include <QMessageBox>
#include <QAbstractItemModel>
#include <QStandardItemModel>
#include  <QString>
#include <QStringList>
#include <QList>
#include <QAbstractButton>
#include<QFile>
#include <QTextStream>
#include "search.h"
#include "mainwindow.h"
#include "register.h"

namespace Ui {
class Studentpage;
}

class Studentpage : public QDialog
{
    Q_OBJECT

public:
    explicit Studentpage(QWidget *parent = nullptr);
    ~Studentpage();
    void doquery2();
    QString nameinstdpage;

private:
    Ui::Studentpage *ui;
    QStandardItemModel * studenttable;
    QList <QString> stu_lines2;
    void init();
    bool getQueryText();
    void getFileData();
    void parsingFileData();
    void showUI(int row,QStringList list);

private:
    QString queryText;
    int index = 0;
    QList<QString> list_line;
    QStandardItemModel* model;

};

#endif // STUDENTPAGE_H


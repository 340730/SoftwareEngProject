#ifndef MODIFY_H
#define MODIFY_H

#include <QDialog>
#include <QFile>
#include <QList>
#include <QTextStream>
#include <QMessageBox>
#include <QCloseEvent>
#include <register.h>
#include <search.h>
#include <mainwindow.h>

namespace Ui {
class Modify;
}

class Modify : public QDialog
{
    Q_OBJECT

public:
    explicit Modify(QWidget *parent = nullptr);
    ~Modify();
    void display(int index);
    void display3(int index3); //display2 is unused


    static void readfile(QList<QString>&stu);
    static void readfile3(QList<QString>&stu3);
    QList <double> score = QList<double>() <<0 <<0<<0<<0;
    double noenrolledscore = -1;

protected:
    virtual void  closeEvent(QCloseEvent *event);

private slots:
    void on_NextStudent_clicked();

    void on_Change_clicked();



    void on_Delete_clicked();

    void on_Exitandsave_clicked();

private:
    Ui::Modify *ui;
    int m_id;
    QList<QString> stu_lines;
    QList<QString> stu_lines3;
};

#endif // MODIFY_H

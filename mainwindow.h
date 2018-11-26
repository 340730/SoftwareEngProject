#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include  <QString>
#include <QList>
#include <QAbstractButton>
#include<QFile>
#include <QTextStream>
#include "register.h"
#include "adminmanagment.h"
#include "studentpage.h"
#include "search.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_loginpush_clicked();

    void on_pushButton_register_clicked();

    void on_pushButton_exit_clicked();



private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

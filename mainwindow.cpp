#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_studentpage.h"
#include <QMessageBox>
#include "search.h"
#include <fstream>
#include <QString>
#include <QDebug>
#include <string>
#include <cctype>
#include <iostream>
#include <studentpage.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

std::istream& eat_whitespace(std::istream &is) // eats whitespace except '\n'
{
    int ch;
    while (is && (ch = is.peek()) != EOF && ch != '\n'
           && std::isspace(static_cast<char unsigned>(ch)))
    {
        is.get();
    }
    return is;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_loginpush_clicked()
{

    QString username = ui -> lineedit_username -> text();
    QString password = ui -> lineedit_password -> text();

    qDebug()<<password<<username;

    if (username == "admin" && password =="admin")
    {
        Adminmanagment adminview;
        adminview.exec();

    }


    else if((username != "admin") || (password !="admin"))
        {
            std::ifstream studentinfo("student.txt");
            if (!studentinfo.is_open())
            {
                QMessageBox msgbox;
                msgbox.setText("File is not opened");
                msgbox.exec();

            }

            else
            {

                std::string current_name;
                std::string current_password;
                std::string id;
                string cs3306;
                string score1;
                string cs3321;
                string score2;
                string cs4108;
                string score3;
                string cs4109;
                string score4;
                int numofcourses;
                double gpa;
                char newline;
                bool valid =false;
                cout<<current_name<<current_password;
                while ((studentinfo >> current_name >> current_password >> id >> numofcourses >> gpa
                        >>cs3306>>score1>>cs3321>>score2>>cs4108>>score3>>cs4109>>score4
                                     >>eat_whitespace >> std::noskipws >> newline >> std::skipws )
                       && newline == '\n')
                {
                    if((current_name == username.toLocal8Bit().constData())&&
                            (current_password== password.toLocal8Bit().constData()))
                    {
                        valid = true;

                        Studentpage gotostdpage;
                        gotostdpage.exec();
                        break;


                    }
                }

                if (valid == false)
                {
                    QMessageBox msgbox;
                    msgbox.setText("The username and password not correct");
                    msgbox.exec();
                }


            }

        }


}


void MainWindow::on_pushButton_register_clicked()
{
    Register reg;
    reg.exec();
}

void MainWindow::on_pushButton_exit_clicked()
{
    close();
}




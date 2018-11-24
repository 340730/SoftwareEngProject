#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "search.h"
#include <fstream>
#include <QString>
#include <QDebug>
#include <string>
#include <cctype>


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

    if (username == "admin" && password =="admin")
    {
        Adminmanagment adminview;
        adminview.exec();
    }


    else if( (username != "admin") && (password !="admin"))
        {
            std::ifstream studentinfo("student.txt");
            if (!studentinfo.is_open())
            {

            }

            else
            {
                std::string username2 = "kamkwan";
                std::string password2 = "123456";
                std::string current_name;
                std::string current_password;
                std::string id;
                int numofcourses;
                int gpa;
                char newline;
                bool valid =false;
                while ((studentinfo >> current_name >> current_password >> id >> numofcourses >> gpa
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
                    else
                    {
                        qDebug() << "the password and username are not correct";
                    }

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




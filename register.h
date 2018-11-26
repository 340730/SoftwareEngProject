#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>
#include  <QString>
#include <QList>
#include <QAbstractButton>
#include<QFile>
#include <QTextStream>
#include <string>
using namespace std;

namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();
    qint64 GPA = 0;

    QList <double> score = QList<double>() <<0 <<0<<0<<0;
    double noenrolledscore = -1;

    private slots:
    void on_pushButton_cancelforreg_clicked();

    void on_pushButton_okayforreg_clicked();


private:
    Ui::Register *ui;
};

#endif // REGISTER_H

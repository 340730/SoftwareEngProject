#ifndef CHANGE_H
#define CHANGE_H

#include <QDialog>
#include <QList>
#include <QCloseEvent>

namespace Ui {
class change;
}

class change : public QDialog
{
    Q_OBJECT

public:
    explicit change(QWidget *parent = nullptr);
    ~change();
    void display(int index);

private:
    Ui::change *ui;
    int m_id;
    QList <QString> stu_lines;
};

#endif // CHANGE_H

#include "dialog.h"
#include "ui_dialog.h"
#include <QFile>
#include <QTextStream>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Peace_to_world_clicked()
{
    QString filename = "abc.txt";
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly))
    {
        QTextStream stream_peace(&file);
        stream_peace<<"Миру мир!";
    }
    close();
}


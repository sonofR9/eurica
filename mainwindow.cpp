#include "mainwindow.h"
#include "dialog.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_butt_create_dialog_clicked()
{
    Dialog peace_for_world{this};
    peace_for_world.setModal(true);
    peace_for_world.exec();
    exit(0);
}



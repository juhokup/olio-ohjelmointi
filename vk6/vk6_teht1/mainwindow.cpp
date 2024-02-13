#include "mainwindow.h"
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


void MainWindow::on_btnCount_clicked()
{
    count++;
    QString numero = QString::number(count);
    qDebug()<<"Count painiketta painettu";
    ui->LineEdit->setText(numero);

}


void MainWindow::on_btnReset_clicked()
{
    count=0;
    QString numero = QString::number(count);
    qDebug()<<"Reset painiketta painettu";
    ui->LineEdit->setText(numero);

}


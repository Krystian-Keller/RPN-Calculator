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


void MainWindow::on_Number_1_clicked()
{
    ui->lineEdit->insert("1");
}


void MainWindow::on_Number_2_clicked()
{
    ui->lineEdit->insert("2");
}


void MainWindow::on_Number_3_clicked()
{
    ui->lineEdit->insert("3");
}


void MainWindow::on_Number_4_clicked()
{
    ui->lineEdit->insert("4");
}


void MainWindow::on_Number_5_clicked()
{
    ui->lineEdit->insert("5");
}


void MainWindow::on_Number_6_clicked()
{
    ui->lineEdit->insert("6");
}


void MainWindow::on_Number_7_clicked()
{
    ui->lineEdit->insert("7");
}


void MainWindow::on_Number_8_clicked()
{
    ui->lineEdit->insert("8");
}


void MainWindow::on_Number_9_clicked()
{
    ui->lineEdit->insert("9");
}


void MainWindow::on_Number_0_clicked()
{
    ui->lineEdit->insert("0");
}


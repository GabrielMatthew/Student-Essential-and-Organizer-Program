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


void MainWindow::on_Compute_clicked()
{
    float op1, op2, result;
    op1 = ui->lineEdit_op1->text().toFloat();
    op2 = ui->lineEdit_op2->text().toFloat();
    result = ui->lineEdit_result->text().toFloat();
    ui->lineEdit_result->setText(QString::number(result+op1-(op2)));
    ui->lineEdit_op1->clear();
    ui->lineEdit_op2->clear();
}

void MainWindow::on_ClearAll_clicked()
{
    ui->lineEdit_op1->clear();
    ui->lineEdit_op2->clear();
    ui->lineEdit_result->clear();
}

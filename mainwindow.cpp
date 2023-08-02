#include "mainwindow.h"
#include "ui_mainwindow.h"

double num1;
bool typsecnum = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Calculator");
    connect(ui->pushButton_0,SIGNAL(released()),SLOT(digit_pressed()));
    connect(ui->pushButton_1,SIGNAL(released()),SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(released()),SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),SLOT(digit_pressed()));
    connect(ui->pushButton_4,SIGNAL(released()),SLOT(digit_pressed()));
    connect(ui->pushButton_5,SIGNAL(released()),SLOT(digit_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),SLOT(digit_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),SLOT(digit_pressed()));

    connect(ui->pushButton_plusminus,SIGNAL(released()),SLOT(unary_operator_released()));
    connect(ui->pushButton_percent,SIGNAL(released()),SLOT(unary_operator_released()));

    connect(ui->pushButton_plus,SIGNAL(released()),SLOT(binary_operator_released()));
    connect(ui->pushButton_minus,SIGNAL(released()),SLOT(binary_operator_released()));
    connect(ui->pushButton_multiply,SIGNAL(released()),SLOT(binary_operator_released()));
    connect(ui->pushButton_divide,SIGNAL(released()),SLOT(binary_operator_released()));

    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_multiply->setCheckable(true);
    ui->pushButton_divide->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::digit_pressed()
{
    QPushButton * button = (QPushButton *)sender();
    double labelnumber;
    QString newlabel;
    if((ui->pushButton_plus->isChecked() || ui->pushButton_minus->isChecked() ||
            ui->pushButton_multiply->isChecked() || ui->pushButton_divide->isChecked())
            && (!typsecnum))
    {
        labelnumber = button->text().toDouble();
        typsecnum = true;
        newlabel = QString::number(labelnumber,'g', 10);
    }
    else
    {
        if(ui->label->text().contains(".") && button->text()=="0")
        {
            newlabel = ui->label->text()+button->text();
        }
        else
        {
            labelnumber = (ui->label->text()+button->text()).toDouble();
            newlabel = QString::number(labelnumber,'g', 10);
        }
    }
    ui->label->setText(newlabel);
}

void MainWindow::on_pushButton_dot_released()
{
    ui->label->setText(ui->label->text()+".");
}

void MainWindow::unary_operator_released()
{
    QPushButton * button = (QPushButton *)sender();
    double labelnumber;
    labelnumber=(ui->label->text()).toDouble();
    QString newlabel;
    if(button->text()=="+/-")
    {
        labelnumber=labelnumber*-1;
        newlabel=QString::number(labelnumber,'g',10);
        ui->label->setText(newlabel);
    }
    if(button->text()=="%")
    {
        labelnumber=labelnumber*.01;
        newlabel=QString::number(labelnumber,'g',10);
        ui->label->setText(newlabel);
    }
}

void MainWindow::on_pushButton_equal_released()
{
    double result, num2;
    num2 = ui->label->text().toDouble();
    QString newlabel;
    if(ui->pushButton_plus->isChecked())
    {
        result=num1+num2;
        newlabel=QString::number(result);
        ui->label->setText(newlabel);
        ui->pushButton_plus->setChecked(false);
    }
    else if(ui->pushButton_minus->isChecked())
    {
        result=num1-num2;
        newlabel=QString::number(result);
        ui->label->setText(newlabel);
        ui->pushButton_minus->setChecked(false);
    }
    else if(ui->pushButton_multiply->isChecked())
    {
        result=num1*num2;
        newlabel=QString::number(result);
        ui->label->setText(newlabel);
        ui->pushButton_multiply->setChecked(false);
    }
    else if(ui->pushButton_divide->isChecked())
    {
        result=num1/num2;
        newlabel=QString::number(result);
        ui->label->setText(newlabel);
        ui->pushButton_divide->setChecked(false);
    }

    typsecnum  = false;
}

void MainWindow::on_pushButton_clear_released()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_multiply->setChecked(false);
    ui->pushButton_divide->setChecked(false);
    typsecnum = false;
    ui->label->setText("0");
}

void MainWindow::binary_operator_released()
{
    QPushButton * button = (QPushButton*)sender();
    num1 = ui->label->text().toDouble();
    button->setChecked(true);
}

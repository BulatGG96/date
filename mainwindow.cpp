#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);
    //QObject::connect(ui->label, &QLabel::, this , &MainWindow::on_label_linkActivated);
    QObject::connect(ui->pushButton, &QPushButton::clicked, this , &MainWindow::on_label_linkActivated);
    //QObject::connect(ui->pushButton_2,&QPushButton::clicked,this, &MainWindow::on_label_linkActivated);
    QObject::connect(ui->pushButton_plus, &QPushButton::clicked,this, &MainWindow::on_label_5_linkActivated);
    QObject::connect(ui->pushButton_3, &QPushButton::clicked,this,&MainWindow::on_label_4_linkActivated);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_label_linkActivated()
{
    //ui->spinBox->


    t->setHour(ui->spinBox->value());
    t->setMins(ui->spinBox_2->value());
    t->setSecs(ui->spinBox_3->value());

    ui->label->setNum(t->Hours());
    ui->label_2->setNum(t->Minutes());
    ui->label_3->setNum(t->Seconds());

}




void MainWindow::on_label_4_linkActivated()
{

    t->setHour(ui->spinBox->value());
    t->setMins(ui->spinBox_2->value());
    t->setSecs(ui->spinBox_3->value());

    if (t->Hours()>12)
    {
        ui->label->setNum(t->Hourspm());
        ui->label_4->setText("p.m.");
    }
    else{

        ui->label->setNum(t->Hours());
        ui->label_4->setText("a.m.");
    }
    ui->label_2->setNum(t->Minutes());
    ui->label_3->setNum(t->Seconds());
}

void MainWindow::on_label_5_linkActivated()
{
    if ((ui->spinBox_4->value()==0)&&(ui->spinBox_5->value()==0)&&(ui->spinBox_5->value()==0))
        Times d(0,0,0);
    ui->label_5->setNum(ui->spinBox_4->value());
    Times d(ui->spinBox_4->value(),ui->spinBox_5->value(),ui->spinBox_6->value());

    d += t;


    ui->label_5->setNum(d.Hours());
    ui->label_6->setNum(d.Minutes());
    ui->label_7->setNum(d.Seconds());

}

void MainWindow::on_pushButton_minus_clicked()
{
   Times d(ui->spinBox_7->value(),ui->spinBox_8->value(),ui->spinBox_9->value());

   d -= t;


   ui->label_8->setNum(t->Hours());
   ui->label_9->setNum(t->Minutes());
   ui->label_10->setNum(t->Seconds());

}

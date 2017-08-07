#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Ordeing System");
    ui->label->setAlignment(Qt::AlignCenter);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonBox_rejected()
{

}



void MainWindow::on_button_accepted()
{
    int sum=0;
     if (ui->checkBox_Gizz->isChecked())
     {
         sum+=60;
     }
     if (ui->checkBox_bighamburger->isChecked())
     {
         sum+=80;
     }
     if (ui->checkBox_chicken->isChecked())
     {
         sum+=70;
     }
     if (ui->checkBox_frenchfries->isChecked())
     {
         sum+=40;
     }
     if (ui->checkBox_soda->isChecked())
     {
         sum+=35;
     }
     if (ui->checkBox_cola->isChecked())
     {
         sum+=35;
     }
     if (ui->checkBox_lemonredtea->isChecked())
     {
         sum+=30;
     }
     if(ui->radioButton_cash->isChecked()||ui->radioButton_point->isChecked())
    {
         if (ui->radioButton_point->isChecked())
     {
         if(sum!=0)sum-=10;
     }
     if(ui->radioButton_cash->isChecked())
     {
         sum=sum;
     }
     ui->label_sum->setText(QString::number(sum));
    }
     else
         QMessageBox::warning(0,0,"How to pay??");

}

void MainWindow::on_button_rejected()
{
    ui->label_sum->setText(" ");
    ui->radioButton_point->setAutoExclusive(false);
    ui->radioButton_point->setChecked(false);
    ui->radioButton_cash->setAutoExclusive(false);
    ui->radioButton_cash->setChecked(false);
    ui->checkBox_bighamburger->setCheckState(Qt::Unchecked);
    ui->checkBox_Gizz->setCheckState(Qt::Unchecked);
    ui->checkBox_chicken->setCheckState(Qt::Unchecked);
    ui->checkBox_soda->setCheckState(Qt::Unchecked);
    ui->checkBox_frenchfries->setCheckState(Qt::Unchecked);
    ui->checkBox_lemonredtea->setCheckState(Qt::Unchecked);
    ui->checkBox_cola->setCheckState(Qt::Unchecked);
}

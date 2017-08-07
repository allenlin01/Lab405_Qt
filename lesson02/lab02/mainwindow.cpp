#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("BALL GAME INTRODUCE"));
    QPixmap icon("dog.png");
   /* ui->label->setFixedSize(icon.size());
    ui->label->setPixmap(icon);*/

    ui->label->setPixmap(icon);
    ui->label->setPixmap(icon.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QPixmap icon("basketball.png");
    QFile basketballfile ("basketball.txt");
    if(basketballfile.exists())
    {
        if(basketballfile.open(QIODevice::ReadOnly))
        {
            QTextStream in(&basketballfile);
            while(!in.atEnd())
            {
                QString line=in.readLine();
                ui->textEdit->append(line);
                ui->label->setPixmap(icon);
                ui->label->setPixmap(icon.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));

            }
        }
        basketballfile.close();
    }
    else
        QMessageBox::warning(0,0,"No Text file found!");
}

void MainWindow::on_pushButton_2_clicked()
{
    QPixmap icon("soccer.png");
    QFile soccerfile ("soccer.txt");
    if(soccerfile.exists())
    {
        if (soccerfile.open(QIODevice::ReadOnly))
        {
            QTextStream in(&soccerfile);
            while(!in.atEnd())
            {
                QString line=in.readLine();
                ui->textEdit->append(line);
                ui->label->setPixmap(icon);
                ui->label->setPixmap(icon.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));

            }
        }
        soccerfile.close();
    }
    else
        QMessageBox::warning(0,0,"No Text file found!");
}

void MainWindow::on_pushButton_3_clicked()
{
    QPixmap icon("volleyball.png");
    QFile volleyfile ("volleyball.txt");
    if(volleyfile.exists())
    {
        if (volleyfile.open(QIODevice::ReadOnly))
        {
            QTextStream in(&volleyfile);
            while(!in.atEnd())
            {
                QString line=in.readLine();
                ui->textEdit->append(line);
                ui->label->setPixmap(icon);
                ui->label->setPixmap(icon.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));

            }
        }
        volleyfile.close();
    }
    else
        QMessageBox::warning(0,0,"No Text file found!");
}

void MainWindow::on_pushButton_4_clicked()
{
    QPixmap icon("baseball.png");
    QFile basefile ("baseball.txt");
    if(basefile.exists())
    {
        if (basefile.open(QIODevice::ReadOnly))
        {
            QTextStream in(&basefile);
            while(!in.atEnd())
            {
                QString line=in.readLine();
                ui->textEdit->append(line);
                ui->label->setPixmap(icon);
                ui->label->setPixmap(icon.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));

            }
        }
        basefile.close();
    }
    else
        QMessageBox::warning(0,0,"No Text file found!");
}

void MainWindow::on_pushButton_5_clicked()
{
    QPixmap icon("tennis.png");
    QFile tennisfile ("tennis.txt");
    if(tennisfile.exists())
    {
        if (tennisfile.open(QIODevice::ReadOnly))
        {
            QTextStream in(&tennisfile);
            while(!in.atEnd())
            {
                QString line=in.readLine();
                ui->textEdit->append(line);
                ui->label->setPixmap(icon);
                ui->label->setPixmap(icon.scaled(ui->label->width(),ui->label->height(),Qt::KeepAspectRatio));

            }
        }
        tennisfile.close();
    }
    else
        QMessageBox::warning(0,0,"No Text file found!");

}

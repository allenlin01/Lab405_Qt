#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QString>
#include<QImage>
#include<QFileDialog>
#include<QString>
#include<QFile>
#include<QTextStream>
#include<QMessageBox>
#include <QMainWindow>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonBox_rejected();


    void on_button_accepted();

    void on_button_rejected();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    OpenDialogWindow(false)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::chooseLevel()
{
    if(OpenDialogWindow)
        return;
    Dialog *cl = new Dialog();
    OpenDialogWindow = true;
    cl->show();
    this->close();
}

void MainWindow::exitGame()
{
    exit(EXIT_SUCCESS);
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->apply = new QPushButton;
    this->setCentralWidget(this->apply);
    this->apply->setText("Anwenden");

    connect(this->apply,SIGNAL(released()),this,SLOT(processApply()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::processApply(){
    this->close();
    return;
}

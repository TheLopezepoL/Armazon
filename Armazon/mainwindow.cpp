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

<<<<<<< Updated upstream
=======

void MainWindow::on_Start_clicked(){
    QString clientes = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Clientes/Clientes");
    QString articulos = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Articulos/Articulos");
    Armazon *armazon = new Armazon();
    armazon->start(clientes,articulos,"/home/rev/Documents/GitHub/Armazon");
}
>>>>>>> Stashed changes

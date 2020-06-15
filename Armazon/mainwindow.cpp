#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QMovie>
#include <QDesktopWidget>
#include <QtMultimedia/QMediaPlayer>
#include "armazon.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //BACKGROUND----------------------------------------------------------------
    resize(QDesktopWidget().availableGeometry(this).size() * 0.90);
    QPixmap bgnd("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/bk.png");
    bgnd = bgnd.scaled(this->size(),Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background,bgnd);
    this->setPalette(palette);
    //BOTON START----------------------------------------------------------------
    QPixmap button1("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/start.png");
    QIcon start(button1);
    ui->Start->setIcon(start);
    ui->Start->setIconSize(button1.size());
    //GIF BALANCER----------------------------------------------------------------
    QMovie *balancer = new QMovie("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/balancer.gif");
    QLabel *processBalancer = new QLabel(this);
    processBalancer->setMovie(balancer);
    processBalancer->setGeometry(300,300,300,300);
    balancer->start();
    //GIF ALMACEN 1----------------------------------------------------------------
    QMovie *almacen = new QMovie("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/almacen.gif");
    QLabel *processAlmacen = new QLabel(this);
    processAlmacen->setMovie(almacen);
    processAlmacen->setGeometry(950,340,300,300);
    almacen->start();
    //GIF EMPACADOR
    QMovie *facturador = new QMovie("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/empaque.gif");
    QLabel *processFact = new QLabel(this);
    processFact->setMovie(facturador);
    processFact->setGeometry(1600,250,300,300);
    facturador->start();
    //GIF FACTURADOR
    QMovie *empacador = new QMovie("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/facturador.gif");
    QLabel *processEm = new QLabel(this);
    processEm->setMovie(empacador);
    processEm->setGeometry(1500,650,300,300);
    empacador->start();



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Start_clicked(){
    QString clientes = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Clientes/Clientes");
    QString articulos = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Articulos/Articulos");
    Armazon *armazon = new Armazon();
    armazon->preStart(clientes,articulos,"/home/rev/Documents/GitHub/Armazon");
    armazon->start();

}

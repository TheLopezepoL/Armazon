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
    armazon = new Armazon();
    x = true;
    ui->setupUi(this);
    //PALETTES------------------------------------------------------------------
    QPalette sample_palette;
    sample_palette.setColor(QPalette::WindowText, Qt::white);
    //BACKGROUND----------------------------------------------------------------
    resize(QDesktopWidget().availableGeometry(this).size() * 0.90);
    QPixmap bgnd("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/bk.png");
    bgnd = bgnd.scaled(this->size(),Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background,bgnd);
    this->setPalette(palette);
    //GIF TITLE------------------------------------------------------------------------------
    QMovie *title = new QMovie("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/title.gif");
    QLabel *titleProcess = new QLabel(this);
    titleProcess->setMovie(title);
    titleProcess->setGeometry(1200,70,300,70);
    //GIF threaddisplay------------------------------------------------------------------------------
    QMovie *threaddisplay = new QMovie("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/threaddisplay.gif");
    QLabel *displayer = new QLabel(this);
    displayer->setMovie(threaddisplay);
    displayer->setGeometry(650,500,300,70);
    threaddisplay->start();
    title->start();
    //GIF SPACESHIP------------------------------------------------------------------------------
    QMovie *ship = new QMovie("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/astro.gif");
    QLabel *shipProcess = new QLabel(this);
    shipProcess->setMovie(ship);
    shipProcess->setGeometry(1150,130,300,70);
    ship->start();
    //BOTON START----------------------------------------------------------------
    QPixmap button1("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/start.png");
    QIcon start(button1);
    ui->Start->setIcon(start);
    ui->Start->setIconSize(button1.size());
    //BOTON STOP----------------------------------------------------------------
    QPixmap button2("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/stop.png");
    QIcon stop(button2);
    ui->Stop->setIcon(stop);
    ui->Stop->setIconSize(button2.size());
    ui->Stop->setCheckable(true);
    //TEXT LABELS-----------------------------------------------------------
    ui->FACTORYA->setPalette(sample_palette);
    ui->FACTORYAB->setPalette(sample_palette);
    ui->FACTORYB->setPalette(sample_palette);
    ui->FACTORYC->setPalette(sample_palette);
    ui->BALANCER->setPalette(sample_palette);
    ui->RECRUITIER->setPalette(sample_palette);
    ui->CLIENTS->setPalette(sample_palette);
    ui->BILLER->setPalette(sample_palette);
    ui->CHECKOUT->setPalette(sample_palette);
    //BOTON DE LOADER-------------------------------------------------------------
    QPixmap button("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/button.png");
    QIcon balancerB(button);
    ui->ButtonBalancer->setIcon(balancerB);
    ui->ButtonBalancer->setIconSize(button.size());
    ui->ButtonBalancer->setCheckable(true);
    //BOTON DE FACTORIES----------------------------------------------------------
    QIcon factory(button);
    ui->ButtonFactoryA->setIcon(factory);
    ui->ButtonFactoryA->setIconSize(button.size());
    ui->ButtonFactoryA->setCheckable(true);
    ui->ButtonFactoryAB->setIcon(factory);
    ui->ButtonFactoryAB->setIconSize(button.size());
    ui->ButtonFactoryAB->setCheckable(true);
    ui->ButtonFactoryB->setIcon(factory);
    ui->ButtonFactoryB->setIconSize(button.size());
    ui->ButtonFactoryB->setCheckable(true);
    ui->ButtonFactoryC->setIcon(factory);
    ui->ButtonFactoryC->setIconSize(button.size());
    ui->ButtonFactoryC->setCheckable(true);
    //BOTON DE RECRUITER----------------------------------------------------------
    QIcon recruiter(button);
    ui->ButtonRecruiter->setIcon(recruiter);
    ui->ButtonRecruiter->setIconSize(button.size());
    ui->ButtonRecruiter->setCheckable(true);
    //BOTON DE BILLER----------------------------------------------------------
    QIcon biller(button);
    ui->ButtonBiller->setIcon(biller);
    ui->ButtonBiller->setIconSize(button.size());
    ui->ButtonBiller->setCheckable(true);
    //BOTON DE LOADER--------------------------------------------------------------
    QIcon loader(button);
    ui->ButtonLoader->setIcon(loader);
    ui->ButtonLoader->setIconSize(button.size());
    ui->ButtonLoader->setCheckable(true);
    //GIF BALANCER----------------------------------------------------------------
    QMovie *balancer = new QMovie("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/balancer.gif");
    QLabel *processBalancer = new QLabel(this);
    processBalancer->setMovie(balancer);
    processBalancer->setGeometry(300,300,300,300);
    balancer->start();
    //GIF ALMACEN 1------------------------------------------------------------------------------
    QMovie *almacen = new QMovie("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/almacen.gif");
    QLabel *processAlmacen = new QLabel(this);
    processAlmacen->setMovie(almacen);
    processAlmacen->setGeometry(950,300,300,300);
    almacen->start();
    //GIF EMPACADOR------------------------------------------------------------------------------
    QMovie *facturador = new QMovie("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/empaque.gif");
    QLabel *processFact = new QLabel(this);
    processFact->setMovie(facturador);
    processFact->setGeometry(1600,250,300,300);
    facturador->start();
    //GIF FACTURADOR------------------------------------------------------------------------------
    QMovie *empacador = new QMovie("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/facturador.gif");
    QLabel *processEm = new QLabel(this);
    processEm->setMovie(empacador);
    processEm->setGeometry(1500,650,300,300);
    empacador->start();
    //1700,900,300,150
    //TEXT BOX------------------------------------------------------------------------------
    ui->TextBox->setReadOnly(true);
    //EYE LOADER
    QPixmap eye("/home/rev/Documents/GitHub/Armazon/ImagenesGUI/eye.png");
    QIcon loaderEYE(eye);
    ui->EyeLoader->setIcon(loaderEYE);
    ui->EyeLoader->setIconSize(eye.size());
    ui->EyeLoader->setCheckable(true);
    //EYE BALANCER
    QIcon balancerEYE(eye);
    ui->EyeBalancer->setIcon(balancerEYE);
    ui->EyeBalancer->setIconSize(eye.size());
    ui->EyeBalancer->setCheckable(true);
    //EYE RECRUITER
    QIcon recruiterEYE(eye);
    ui->EyeRecruiter1->setIcon(recruiterEYE);
    ui->EyeRecruiter1->setIconSize(eye.size());
    ui->EyeRecruiter1->setCheckable(true);
    ui->EyeRecruiter_2->setIcon(recruiterEYE);
    ui->EyeRecruiter_2->setIconSize(eye.size());
    ui->EyeRecruiter_2->setCheckable(true);
    ui->EyeRecruiter_3->setIcon(recruiterEYE);
    ui->EyeRecruiter_3->setIconSize(eye.size());
    ui->EyeRecruiter_3->setCheckable(true);
    ui->EyeRecruiter_4->setIcon(recruiterEYE);
    ui->EyeRecruiter_4->setIconSize(eye.size());
    ui->EyeRecruiter_4->setCheckable(true);
    ui->EyeRecruiter_5->setIcon(recruiterEYE);
    ui->EyeRecruiter_5->setIconSize(eye.size());
    ui->EyeRecruiter_5->setCheckable(true);
    ui->EyeRecruiter_6->setIcon(recruiterEYE);
    ui->EyeRecruiter_6->setIconSize(eye.size());
    ui->EyeRecruiter_6->setCheckable(true);
    //EYE BILLER
    QIcon billerEYE(eye);
    ui->EyeBiller->setIcon(billerEYE);
    ui->EyeBiller->setIconSize(eye.size());
    ui->EyeBiller->setCheckable(true);
    //EYE FACTORYA
    QIcon FactA(eye);
    ui->EyeFactoryA->setIcon(FactA);
    ui->EyeFactoryA->setIconSize(eye.size());
    ui->EyeFactoryA->setCheckable(true);
    //EYE FACTORYB
    QIcon FactB(eye);
    ui->EyeFactoryB->setIcon(FactB);
    ui->EyeFactoryB->setIconSize(eye.size());
    ui->EyeFactoryB->setCheckable(true);
    //EYE FACTORYC
    QIcon FactC(eye);
    ui->EyeFactoryC->setIcon(FactC);
    ui->EyeFactoryC->setIconSize(eye.size());
    ui->EyeFactoryC->setCheckable(true);
    //EYE FACTORYAB
    QIcon FactAB(eye);
    ui->EyeFactoryAB->setIcon(FactAB);
    ui->EyeFactoryAB->setIconSize(eye.size());
    ui->EyeFactoryAB->setCheckable(true);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Start_clicked(){

    if (x) {
        //STRINGS DE CLIENTES/ARTICULOS
        QString clientes = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Clientes/Clientes");
        QString articulos = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Articulos/Articulos");
        //ARMAZON STRUCT
        this->armazon->preStart(clientes,articulos,"/home/rev/Documents/GitHub/Armazon");
        if (armazon->clientes == nullptr){
            ui->TextBox->setText("EL ARCHIVO DE CLIENTES NO ES VALIDO.DEBE ARREGLARLO");
            armazon->pauseEverything();

        }
        else
            if (armazon->articulos == nullptr){
                ui->TextBox->setText("EL ARCHIVO DE ARTICULOS NO ES VALIDO. DEBE ARREGLARLO");
                armazon->pauseEverything();
            }

        this->armazon->run();
        x = false;
    }


}

//STOP TODO
void MainWindow::on_Stop_clicked(bool checked)
{
    if(!x){
        if (checked){
            this->armazon->loader->pauser();
            this->armazon->balancer->Pause();
            this->armazon->factoryA->Pause();
            this->armazon->factoryB->Pause();
            this->armazon->factoryC->Pause();
            this->armazon->factoryE->Pause();
            this->armazon->biller->Pause();
            this->armazon->recrutier1->Pause();
            this->armazon->recrutier2->Pause();
            this->armazon->recrutier3->Pause();
            this->armazon->recrutier4->Pause();
            this->armazon->recrutier5->Pause();
            this->armazon->recrutier6->Pause();
        }
        else{
            this->armazon->loader->unpause();
            this->armazon->balancer->Unpause();
            this->armazon->factoryA->Unpause();
            this->armazon->factoryB->Unpause();
            this->armazon->factoryC->Unpause();
            this->armazon->factoryE->Unpause();
            this->armazon->biller->Unpause();
            this->armazon->recrutier1->Unpause();
            this->armazon->recrutier2->Unpause();
            this->armazon->recrutier3->Unpause();
            this->armazon->recrutier4->Unpause();
            this->armazon->recrutier5->Unpause();
            this->armazon->recrutier6->Unpause();

        }
    }
}
//BOTON BALANCER PAUSE
void MainWindow::on_ButtonBalancer_clicked(bool checked)
{
    if(!x){
        if (checked){
            this->armazon->balancer->Pause();
            qDebug() << "PAUSADO EL BALANCER";
        }
        else{
            this->armazon->balancer->Unpause();
            qDebug() << "CORRIENDO EL BALANCER";
        }
    }
}
//BOTON FACTORYAB PAUSE
void MainWindow::on_ButtonFactoryAB_clicked(bool checked)
{
    if(!x){
        if (checked){
            this->armazon->factoryE->Pause();
            qDebug() << "PAUSADO EL FactAB";
        }
        else{
            this->armazon->factoryE->Unpause();
            qDebug() << "CORRIENDO EL FactAB";
        }
    }
}
//BOTON FACTORYA PAUSE
void MainWindow::on_ButtonFactoryA_clicked(bool checked)
{
    if(!x){
        if (checked){
            this->armazon->factoryA->Pause();
            qDebug() << "PAUSADO EL FactA";
        }
        else{
            this->armazon->factoryA->Unpause();
            qDebug() << "CORRIENDO EL FactA";
        }
    }
}
//BOTON FACTORYB PAUSE
void MainWindow::on_ButtonFactoryB_clicked(bool checked)
{
    if(!x){
        if (checked){
            this->armazon->factoryB->Pause();
            qDebug() << "PAUSADO EL FactB";
        }
        else{
            this->armazon->factoryB->Unpause();
            qDebug() << "CORRIENDO EL FactB";
        }
    }
}
//BOTON FACTORYC PAUSE

void MainWindow::on_ButtonFactoryC_clicked(bool checked)
{
    if(!x){
        if (checked){
            this->armazon->factoryC->Pause();
            qDebug() << "PAUSADO EL FactC";
        }
        else{
            this->armazon->factoryC-> Unpause();
            qDebug() << "CORRIENDO EL FactC";
        }
    }
}

//BOTON LOADER PAUSE
void MainWindow::on_ButtonLoader_clicked(bool checked)
{
    if(!x){
        if (checked){
            this->armazon->loader->pauser();
            qDebug() << "PAUSADO EL LOADER";
        }
        else{
            this->armazon->loader->unpause();
            qDebug() << "CORRIENDO EL LOADER";
        }
    }
}
//BOTON RECRUITER PAUSE
void MainWindow::on_ButtonRecruiter_clicked(bool checked)
{
    if(!x){
        if (checked){
            this->armazon->recrutier1->Pause();
            this->armazon->recrutier2->Pause();
            this->armazon->recrutier3->Pause();
            this->armazon->recrutier4->Pause();
            this->armazon->recrutier5->Pause();
            this->armazon->recrutier6->Pause();
            qDebug() << "RECRUITER PAUSED";
        }
        else {
            this->armazon->recrutier1->Unpause();
            this->armazon->recrutier2->Unpause();
            this->armazon->recrutier3->Unpause();
            this->armazon->recrutier4->Unpause();
            this->armazon->recrutier5->Unpause();
            this->armazon->recrutier6->Unpause();
            qDebug() << "RECRUITER UNPAUSED";
        }
    }
}

//BOTON BILLER PAUSE
void MainWindow::on_ButtonBiller_clicked(bool checked)
{
    if(!x){
        if (checked){
            this->armazon->biller->Pause();
        }
        else {
            this->armazon->biller->Unpause();
        }
    }
}

//----------------------------EYES---------------------------------

// EYE DEL LOADER
void MainWindow::on_EyeLoader_clicked(bool checked)
{
    if(!x){
        if (checked){
            ui->TextBox->setText(armazon->loader->message);
        }
        else {
            ui->TextBox->clear();
        }
    }
}

// EYE DEL BALANCER
void MainWindow::on_EyeBalancer_clicked(bool checked)
{
    if(!x){
        if (checked){
            ui->TextBox->setText(armazon->balancer->message);
        }
        else {
            ui->TextBox->clear();
        }
    }
}
//EYE DEL FACTORY A
void MainWindow::on_EyeFactoryA_clicked(bool checked)
{
    if(!x){
        if (checked){
            ui->TextBox->setText(armazon->factoryA->message);
        }
        else {
            ui->TextBox->clear();
        }
    }
}
//EYE DEL FACTORY B
void MainWindow::on_EyeFactoryB_clicked(bool checked)
{
    if(!x){
        if (checked){
            ui->TextBox->setText(armazon->factoryB->message);
        }
        else {
            ui->TextBox->clear();
        }
    }
}

//EYE DEL FACTORY C

void MainWindow::on_EyeFactoryC_clicked(bool checked)
{
    if(!x){
        if (checked){
            ui->TextBox->setText(armazon->factoryC->message);
        }
        else {
            ui->TextBox->clear();
        }
    }
}
//EYE FACTORY AB
void MainWindow::on_EyeFactoryAB_clicked(bool checked)
{
    if(!x){
        if (checked){
            ui->TextBox->setText(armazon->factoryE->message);
        }
        else {
            ui->TextBox->clear();
        }
    }
}


//EYE BILLER
void MainWindow::on_EyeBiller_clicked(bool checked)
{
    if(!x){
        if (checked){
            ui->TextBox->setText(armazon->biller->message);
        }
        else {
            ui->TextBox->clear();
        }
    }
}

// EYE RECRUITERS
void MainWindow::on_EyeRecruiter_6_clicked(bool checked)
{
    if(!x){
        if (checked){
            ui->TextBox->setText(armazon->recrutier6->message);
        }
        else {
            ui->TextBox->clear();
        }
    }
}

void MainWindow::on_EyeRecruiter_5_clicked(bool checked)
{
    if(!x){
        if (checked){
            ui->TextBox->setText(armazon->recrutier5->message);
        }
        else {
            ui->TextBox->clear();
        }
    }
}

void MainWindow::on_EyeRecruiter_4_clicked(bool checked)
{
    if(!x){
        if (checked){
            ui->TextBox->setText(armazon->recrutier4->message);
        }
        else {
            ui->TextBox->clear();
        }
    }
}

void MainWindow::on_EyeRecruiter_3_clicked(bool checked)
{
    if(!x){
        if (checked){
            ui->TextBox->setText(armazon->recrutier3->message);
        }
        else {
            ui->TextBox->clear();
        }
    }
}

void MainWindow::on_EyeRecruiter_2_clicked(bool checked)
{
    if(!x){
        if (checked){
            ui->TextBox->setText(armazon->recrutier2->message);
        }
        else {
            ui->TextBox->clear();
        }
    }
}

void MainWindow::on_EyeRecruiter1_clicked(bool checked)
{
    if(!x){
        if (checked){
            ui->TextBox->setText(armazon->recrutier1->message);
        }
        else {
            ui->TextBox->clear();
        }
    }
}

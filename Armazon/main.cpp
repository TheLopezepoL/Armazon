#include "mainwindow.h"

#include <QApplication>
#include "armazon.h"
#include "filemanager.h"
#include "structcreator.h"
#include "balancer.h"
#include "threadloader.h"

int main(int argc, char *argv[]){
    /*
    QString clientes = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Clientes/Clientes");
    QString articulos = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Articulos/Articulos");
    SimpleList *clients = StructCreator::clientListCreator(clientes);
    ArticleList *art = StructCreator::articleListCreator(articulos,"/home/rev/Documents/GitHub/Armazon");

    QMutex *m0 = new QMutex();
    QMutex *m1 = new QMutex();
    QMutex *m2 = new QMutex();

    OrderQueue *cola = new OrderQueue(m0);
    OrderQueue *alisto = new OrderQueue(m1);
    OrderQueue *fabricador = new OrderQueue(m2);

    ThreadLoader *loader = new ThreadLoader();
    Balancer *balancer = new Balancer();

    loader->__init__("/home/rev/Documents/GitHub/Armazon",clients,art,cola);
    balancer->__init__(cola,fabricador,alisto,art);

    loader->start();
    balancer->start();
*/
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

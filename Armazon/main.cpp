#include "mainwindow.h"

#include <QApplication>
#include "filemanager.h"
#include "structcreator.h"
int main(int argc, char *argv[])
{
<<<<<<< Updated upstream
    //CREADOR LISTA CLIENTES
    QString clientes = FileManager::reader("/home/rev/Documents/GitHub/Armazon/Clientes/Clientes");
    qDebug() <<"----------------LISTA CLIENTES----------------";;
    StructCreator *creatorClients = new StructCreator(clientes);
    creatorClients->clientListCreator(clientes);
    //CREADOR LISTA ARTICULOS EN ALMACEN
    QString articulos = FileManager::reader("/home/rev/Documents/GitHub/Armazon/Almacen/Articulos");
    qDebug() << "----------------LISTA ARTICULOS----------------";
    StructCreator *creatorArticulos = new StructCreator(articulos);
    creatorArticulos->articleListCreator(articulos);
    //SEE DIRECTORY
    //qDebug() << FileManager::seeDirectory("/home/rev/Documents/GitHub/Armazon/Pedidos");
    //FILE RELOCATOR
    //FileManager::fileRelocater("/home/rev/PROGRA1/Pedidos","/home/rev/PROGRA1/Invalidos","prueba.txt");
=======

    //LISTA ARTICULOS
    QString articulos = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Articulos/Articulos");
    qDebug() <<"-------------LISTA ARTICULOS------------- ";
    ArticleList *articulos_ =  StructCreator::articleListCreator(articulos,"/home/rev/Documents/GitHub/Armazon");
    articulos_->printList();

    //LISTA CLIENTES
    QString clientes = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Clientes/Clientes");
    qDebug() <<"-------------LISTA Clientes-------------";
    SimpleList *clientes_ = StructCreator::clientListCreator(clientes);
    clientes_->printList();

    qDebug() <<"-------------COLA PEDIDOS-------------";
    OrderQueue *cola = StructCreator::orderQueueCreator("/home/rev/Documents/GitHub/Armazon",FileManager::seeDirectory("/home/rev/Documents/GitHub/Armazon/Pedidos"),clientes_);
    cola->imprimir();

>>>>>>> Stashed changes
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

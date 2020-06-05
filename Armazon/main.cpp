#include "mainwindow.h"

#include <QApplication>
#include "filemanager.h"
#include "structcreator.h"
int main(int argc, char *argv[])
{
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
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

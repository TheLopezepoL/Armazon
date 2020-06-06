#include "mainwindow.h"

#include <QApplication>
#include "filemanager.h"
#include "structcreator.h"
int main(int argc, char *argv[])
{
    //FILE MANAGER
    QString hola = FileManager::readFile("/home/thelopezepol/Escritorio/C++/Armazon/Armazon/Articulos/Articulos");
    qDebug() << FileManager::splitFile(hola);
    //LISTA ARTICULOS
    QString articulos = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Articulos/Articulos");
    qDebug() <<"    LISTA ARTICULOS ";
    qDebug() << articulos;
    StructCreator *listaArt = new StructCreator(articulos);
    listaArt->articleListCreator(articulos);
    //LISTA CLIENTES
    QString clientes = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Clientes/Clientes");
    qDebug() <<"    LISTA Clientes ";
    qDebug() << clientes;
    StructCreator *listaCli = new StructCreator(clientes);
    listaCli->clientListCreator(clientes);
    //SEE DIRECTORY
    //qDebug() << FileManager::seeDirectory("/home/rev/Documents/GitHub/Armazon/Pedidos");
    //FILE RELOCATOR
    //FileManager::fileRelocater("/home/rev/PROGRA1/Pedidos","/home/rev/PROGRA1/Invalidos","prueba.txt");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

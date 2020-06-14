#include "mainwindow.h"

#include <QApplication>
#include "armazon.h"
#include "filemanager.h"
#include "structcreator.h"
//#include "balancer.h"
#include "threadloader.h"

int main(int argc, char *argv[])
{

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
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

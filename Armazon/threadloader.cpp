#include "threadloader.h"


void ThreadLoader::__init__(QString path_, SimpleList *clientes, ArticleList *articulos,OrderQueue *cola){
    runner = true;
    this->path = path_;
    this->clients = clientes;
    this->articles = articulos;
    this->cola =cola;
}

void ThreadLoader::kill(){
    runner = false;
}

ThreadLoader::ThreadLoader(){}

void ThreadLoader::run(){
    int i = 0;
    while (runner) {
        QStringList files = FileManager::seeDirectory(path+"/Pedidos");
        if  (files.length()>0){
            QString file = FileManager::readFile(path+"/Pedidos/"+files[i]);
            if (Checker::orderChecker(StructCreator::orderString(file),clients,articles,path+"/Pedidos/"+files[i])){
                qDebug() << "Pedido Invalido Trasladado"<<Qt::endl;
                FileManager::fileRelocater(path+"/Pedidos",path+"/Invalidos",files[i]);
            }
            else if (!Checker::orderChecker(StructCreator::orderString(file),clients,articles,path+"/Pedidos/"+files[i])){
                cola->mutex->lock();
                qDebug() << "Pedido Agregado"<<Qt::endl;
                StructCreator::orderQueueCreator(file,clients,cola);
                cola->imprimir();
                cola->mutex->unlock();
                FileManager::fileRelocater(path+"/Pedidos",path+"/Procesados",files[i]);
            }
        }
        sleep(1);
    }
}

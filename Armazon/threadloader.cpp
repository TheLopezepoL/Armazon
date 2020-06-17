#include "threadloader.h"


void ThreadLoader::__init__(QString path_, SimpleList *clientes, ArticleList *articulos,OrderQueue *cola){
    pause = true;
    runner = true;
    this->path = path_;
    this->clients = clientes;
    this->articles = articulos;
    this->cola =cola;
    this->message = "";
}

void ThreadLoader::pauser(){
    pause = false;
}
void ThreadLoader::unpause(){
    pause = true;
}

ThreadLoader::ThreadLoader(){}

void ThreadLoader::run(){
    int i = 0;
    while (runner) {
        while (pause) {
            //qDebug() << "CORRO";
            QStringList files = FileManager::seeDirectory(path+"/Pedidos");
            if  (files.length()>0){
                QString file = FileManager::readFile(path+"/Pedidos/"+files[i]);
                if (Checker::orderChecker(StructCreator::orderString(file),clients,articles,path+"/Pedidos/"+files[i])){
                    this->message.append("El pedido ID: "+ QString::number(StructCreator::orderString(file)->orderNum) +" es invalido"+"\n");
                    //qDebug() << "Pedido Invalido Trasladado"<<Qt::endl;
                    FileManager::fileRelocater(path+"/Pedidos",path+"/Invalidos",files[i]);
                }
                else if (!Checker::orderChecker(StructCreator::orderString(file),clients,articles,path+"/Pedidos/"+files[i])){
                    cola->mutex->lock();
                    this->message.append("El pedido ID: " +QString::number(StructCreator::orderString(file)->orderNum) +" ha sido trasladado a la primera cola"+"\n");
                    //qDebug() << "Pedido Agregado"<<Qt::endl;
                    StructCreator::orderQueueCreator(file,clients,cola);
                    //cola->imprimir();
                    cola->mutex->unlock();
                    FileManager::fileRelocater(path+"/Pedidos",path+"/Procesados",files[i]);
                }
            }
            sleep(1);
        }
    }
}

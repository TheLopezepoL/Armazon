#include "threadloader.h"


void ThreadLoader::__init__(QString path_, SimpleList *clientes, ArticleList *articulos){
    runner = true;
    this->path = path_;
    this->files = FileManager::seeDirectory(path+"/Pedidos");
    this->clients = clientes;
    this->articles = articulos;
}

void ThreadLoader::kill(){
    runner = false;
}

ThreadLoader::ThreadLoader(){}

void ThreadLoader::run(){
    int i = 0;
    while (true) {
        QString file = FileManager::readFile(path+"/Pedidos/"+files[i]);
        if (files.length()-1 <= i)
            i=0;
        else if (Checker::orderChecker(StructCreator::orderString(file),clients,articles,path+"/Pedidos/"+files[i])){
            FileManager::fileRelocater(path+"/Pedidos",path+"/Invalidos",files[i]);
        }
        ++i;

    }
}

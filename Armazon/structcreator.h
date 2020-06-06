#ifndef STRUCTCREATOR_H
#define STRUCTCREATOR_H

#include "article.h"
#include "articlelist.h"
#include "order.h"
#include "orderqueue.h"
#include "clientlist.h"

struct StructCreator{
    //Attributes (Listas Dadas/Orden/Clientes/Articulos)
    QString expresion;

    //Constructors
    StructCreator (QString _data){
        expresion = _data;
    }

    //Methods
    //STRING SEPARATOR
    Request *requestString(QString expresion);
    Order *orderString(QString expresion);
    Client *clientString(QString expresion);
    Article *articleString(QString expresion);
    //CATEGORY DETERMINER
    Category determinerC(QString category);
    //STRUCTS BASICOS
    Article *articleCreator(QString idArticle, QString quantity, QString time, QString category, QString location);
    //Creador de Cliente
    Client * clientCreator(QString id, QString name, QString priority);
    //Creador de Pedido
    Order *orderCreator(QString idClient, QString idOrder, ArticleList articleListOrder);
    //CREADOR DE LISTAS
    ArticleList *articleListCreator();
    SimpleList *clientListCreator();
    OrderQueue *orderQueueCreator();
};

#endif // STRUCTCREATOR_H

#ifndef STRUCTCREATOR_H
#define STRUCTCREATOR_H

#include "article.h"
#include "articlelist.h"
#include "order.h"
#include "clientlist.h"

struct StructCreator{
    //Attributes (Listas Dadas/Orden/Clientes/Articulos)
    QString data;

    //Constructors
    StructCreator (QString _data){
        data = _data;
    }

    //Methods
    //STRING SEPARATOR
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
    ArticleList *articleListCreator(QString expresionArticles);
    SimpleList *clientListCreator(QString expresionClients);
    //Orderqueue(?)
};

#endif // STRUCTCREATOR_H

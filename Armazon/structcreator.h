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
    static Request *requestString(QString expresion);
    static Order *orderString(QString expresion);
    static Client *clientString(QString expresion);
    static Article *articleString(QString expresion);
    //CATEGORY DETERMINER
    static Category determinerC(QString category);
    //STRUCTS BASICOS
    static Article *articleCreator(QString idArticle, QString quantity, QString time, QString category, QString location);
    //Creador de Cliente
    static Client * clientCreator(QString id, QString name, QString priority);
    //Creador de Pedido
    static Order *orderCreator(QString idClient, QString idOrder, ArticleList articleListOrder);
    //CREADOR DE LISTAS
    static ArticleList *articleListCreator(QString _data);
    static SimpleList *clientListCreator(QString _data);
    static OrderQueue *orderQueueCreator(QStringList pedidos);
};

#endif // STRUCTCREATOR_H

#ifndef STRUCTCREATOR_H
#define STRUCTCREATOR_H

#include "article.h"
#include "articlelist.h"
#include "order.h"
#include "orderqueue.h"
#include "clientlist.h"

struct StructCreator{
    //Attributes (Listas Dadas/Orden/Clientes/Articulos)

    //Constructors
    StructCreator (){
    }
    //Methods
    //ORDENAMIENTO DE COLA PEDIDO POR PRIORIDAD
    static OrderQueue *orderQueueArranger(OrderQueue *cola);
    //STRING SEPARATOR
    static Request *requestString(QString expresion);
    static Order *orderString(QString expresion);
    static Client *clientString(QString expresion);
    static Article *articleString(QStringList expresion);
    //CATEGORY DETERMINER
    static Category determinerC(QString category);
    //STRUCTS BASICOS
    static Article *articleCreator(QString idArticle, QString quantity, QString time, QString category, QString location);
    //Creador de Cliente
    static Client * clientCreator(QString id, QString name, QString priority);
    //Creador de Pedido
    static Order *orderCreator(QString idClient, QString idOrder, ArticleList articleListOrder);
    //CREADOR DE LISTAS
    static ArticleList *articleListCreator(QString _data,QString path, QMutex *m);
    static SimpleList *clientListCreator(QString _data,QMutex *mC);
    static void orderQueueCreator(QString pedido,SimpleList *clientes, OrderQueue *cola);
    //CREADOR TXT DE ARTICULOS
    static void txtArticle(ArticleList *articulos);
};

#endif // STRUCTCREATOR_H

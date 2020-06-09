#ifndef CHECKER_H
#define CHECKER_H

#include "clientlist.h"
#include "articlelist.h"
#include "order.h"
#include "request.h"

struct Checker{

    //STATIC METHODS
    static bool orderChecker(Order *order, SimpleList *clientes,ArticleList *articulos,QString path);
    static bool requestChecker(RequestList *articulosPedido, ArticleList *articulos, QString path);
    static bool articlesChecker(ArticleList *articulos);
};

#endif // CHECKER_H

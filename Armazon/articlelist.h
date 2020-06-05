#ifndef ARTICLELIST_H
#define ARTICLELIST_H
#include "article.h"


//NODO DE LA LISTA SIMPLE DE ARTICULOS
struct NodeArticle {
    Article* data;
    NodeArticle* nxt;
    NodeArticle* prv;

    NodeArticle();
};


//ESTRUCTURA DE LA LISTA SIMPLE DE ARTICULOS

struct ArticleList {
    //Attributes
    NodeArticle* first;
    //Constructor
    ArticleList();

    //Methods
    void append(Article* data);
    NodeArticle* deleteIndex(int index);
};

#endif // ARTICLELIST_H

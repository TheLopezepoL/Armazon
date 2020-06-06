#ifndef ARTICLELIST_H
#define ARTICLELIST_H
#include "article.h"


//NODO DE LA LISTA SIMPLE DE ARTICULOS
struct NodeArticle {
    Article* data;
    NodeArticle* nxt;
    NodeArticle* prv;

    NodeArticle(Article* _data){
        data = _data;
        nxt = prv = nullptr;
    }

    //Methods
    //Compara un data recibido con el del mismo nodo
    bool compare(QString data){
            return this->data->id == data;
        }
};


//ESTRUCTURA DE LA LISTA SIMPLE DE ARTICULOS

struct ArticleList {
    //Attributes
    NodeArticle* first;
    //Constructor
    ArticleList(){
        first = nullptr;
    };

    //Methods
    void append(Article* data);
    NodeArticle* searchArticle(QString id);
    void printList();
};

#endif // ARTICLELIST_H

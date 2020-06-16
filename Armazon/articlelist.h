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
    NodeArticle* first,*last;
    QMutex* mutex;

    //Constructor
    ArticleList(){
        first = last = nullptr;
    }

    ArticleList(QMutex* mutex){
        first = last = nullptr;
        this->mutex = mutex;
    };

    //Methods
    bool isEmpty();
    void append(Article* data);
    void popLast();
    NodeArticle* searchArticle(QString id);
    int timesArticle(QString id);
    void printList();
    int length();
};

#endif // ARTICLELIST_H

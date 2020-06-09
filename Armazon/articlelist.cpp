#include "articlelist.h"

#include <QDebug>

/*
 * INSERTAR AL INICIO UN NODO ARTCULO EN LA LISTA DE ARTICULOS
 * E: Un nodo articulo
 * S: No tiene
 * D: Agrega un nodo articulo (con el articulo) en la lista doblemente enlazada de articulos
 */
void ArticleList::append(Article *article){

    if(first == nullptr)
        first = new NodeArticle(article);
    else{
        NodeArticle *nuevo = new NodeArticle(article);
        first->prv = nuevo;
        first->prv->nxt = first;
        first = first->prv;
    }
}


/*
 * BUSCARDOR ARTICULO
 * E: Un string con el codigo del articulo
 * S: Un puntero a nodo articulo, retorna null si no existe
 * D: Se encarga de buscar un articulo por su codigo, y retorna un puntero al mismo. Si no lo encuentra retorna nulo
 */

NodeArticle * ArticleList::searchArticle(QString idArticulo){
    NodeArticle *tmp = first;
    while(tmp != nullptr){
        //tmp->data->imprimir();
         if (tmp->compare(idArticulo))
            return tmp;
        tmp = tmp->nxt;
    }
    //qDebug () << "EL ARTICULO "<< idArticulo <<" NO FUE ENCONTRADO";
    return nullptr;
}




/*
 * IMPRIMIR
 * E: No tiene
 * S: No tiene
 * D: Imprime los productos de la lista
 */
void ArticleList::printList(){
    NodeArticle *tmp = first;
    while (tmp != nullptr){
        tmp->data->imprimir();
        tmp = tmp->nxt;
    }
}

/*LENTGH
 * E:
 * S:
 * D:
 */
int ArticleList::length(){
    int i = 0;
    NodeArticle *tmp = first;
    while (tmp != nullptr) {
        ++i;
        tmp = tmp->nxt;
    }
    return i;
}

#include "clientlist.h"
#include <QDebug>
/* INSERTAR UN CLIENTE EN LISTA SIMPLE
 * E: Un puntero a cliente
 * S: No tiene
 * D: Agrega un puntero a cliente en la lista simple de punteros de clientes
 */
void SimpleList::append(Client *data){
    if (first == nullptr){
        first = new NodeClient(data);
    }else{
        NodeClient *nuevo = new NodeClient(data);
        nuevo->nxt =first;
        first = nuevo;
    }
}

/* BUSCAR CLIENTE EN LISTA SIMPLE
 * E: Un QString (el id)
 * S: Un puntero node a cliente
 * D: Busca un cliente en la lista simple. Si retorna nulo, no existe
 */

NodeClient * SimpleList::searchClient(QString idClient){
    NodeClient *tmp = first;
    while(tmp != nullptr){
         if (tmp->compare(idClient))
            return tmp;
        tmp = tmp->nxt;
    }
    //qDebug() << "CLIENTE NO ENCONTRADO";
    return nullptr;
}

/*
 * IMPRIMIR
 * E: No tiene
 * S: No tiene
 * D: Imprime los productos de la lista
 */
void SimpleList::printList(){
    NodeClient *tmp = first;
    while (tmp != nullptr){
        tmp->data->imprimir();
        tmp = tmp->nxt;
    }
}



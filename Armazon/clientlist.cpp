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
        qDebug() << "Client" << tmp->data->id;
        tmp = tmp->nxt;
    }
}



#include <QDebug>

/*
 * INSERTAR AL INICIO UN NODO CLIENTE EN LA LISTA DE CLIENTES
 * E: Un nodo cliente
 * S: No tiene
 * D: Agrega un nodo cliente (con el cliente) en la lista simple de clientes
 */
void SimpleList::append(Client *data){

    if(first == nullptr)
        first = new NodeClient(data);
    else{
        NodeClient *nuevo = new NodeClient(data);
        nuevo->nxt = first;
        first = nuevo;
    }
}


/*
 * BUSCARDOR CLIENTES
 * E: Un string con el codigo del cliente
 * S: Un puntero a nodo cliente, retorna null si no existe
 * D: Se encarga de buscar un cliente por su codigo, y retorna un puntero al mismo. Si no lo encuentra retorna nulo
 */

NodeClient * SimpleList::searchClient(QString idClient){
    NodeClient *tmp = first;
    while(tmp != nullptr){
         if (tmp->compare(idClient))
            return tmp;
        tmp = tmp->nxt;
    }
    return nullptr;
}




/*
 * IMPRIMIR
 * E: No tiene
 * S: No tiene
 * D: Imprime los clientes de la lista
 */
void SimpleList::printList(){
    NodeClient *tmp = first;
    while (tmp != nullptr){
        tmp->data->imprimir();
        tmp = tmp->nxt;
    }
}

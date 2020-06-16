#include "requestqueue.h"

/* IMPRIMIR DE NODE REQUEST
 * E: No tiene
 * S: No tiene
 * D: Imprime cada node
 */
void NodeRequest::imprimir(){
    this->data->imprimir();
}

/* IMPRIMIR PEDIDO
 * * E: No tiene
 * S: No tiene
 * D: Imprime la info del pedido
 */
void RequestList::imprimir(){
    NodeRequest *tmp = first;

    while (tmp != nullptr) {
        tmp->imprimir();
        tmp = tmp->nxt;
    }
}

int RequestList::size(){
    int cont = 0;
    NodeRequest* ptr = this->first;
    while(ptr != nullptr){
        cont++;
        ptr = ptr->nxt;
    }
    return cont;
}

/* INSERTAR NODO EN LA LISTA DE ARTICULOS
 * E: Un REQUEST
 * S: No tiene
 * D: Agrega un request en la lista de requests
 */
void RequestList::append(Request *data){
    if (first == nullptr){
        first = new NodeRequest(data);
        last =first;
    }
    else{
        NodeRequest *nuevo = new NodeRequest(data);
        nuevo->nxt =first;
        first->prv = nuevo;
        first = nuevo;
    }
}

/* BUSCAR REQUEST POR ID
 * E: Un qstring
 * S: Un node request
 * D: Busca un request en la lista de requests. Si retorna nulo no existe
 */
NodeRequest *RequestList::search(QString id){
    NodeRequest *tmp = first;
    while(tmp!=nullptr){
        if (tmp->data->article == id){
            return tmp;
        }
        tmp = tmp->nxt;
    }
    return nullptr;
}

#include "orderqueue.h"
#include <QDebug>
/*IMPRIMIR NODE*/
void NodeOrder::imprimir(){
    this->data->imprimir();
}

/* IMPRIMIR COLA
 * E: No tiene
 * S: No tiene
 * D: Imprime la cola
 */
void OrderQueue::imprimir(){
    qDebug() << "   FRONT";
    NodeOrder *tmp = front;
    while (tmp != nullptr) {
        tmp->imprimir();
        tmp = tmp->nxt;
    }
}
/*RETURN FRONT
 * E: No tiene
 * S: El frente de la pila
 * D: Retorna el frente de la pila
 */
NodeOrder* OrderQueue::returnFront(){
    return front;
}

/* AGREGAR UN PEDIDO A LA COLA
 * E: Un puntero a pedido
 * S: No tiene
 * D: Agrega un pedido a la cola de pedidos
 */
void OrderQueue::append(Order *data, bool side){
    if (isEmpty())
        front = new NodeOrder(data);
    else {
        if(side)
            push(data);
        else{
        NodeOrder *actual = front;
        while (actual->nxt != nullptr){
            actual = actual->nxt;
        }
        NodeOrder *nuevo = new NodeOrder(data);
        actual->nxt = nuevo;
        }
    }
}

/* VERIFICA SI LA COLA ESTA VACIA
 * E: No tiene
 * S: Un booleano
 * D: Verifica si esta vacia, si esta vacia manda un true.
 */

bool OrderQueue::isEmpty(){
    if (front == nullptr)
        return true;
    else
        return false;
}

/* ELIMINA PRIMER ELEMENTO DE LA COLA
 * E: No tiene
 * S: Un nodo de pedido
 * D: Elimina el frente de la cola. NO se libera memoria
 */

NodeOrder* OrderQueue::pop(){
    if (isEmpty())
        return nullptr;
    else {
        NodeOrder *borrado = front;
        front = front->nxt;
        borrado->nxt = nullptr;
        return borrado;
    }
}


/*  PUSH DE PILA
 * E:
 * S:
 * D:
 */
void OrderQueue::push(Order *data){
    // si no hay elementos
    NodeOrder *nuevo = new NodeOrder(data);
    // a lo que apunta pN ahora es el segundo
    // por eso, nuevo->siguiente es pN
    nuevo->nxt = front;
    // ahora devolvemos pN a que apunte al nuevo
    // y primero de las listaS
    front = nuevo;
    // el puntero nuevo deja de existir, no se libera
    // memoria porque se pierde la info
}

int OrderQueue::size(){
    int cont = 0;
    NodeOrder* ptr = this->front;
    while(ptr != nullptr){
        cont++;
        ptr = ptr->nxt;
    }
    return cont;
}

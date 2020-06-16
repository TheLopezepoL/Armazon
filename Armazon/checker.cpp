#include "checker.h"
#include "filemanager.h"
#include <QDebug>

/* Request Checker
 * E: Un puntero a articulos del pedido (requestList)
 * S: Un booleano. Si retorna TRUE el pedido esta malo.
 * D: Verifica si todos los articulos del pedido existen en el almacen
 */
bool Checker::requestChecker(RequestList *articulosPedido, ArticleList *articulos, QString path){
    NodeRequest *ptr = articulosPedido->first;
    while (ptr != nullptr){
        if (articulos->searchArticle(ptr->data->article) == nullptr){
            FileManager::writeFileA("HAY UN ARTICULO QUE NO EXISTE EN EL ALMACEN",path);
            return true;
        }
        else if ((ptr->data->total<0)) {
            FileManager::writeFileA("EL PEDIDO TIENE UNA CANTIDAD MENOR A 0 EN ALGUNO DE SUS ARTICULOS",path);
            return true;
        }
        ptr = ptr->nxt;
    }
    return false;
}

/* Order Checker
 * E: Un puntero al cliente del pedido
 * S: Un booleano. SI RETORNA TRUE ESTA MALO
 * D: Verifica si todos los articulos del pedido existen en el almacen
 */

bool Checker::orderChecker(Order *order, SimpleList *clientes,ArticleList *articulos, QString path){
    if ((clientes->searchClient(order->clientID) == nullptr)){
        FileManager::writeFileA("EL CLIENTE NO EXISTE EN LA LISTA",path);
        return true;
    }else if(requestChecker(order->requestQueue,articulos,path)){
        return true;
    }else
        return false;

}

/* ARCHIVO ARTICULOS CHECKER
 * E:
 * S:
 * D:
 */
bool Checker::articlesChecker(ArticleList *articulos){
    NodeArticle *tmp = articulos->first;
    while (tmp != nullptr) {
        if (articulos->timesArticle(tmp->data->id) > 1)
            return true;
        tmp = tmp->nxt;
    }
    return false;
}

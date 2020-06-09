#include "structcreator.h"
#include "filemanager.h"
#include "checker.h"
#include <QDebug>

//DETERMINA LA CATEGORIA DEL PRODUCTO
Category StructCreator::determinerC(QString category){

    if (category == "A"){
        return A;
    }else if (category == "B") {
        return B;
    }else if (category == "C") {
        return C;
    }else
        return Special;
}

/* Creador de Articulos
 * E: Cinco QStrings
 * S: Un puntero a articulo
 * D: Se encarga de crear una estructura de Articulo, con el string dado y si retorna nulo es invalido.
 */
Article * StructCreator::articleCreator(QString idArticle, QString quantity, QString time, QString category, QString location){
    bool okay;
    int newQuant = quantity.toInt(&okay);
    int newTime = time.toInt(&okay);
    if (!okay){
        //qDebug() << "FAILED CONVERSION";
        return nullptr;
    }
    Article *nuevo = new Article(idArticle, newQuant, newTime, location, determinerC(category));
    return nuevo;

}

/*Creador de la Lista Articulos
 * E: No tiene
 * S: Una Lista de Articulos
 * D: Lee la expresion creada con la lista de articulos, separa el string creando articulos y crea una lista articulos
 * SI RETORNA NULO ES QUE EL ARCHIVO VIENE CON ERRORES
 */

ArticleList *StructCreator ::articleListCreator(QString expresion){
    ArticleList *listaArticulos = new ArticleList();
    int counter = 0;
    QString tmp = "";
    while (counter < expresion.length()) {
        if (expresion[counter] != "*"){
            tmp += expresion[counter];
        }
        else {
            if (tmp== ""){
                break;
            }else
                if (articleString(tmp) == nullptr) {
                //SI ALGUN ARTUCULO VIENE CON ERRORES
                qDebug() << "FAIL BUILDING AN ARTICLE";
                return nullptr;
            }
            else {
            listaArticulos->append(articleString(tmp));
            tmp = "";
            }
        }
        ++counter;
    }
    //listaArticulos->printList();
    return listaArticulos;
}

/* Separador de Expresion Articulo
 * E: Un QString
 * S: Un articulo
 * D: Retorna un articulo con las partes del string
 */
Article *StructCreator::articleString(QString expresion){
    QStringList newExpresion = expresion.split("; ");
    //qDebug() << newExpresion;
    Article *nuevo = articleCreator(newExpresion[0],newExpresion[1],newExpresion[2],newExpresion[3],newExpresion[4]);
    return nuevo;
}

/* Creador de CLientes
 * E: 3 QStrings
 * S: Un puntero a cliente
 * D: Crea un cliente con strings dados
 */
Client * StructCreator::clientCreator(QString id, QString name, QString priority){
    bool okay;
    int newPrio = priority.toInt(&okay);
    if (!okay){
        qDebug() << "FAILED CONVERSION";
        return nullptr;
    }
    Client *nuevo = new Client(id, name, newPrio);
    return nuevo;
}

/*Creador de la Lista CLientes
 * E: No tiene
 * S: Una Lista de Clientes
 * D: Lee la expresion creada con la lista de clientes, separa el string creando articulos y crea una lista articulos
 */

SimpleList *StructCreator ::clientListCreator(QString expresionClients){
    SimpleList *listaClientes = new SimpleList();
    int counter = 0;
    QString tmp = "";
    while (counter < expresionClients.length()) {
        if (expresionClients[counter] != "*"){
            tmp += expresionClients[counter];
        }
        else {
            if (tmp== ""){
                break;
            }else if (clientString(tmp) == nullptr) {
                qDebug() << "FAILED CONVERSION";
                return nullptr;
            }
            else{
                listaClientes->append(clientString(tmp));
                tmp = "";
            }
        }
        ++counter;
    }
    //listaClientes->printList();
    return listaClientes;
}

/* Separador de Expresion Cliente
 * E: Un QString
 * S: Un cliente
 * D: Retorna un articulo con las partes del string
 */
Client *StructCreator::clientString(QString expresion){
    QStringList newExpresion = expresion.split("; ");
    //qDebug() << newExpresion;
    Client *nuevo = clientCreator(newExpresion[0],newExpresion[1],newExpresion[2]);
    return nuevo;
}

/* Creador Struct Pedido
 * E: Un string
 * S: Un pedido
 * D: Transforma el string en un pedido
*/
Order *StructCreator::orderString(QString expresion){
    bool ok;
    QStringList newExpresion = expresion.split("*");
    newExpresion.removeLast();
    int n1 = newExpresion[0].toInt(&ok);
    RequestList *listaArtOr = new RequestList();
    int counter = 0;
    while (counter < newExpresion.size()) {
        if (counter != 1 && counter != 0 && counter){
            listaArtOr->append(requestString(newExpresion[counter]));
        }
        ++counter;
    }
    Order *order = new Order(n1,newExpresion[1],listaArtOr);
    return order;
}

/*Creador Request
 * E: No tiene
 * S: Un request
 * D: Crea un request con la lista dada
 */
Request *StructCreator::requestString(QString expresion){
    bool ok;
    QStringList newExpresion = expresion.split("; ");
    //qDebug() << newExpresion;
    Request *nuevo = new Request(newExpresion[0],newExpresion[1].toInt(&ok));
    return nuevo;
}

/*Creador de Cola de Pedidos
 * E: Una lista con los nombres de los pedidos
 * S: Una cola de pedidos
 * D: Crea una cola de Pedidos
 */
OrderQueue *StructCreator::orderQueueCreator(QString pathArmazon,QStringList pedidos,SimpleList *clientes, ArticleList *articulos){
    OrderQueue *cola = new OrderQueue();
    for (int i = 0 ; i < pedidos.size(); i++){
        QString pedido = FileManager::readFile(pathArmazon+"/Pedidos/"+pedidos[i]);
        if (Checker::orderChecker(orderString(pedido),clientes,articulos,pathArmazon+"/Pedidos/"+pedidos[i])){
            FileManager::fileRelocater(pathArmazon+"/Pedidos",pathArmazon+"/Invalidos",pedidos[i]);
            continue;
            }
        cola->append(orderString(pedido));
    }
    //cola->imprimir();
    return cola;
}

#include "request.h"
#include <QDebug>
void Request::imprimir(){
    qDebug() << "ID de Articulo: " << this->article;
    qDebug() << "Total de Articulos Requeridos: "<< this->total;
    qDebug() << "Total Reservados: " << this->reserved;
    qDebug() << "Total Fabricados: " << this->created;
    qDebug() << "";
}

/* Sumador de Reserved
*/
void Request::sumReserved(int num){
    this->reserved = this->reserved + num;
}

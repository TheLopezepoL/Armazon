#include "article.h"
#include "QDebug"
/* IMPRIMIR ARTICULO
 * E: No tiene
 * S: No tiene
 * D: Solo imprimer los datos del articulo
 */

void Article::imprimir(){
    qDebug() << "ID Article: " << this->id;
    qDebug() << "Category: " << this->category;
    qDebug() << "In Stock: " << this->stock;
    qDebug() << "Location: " << this->position;
    qDebug() << "Time: " << this->time;
    qDebug()<<"";
}

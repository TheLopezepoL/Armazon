#include "article.h"
#include <QDebug>

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

int Article::getTimeVault(){
    QCharRef letter = this->position[0];
    int time = letter.toLatin1() - 65;
    letter = this->position[1];
    if (letter == '1')
        time += 10;
    else
        time += this->position[2].digitValue();
    return time;
}

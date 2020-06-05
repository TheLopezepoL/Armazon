#ifndef ARTICLE_H
#define ARTICLE_H
#include <QString>

//ENUM TO DETERMINE THE TYPE OF ARTICLE
enum Category {
    A,
    B,
    C,
    Special
};

struct Article {
    //Attributes
    //CODIGO ARTICULO
    int id;
    //CANTIDAD EN ALMACEN
    int stock;
    //DURACION DE FABRICACION
    int time;
    //POSICION EN EL ALMACEN (COORDENADA DE MATRIZ)
    QString position;
    //TIPO DE ARTICULO
    Category category;

    Article();
};

#endif // ARTICLE_H

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

    Article(int id_,int stock_,int time_,QString position_,Category category_){
        id = id_;
        stock = stock_;
        time = time_;
        position = position_;
        category = category_;
    }
};

#endif // ARTICLE_H

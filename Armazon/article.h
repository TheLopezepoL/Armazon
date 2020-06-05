#ifndef ARTICLE_H
#define ARTICLE_H
#include <QString>

enum Category {
    A,
    B,
    C,
    Special
};

struct Article {
    int id;
    int stock;
    int time;
    QString position;
    Category category;

    Article();
};

#endif // ARTICLE_H

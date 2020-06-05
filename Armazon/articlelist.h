#ifndef ARTICLELIST_H
#define ARTICLELIST_H
#include "article.h"

struct NodeArticle {
    Article* data;
    NodeArticle* nxt;
    NodeArticle* prv;

    NodeArticle();
};

struct ArticleList {
    NodeArticle* first;

    ArticleList();

    void append(Article* data);
    NodeArticle* deleteIndex(int index);
};

#endif // ARTICLELIST_H

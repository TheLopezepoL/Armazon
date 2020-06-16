#ifndef VAULT_H
#define VAULT_H
#include "recrutier.h"

//ALMACEN
struct Vault {
    Article* vault[10][27];
    Recrutier* actives[6];
    Recrutier* inactives[6];

    Vault(Article* vault[10][27]);

    void alocateArticles(ArticleList* articles);
    int calculateTime(QString pos);


};

#endif // VAULT_H

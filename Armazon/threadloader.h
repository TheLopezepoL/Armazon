#ifndef THREADLOADER_H
#define THREADLOADER_H
#include <QThread>
#include "filemanager.h"
#include "structcreator.h"
#include "checker.h"
class ThreadLoader : public QThread {


public:
    QString path;
    QStringList files;
    SimpleList *clients;
    ArticleList *articles;

    bool runner;

    ThreadLoader();

    void __init__(QString path_, SimpleList *clientes, ArticleList *articulos);
    void run();
    void kill();

};

#endif // THREADLOADER_H

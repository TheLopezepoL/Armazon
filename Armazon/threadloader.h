#ifndef THREADLOADER_H
#define THREADLOADER_H
#include <QThread>
#include "filemanager.h"
#include "structcreator.h"
#include "checker.h"
class ThreadLoader : public QThread {


public:
    QString path;
    QStringList pedidosProcesados;
    SimpleList *clients;
    ArticleList *articles;
    OrderQueue *cola;
    QString message;
    bool runner;
    bool pause;

    ThreadLoader();

    void __init__(QString path_, SimpleList *clientes, ArticleList *articulos,OrderQueue *cola);
    void run();
    void pauser();
    void unpause();

};

#endif // THREADLOADER_H

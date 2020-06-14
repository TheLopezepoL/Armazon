#include "mainwindow.h"

#include <QApplication>
#include "armazon.h"
#include "filemanager.h"
#include "structcreator.h"
//#include "balancer.h"
#include "threadloader.h"

int main(int argc, char *argv[])
{

    //LISTA ARTICULOS
    QString articulos = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Articulos/Articulos");
    qDebug() <<"-------------LISTA ARTICULOS------------- ";
    ArticleList *articulos_ =  StructCreator::articleListCreator(articulos,"/home/rev/Documents/GitHub/Armazon");
    articulos_->printList();

    //LISTA CLIENTES
    QString clientes = FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Clientes/Clientes");
    qDebug() <<"-------------LISTA Clientes-------------";
    SimpleList *clientes_ = StructCreator::clientListCreator(clientes);
    clientes_->printList();

/*
    qDebug() <<"-------------COLA PEDIDOS-------------";
    OrderQueue *cola = StructCreator::orderQueueCreator("/home/rev/Documents/GitHub/Armazon",FileManager::seeDirectory("/home/rev/Documents/GitHub/Armazon/Pedidos"));
    cola->imprimir();
    qDebug() << cola->returnFront()->data->orderNum;

    QMutex* mutexPedidos = new QMutex();
    QMutex* mutexFabrica = new QMutex();
    QMutex* mutexAlisto = new QMutex();
    QMutex* mutexArticulos = new QMutex();
    OrderQueue* pedidos = new OrderQueue(mutexPedidos);
    OrderQueue* fabricar = new OrderQueue(mutexFabrica);
    OrderQueue* alisto = new OrderQueue(mutexAlisto);

    Article* a1 = new Article("A00", 30, 10, "Z10", A);
    Article* a2 = new Article("C23", 10, 5, "C07", C);
    Article* a3 = new Article("S11", 50, 50, "S08", A);
    Article* a4 = new Article("J04", 17, 1, "D01", B);

    ArticleList* a0 = new ArticleList(mutexArticulos);
    a0->append(a1);
    a0->append(a2);
    a0->append(a3);
    a0->append(a4);

    Request* r1 = new Request("A00", 7);
    Request* r2 = new Request("C23", 5);
    Request* r3 = new Request("S11", 20);
    Request* r4 = new Request("J04", 3);

    RequestList* rl1 = new RequestList();
    RequestList* rl2 = new RequestList();
    RequestList* rl3 = new RequestList();
    RequestList* rl4 = new RequestList();
    RequestList* rl5 = new RequestList();

    rl1->append(r1);
    rl1->append(r2);
    rl1->append(r3);
    rl1->append(r4);

    rl2->append(r2);
    rl2->append(r3);

    rl3->append(r1);
    rl3->append(r1);

    rl4->append(r2);

    Order* o1 = new Order(1, 1, rl1);
    Order* o2 = new Order(2, 2, rl2);
    Order* o3 = new Order(3, 3, rl3);
    Order* o4 = new Order(4, 4, rl4);
    Order* o5 = new Order(5, 5, rl5);

    pedidos->append(o1);
    pedidos->append(o2);
    pedidos->append(o3);
    pedidos->append(o4);
    pedidos->append(o5);

    Balancer balancer;
    balancer.__init__(pedidos, fabricar, alisto, a0);
    balancer.start();
*/

    ThreadLoader loader;
    loader.__init__("/home/rev/Documents/GitHub/Armazon", clientes_,articulos_);
    loader.start();
    OrderQueue *cola = StructCreator::orderQueueCreator("/home/rev/Documents/GitHub/Armazon",FileManager::seeDirectory("/home/rev/Documents/GitHub/Armazon/Pedidos"));
    //cola->imprimir();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

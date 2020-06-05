#include "mainwindow.h"

#include <QApplication>
#include "filemanager.h"
int main(int argc, char *argv[])
{
    //FILE MANAGER
    qDebug() << FileManager::readFile("/home/rev/Documents/GitHub/Armazon/Pedidos/prueba.txt");;
    //SEE DIRECTORY
    qDebug() << FileManager::seeDirectory("/home/rev/Documents/GitHub/Armazon/Pedidos");
    //FILE RELOCATOR
    //FileManager::fileRelocater("/home/rev/PROGRA1/Pedidos","/home/rev/PROGRA1/Invalidos","prueba.txt");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

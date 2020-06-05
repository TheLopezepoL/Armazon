#include "mainwindow.h"

#include <QApplication>
#include "filemanager.h"
int main(int argc, char *argv[])
{
    //FILE MANAGER
    QString hola = FileManager::readFile("/home/thelopezepol/Escritorio/C++/Armazon/Armazon/Articulos/Articulos");
    qDebug() << FileManager::splitFile(hola);
    //SEE DIRECTORY
    //qDebug() << FileManager::seeDirectory("/home/rev/Documents/GitHub/Armazon/Pedidos");
    //FILE RELOCATOR
    //FileManager::fileRelocater("/home/rev/PROGRA1/Pedidos","/home/rev/PROGRA1/Invalidos","prueba.txt");
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

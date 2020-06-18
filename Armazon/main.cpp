#include "mainwindow.h"

#include <QApplication>
#include "filemanager.h"
#include "structcreator.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    //FileManager::writeFileN("Hola soy  un txt", "/home/rev/Desktop/X/Prueba.txt");
}

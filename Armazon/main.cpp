#include "mainwindow.h"

#include <QApplication>
#include "armazon.h"
#include "filemanager.h"
#include "structcreator.h"
#include "balancer.h"
#include "threadloader.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

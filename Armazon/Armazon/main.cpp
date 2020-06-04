#include "armazonwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ArmazonWindow w;
    w.show();
    return a.exec();
}

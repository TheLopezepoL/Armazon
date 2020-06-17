#include "mainwindow.h"

#include <QApplication>
#include "filemanager.h"
#include "structcreator.h"

int main(int argc, char *argv[]){
    /*QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();*/
    QString code = "B09";
    QCharRef letter = code[0];
    int time = letter.toLatin1() - 65;
    letter = code[1];
    if (letter == '1')
        time += 10;
    else
        time += code[2].digitValue();
    qDebug() << time << Qt::endl;

    return 1;
}

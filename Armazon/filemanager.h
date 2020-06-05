#ifndef FILEMANAGER_H
#define FILEMANAGER_H


#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDir>
struct FileManager {

public:
    FileManager();

    static QString readFile(QString path);

    static QStringList splitFile(QString path);

    static void writeFileA(QString string, QString path);

    static void writeFileN(QString string, QString path);

    //LEE EL DIRECTORIO, Y CREA UNA QStringList con los nombres de los archivos
    static QStringList seeDirectory(QString path);

    //CAMBIA LA UBICACION DE UN ARCHIVO
    static void fileRelocater(QString path,QString newPath, QString fileNamee);
};


#endif // FILEMANAGER_H

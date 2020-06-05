#ifndef FILEMANAGER_H
#define FILEMANAGER_H


#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QDir>

/*
 * FILE MANAGER
 * Se encarga de administrar los archivos .txt, los sobreescribe, los lee,...
 */
struct FileManager {

public:
    FileManager();

    //LEE CADA LINEA DEL ARCHIVO (PEDIDOS)
    static QString readOrder(QString path);

    //LEE CADA LINEA DEL ARCHIVO (CLIENTES)
    static QString readClient(QString path);

    //LEE CADA LINEA DEL ARCHIVO (ARTICULOS)
    static QString readArticles(QString path);

    //DIVIDE CADA LINEA DEL .TXT Y LO TRANSFORMA EN UNA LISTA QSTRING (para readOrder)
    static QStringList splitFile(QString path);

    //ESCRIBE DESPUES DE LA ULTIMA LINEA DE UN ARCHIVO
    static void writeFileA(QString string, QString path);

    //SOBRESCRIBE UN ARCHIVO
    static void writeFileN(QString string, QString path);

    //LEE EL DIRECTORIO, Y CREA UNA QStringList con los nombres de los archivos
    static QStringList seeDirectory(QString path);

    //CAMBIA LA UBICACION DE UN ARCHIVO
    static void fileRelocater(QString path,QString newPath, QString fileNamee);
};


#endif // FILEMANAGER_H

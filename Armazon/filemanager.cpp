#include "filemanager.h"

FileManager::FileManager(){}

<<<<<<< Updated upstream
QString FileManager::readFile(QString path){
=======
QString FileManager::reader(QString path){
>>>>>>> Stashed changes
    QString content = "";
    QFile inputFile(path);
    if (!inputFile.exists()){
        qDebug() << "no exists";
    }
    if (inputFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream in(&inputFile);
        while(!in.atEnd()){
            QString line = in.readLine();
            int word = 0;
            while(word < line.size()){
                if (line.data()[word] != '\t')
                    content.append(line.data()[word]);
                else
                    content.append("; ");
                word++;
            }
            content.append("*");
        }
        inputFile.close();
    }
    else
        content = "ERROR - READ FILE ("+path+")";
    return content;
}
<<<<<<< Updated upstream

QStringList FileManager::splitFile(QString path){
    return readFile(path).split("~");
=======
QStringList FileManager::splitFile(QString path){
    return reader(path).split("~");
>>>>>>> Stashed changes
}

void FileManager::writeFileA(QString string, QString path){
    QFile file(path);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
        QTextStream stream(&file);
        stream << string << Qt::endl;
    } else
        qDebug() << "ERROR - WRITE FILE ("+path+")";
    file.close();
}

void FileManager::writeFileN(QString string, QString path){
    QFile file(path);
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)){
        QTextStream stream(&file);
        stream << string << Qt::endl;
    } else
        qDebug() << "ERROR - WRITE FILE ("+path+")";
    file.close();
}

//LIST CREATOR DIRECTORY READER
/*
 * E: Un QString
 * S: QStringList
 * D: Recibe el path de un directorio, y crea una lista de strings con los nombres
 */
QStringList FileManager::seeDirectory(QString path){
    QStringList files;
    QDir directory(path);
    files = directory.entryList(QStringList() << "*.txt" << "*.TXT",QDir::Files);
    return files;
}

// DIRECTORY RELOCATER
/*
 * E: Un QString
 * S: Void
 * D: Cambia un archivo de directorio
 */

void FileManager::fileRelocater(QString path,QString newPath, QString fileName){
    QDir directory(path);
    QDir newDirectory(fileName);
    if (directory.exists(fileName) and !newDirectory.exists(fileName)){
        QFile::copy(path+"/"+fileName,newPath+"/"+fileName);
        directory.remove(fileName);
    }else
        qDebug() << "NO EXISTE EL ARCHIVO";

}

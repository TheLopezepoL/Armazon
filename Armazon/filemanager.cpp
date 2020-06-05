#include "filemanager.h"

FileManager::FileManager(){}

QString FileManager::readFile(QString path){
    QString content = "";
    QFile inputFile(path);
    if (!inputFile.exists()){
        qDebug() << "no exists";
    }
    if (inputFile.open(QIODevice::ReadOnly | QIODevice::Text)){
       QTextStream in(&inputFile);
       int cont = 0;
       while (!in.atEnd()){
          QString line = in.readLine();
          if (cont<2)
            content.append(line+"~");
          else {
              int word = 0;
              while(word<line.size()){
                  if (line.data()[word]!='\t')
                      content.append(line.data()[word]);
                  else
                      content.append("#");
                  word++;
              }
              content.append("~");
          }
          cont++;
       }
       inputFile.close();
    } else
        content = "ERROR - READ FILE ("+path+")";
    return content;
}

QStringList FileManager::splitFile(QString path){
    return readFile(path).split("~");
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

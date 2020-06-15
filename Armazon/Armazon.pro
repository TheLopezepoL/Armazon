QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    armazon.cpp \
    article.cpp \
    articlelist.cpp \
    balancer.cpp \
    biller.cpp \
    checker.cpp \
    client.cpp \
    clientlist.cpp \
    factory.cpp \
    filemanager.cpp \
    main.cpp \
    mainwindow.cpp \
    order.cpp \
    orderqueue.cpp \
    recrutier.cpp \
    repartidor.cpp \
    request.cpp \
    requestqueue.cpp \
    structcreator.cpp \
    threadloader.cpp \
    vault.cpp

HEADERS += \
    armazon.h \
    article.h \
    articlelist.h \
    balancer.h \
    biller.h \
    checker.h \
    client.h \
    clientlist.h \
    factory.h \
    filemanager.h \
    mainwindow.h \
    order.h \
    orderqueue.h \
    recrutier.h \
    repartidor.h \
    request.h \
    requestqueue.h \
    structcreator.h \
    threadloader.h \
    vault.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Start;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Cliente1;
    QLabel *label;
    QLabel *Cliente2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1356, 1014);
        MainWindow->setWindowOpacity(1.000000000000000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Start = new QPushButton(centralwidget);
        Start->setObjectName(QString::fromUtf8("Start"));
        Start->setGeometry(QRect(230, 10, 121, 41));
        Start->setAcceptDrops(false);
        Start->setAutoFillBackground(false);
        Start->setAutoDefault(false);
        Start->setFlat(true);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 220, 971));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Cliente1 = new QLabel(layoutWidget);
        Cliente1->setObjectName(QString::fromUtf8("Cliente1"));
        Cliente1->setPixmap(QPixmap(QString::fromUtf8("../ImagenesGUI/client3.png")));

        verticalLayout->addWidget(Cliente1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8("../ImagenesGUI/client2.png")));

        verticalLayout->addWidget(label);

        Cliente2 = new QLabel(layoutWidget);
        Cliente2->setObjectName(QString::fromUtf8("Cliente2"));
        Cliente2->setPixmap(QPixmap(QString::fromUtf8("../ImagenesGUI/client1.png")));

        verticalLayout->addWidget(Cliente2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1356, 22));
        menubar->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Start->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(statustip)
        Start->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        Start->setText(QString());
        Cliente1->setText(QString());
        label->setText(QString());
        Cliente2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

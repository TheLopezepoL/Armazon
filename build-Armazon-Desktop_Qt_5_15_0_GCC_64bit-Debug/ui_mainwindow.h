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
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
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
    QLabel *Cliente3;
    QLabel *Cliente2;
    QLabel *f1;
    QLabel *f3;
    QLabel *f2;
    QLabel *f4;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_5;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *line_11;
    QFrame *line_12;
    QFrame *line_3;
    QFrame *line_6;
    QFrame *line_13;
    QFrame *line_14;
    QFrame *line_15;
    QFrame *line_16;
    QFrame *line_17;
    QLabel *Final;
    QPushButton *Stop;
    QLabel *FACTORYA;
    QLabel *FACTORYB;
    QLabel *FACTORYC;
    QLabel *FACTORYAB;
    QLabel *BALANCER;
    QLabel *RECRUITIER;
    QLabel *CLIENTS;
    QPushButton *ButtonBalancer;
    QPushButton *ButtonFactoryAB;
    QLabel *BILLER;
    QPushButton *ButtonRecruiter;
    QPushButton *ButtonBiller;
    QLabel *CHECKOUT;
    QTextEdit *TextBox;
    QPushButton *ButtonFactoryA;
    QPushButton *ButtonFactoryB;
    QPushButton *ButtonFactoryC;
    QPushButton *EyeLoader;
    QPushButton *EyeBalancer;
    QPushButton *EyeRecruiter;
    QPushButton *EyeBiller;
    QPushButton *EyeFactoryB;
    QPushButton *EyeFactoryC;
    QPushButton *EyeFactoryA;
    QPushButton *EyeFactoryAB;
    QPushButton *ButtonLoader;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(2229, 1400);
        MainWindow->setWindowOpacity(1.000000000000000);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Start = new QPushButton(centralwidget);
        Start->setObjectName(QString::fromUtf8("Start"));
        Start->setGeometry(QRect(220, 30, 151, 51));
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

        Cliente3 = new QLabel(layoutWidget);
        Cliente3->setObjectName(QString::fromUtf8("Cliente3"));
        Cliente3->setPixmap(QPixmap(QString::fromUtf8("../ImagenesGUI/client2.png")));

        verticalLayout->addWidget(Cliente3);

        Cliente2 = new QLabel(layoutWidget);
        Cliente2->setObjectName(QString::fromUtf8("Cliente2"));
        Cliente2->setPixmap(QPixmap(QString::fromUtf8("../ImagenesGUI/client1.png")));

        verticalLayout->addWidget(Cliente2);

        f1 = new QLabel(centralwidget);
        f1->setObjectName(QString::fromUtf8("f1"));
        f1->setGeometry(QRect(710, -30, 91, 141));
        f1->setPixmap(QPixmap(QString::fromUtf8("../ImagenesGUI/f1.png")));
        f3 = new QLabel(centralwidget);
        f3->setObjectName(QString::fromUtf8("f3"));
        f3->setGeometry(QRect(690, 210, 121, 121));
        f3->setPixmap(QPixmap(QString::fromUtf8("../ImagenesGUI/f2.png")));
        f2 = new QLabel(centralwidget);
        f2->setObjectName(QString::fromUtf8("f2"));
        f2->setGeometry(QRect(550, 60, 131, 151));
        f2->setPixmap(QPixmap(QString::fromUtf8("../ImagenesGUI/f3.png")));
        f4 = new QLabel(centralwidget);
        f4->setObjectName(QString::fromUtf8("f4"));
        f4->setGeometry(QRect(830, 80, 151, 121));
        f4->setPixmap(QPixmap(QString::fromUtf8("../ImagenesGUI/f4.png")));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(200, 480, 71, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(240, 180, 21, 631));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(210, 800, 41, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(210, 170, 41, 16));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(390, 130, 20, 251));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(centralwidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(400, 130, 118, 3));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        line_10 = new QFrame(centralwidget);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(690, 150, 118, 3));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        line_11 = new QFrame(centralwidget);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(740, 130, 20, 81));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_12 = new QFrame(centralwidget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(620, 460, 291, 16));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(1090, 150, 20, 161));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(980, 140, 121, 20));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_13 = new QFrame(centralwidget);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(1250, 460, 151, 16));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(centralwidget);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(1390, 470, 20, 331));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_15 = new QFrame(centralwidget);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(1400, 800, 118, 3));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        line_16 = new QFrame(centralwidget);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(1670, 540, 20, 161));
        line_16->setFrameShape(QFrame::VLine);
        line_16->setFrameShadow(QFrame::Sunken);
        line_17 = new QFrame(centralwidget);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setGeometry(QRect(1670, 200, 20, 71));
        line_17->setFrameShape(QFrame::VLine);
        line_17->setFrameShadow(QFrame::Sunken);
        Final = new QLabel(centralwidget);
        Final->setObjectName(QString::fromUtf8("Final"));
        Final->setGeometry(QRect(1640, 50, 91, 91));
        Final->setPixmap(QPixmap(QString::fromUtf8("../ImagenesGUI/checked.png")));
        Stop = new QPushButton(centralwidget);
        Stop->setObjectName(QString::fromUtf8("Stop"));
        Stop->setGeometry(QRect(230, 90, 141, 71));
        Stop->setFlat(true);
        FACTORYA = new QLabel(centralwidget);
        FACTORYA->setObjectName(QString::fromUtf8("FACTORYA"));
        FACTORYA->setEnabled(true);
        FACTORYA->setGeometry(QRect(560, 210, 111, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        FACTORYA->setFont(font);
        FACTORYA->setFrameShape(QFrame::Panel);
        FACTORYA->setTextFormat(Qt::RichText);
        FACTORYA->setAlignment(Qt::AlignCenter);
        FACTORYB = new QLabel(centralwidget);
        FACTORYB->setObjectName(QString::fromUtf8("FACTORYB"));
        FACTORYB->setEnabled(true);
        FACTORYB->setGeometry(QRect(700, 330, 111, 31));
        FACTORYB->setFont(font);
        FACTORYB->setFrameShape(QFrame::Panel);
        FACTORYB->setTextFormat(Qt::RichText);
        FACTORYB->setAlignment(Qt::AlignCenter);
        FACTORYC = new QLabel(centralwidget);
        FACTORYC->setObjectName(QString::fromUtf8("FACTORYC"));
        FACTORYC->setEnabled(true);
        FACTORYC->setGeometry(QRect(830, 210, 111, 31));
        FACTORYC->setFont(font);
        FACTORYC->setFrameShape(QFrame::Panel);
        FACTORYC->setTextFormat(Qt::RichText);
        FACTORYC->setAlignment(Qt::AlignCenter);
        FACTORYAB = new QLabel(centralwidget);
        FACTORYAB->setObjectName(QString::fromUtf8("FACTORYAB"));
        FACTORYAB->setEnabled(true);
        FACTORYAB->setGeometry(QRect(700, 90, 111, 31));
        FACTORYAB->setFont(font);
        FACTORYAB->setFrameShape(QFrame::Panel);
        FACTORYAB->setTextFormat(Qt::RichText);
        FACTORYAB->setAlignment(Qt::AlignCenter);
        BALANCER = new QLabel(centralwidget);
        BALANCER->setObjectName(QString::fromUtf8("BALANCER"));
        BALANCER->setEnabled(true);
        BALANCER->setGeometry(QRect(370, 590, 111, 31));
        BALANCER->setFont(font);
        BALANCER->setFrameShape(QFrame::Panel);
        BALANCER->setTextFormat(Qt::RichText);
        BALANCER->setAlignment(Qt::AlignCenter);
        RECRUITIER = new QLabel(centralwidget);
        RECRUITIER->setObjectName(QString::fromUtf8("RECRUITIER"));
        RECRUITIER->setEnabled(true);
        RECRUITIER->setGeometry(QRect(1050, 330, 111, 31));
        RECRUITIER->setFont(font);
        RECRUITIER->setFrameShape(QFrame::Panel);
        RECRUITIER->setTextFormat(Qt::RichText);
        RECRUITIER->setAlignment(Qt::AlignCenter);
        CLIENTS = new QLabel(centralwidget);
        CLIENTS->setObjectName(QString::fromUtf8("CLIENTS"));
        CLIENTS->setEnabled(true);
        CLIENTS->setGeometry(QRect(220, 890, 111, 31));
        CLIENTS->setFont(font);
        CLIENTS->setFrameShape(QFrame::Panel);
        CLIENTS->setTextFormat(Qt::RichText);
        CLIENTS->setAlignment(Qt::AlignCenter);
        ButtonBalancer = new QPushButton(centralwidget);
        ButtonBalancer->setObjectName(QString::fromUtf8("ButtonBalancer"));
        ButtonBalancer->setGeometry(QRect(430, 640, 61, 31));
        ButtonBalancer->setFlat(true);
        ButtonFactoryAB = new QPushButton(centralwidget);
        ButtonFactoryAB->setObjectName(QString::fromUtf8("ButtonFactoryAB"));
        ButtonFactoryAB->setGeometry(QRect(810, 30, 61, 31));
        ButtonFactoryAB->setFlat(true);
        BILLER = new QLabel(centralwidget);
        BILLER->setObjectName(QString::fromUtf8("BILLER"));
        BILLER->setEnabled(true);
        BILLER->setGeometry(QRect(1470, 390, 111, 31));
        BILLER->setFont(font);
        BILLER->setFrameShape(QFrame::Panel);
        BILLER->setTextFormat(Qt::RichText);
        BILLER->setAlignment(Qt::AlignCenter);
        ButtonRecruiter = new QPushButton(centralwidget);
        ButtonRecruiter->setObjectName(QString::fromUtf8("ButtonRecruiter"));
        ButtonRecruiter->setEnabled(true);
        ButtonRecruiter->setGeometry(QRect(1280, 490, 61, 41));
        ButtonRecruiter->setFlat(true);
        ButtonBiller = new QPushButton(centralwidget);
        ButtonBiller->setObjectName(QString::fromUtf8("ButtonBiller"));
        ButtonBiller->setGeometry(QRect(1500, 430, 61, 31));
        ButtonBiller->setFlat(true);
        CHECKOUT = new QLabel(centralwidget);
        CHECKOUT->setObjectName(QString::fromUtf8("CHECKOUT"));
        CHECKOUT->setEnabled(true);
        CHECKOUT->setGeometry(QRect(1630, 140, 111, 31));
        CHECKOUT->setFont(font);
        CHECKOUT->setFrameShape(QFrame::Panel);
        CHECKOUT->setTextFormat(Qt::RichText);
        CHECKOUT->setAlignment(Qt::AlignCenter);
        TextBox = new QTextEdit(centralwidget);
        TextBox->setObjectName(QString::fromUtf8("TextBox"));
        TextBox->setGeometry(QRect(540, 570, 531, 331));
        ButtonFactoryA = new QPushButton(centralwidget);
        ButtonFactoryA->setObjectName(QString::fromUtf8("ButtonFactoryA"));
        ButtonFactoryA->setGeometry(QRect(540, 250, 61, 31));
        ButtonFactoryA->setFlat(true);
        ButtonFactoryB = new QPushButton(centralwidget);
        ButtonFactoryB->setObjectName(QString::fromUtf8("ButtonFactoryB"));
        ButtonFactoryB->setGeometry(QRect(690, 370, 61, 31));
        ButtonFactoryB->setFlat(true);
        ButtonFactoryC = new QPushButton(centralwidget);
        ButtonFactoryC->setObjectName(QString::fromUtf8("ButtonFactoryC"));
        ButtonFactoryC->setGeometry(QRect(820, 250, 61, 31));
        ButtonFactoryC->setFlat(true);
        EyeLoader = new QPushButton(centralwidget);
        EyeLoader->setObjectName(QString::fromUtf8("EyeLoader"));
        EyeLoader->setGeometry(QRect(240, 830, 71, 51));
        EyeLoader->setFlat(true);
        EyeBalancer = new QPushButton(centralwidget);
        EyeBalancer->setObjectName(QString::fromUtf8("EyeBalancer"));
        EyeBalancer->setGeometry(QRect(340, 630, 71, 51));
        EyeBalancer->setFlat(true);
        EyeRecruiter = new QPushButton(centralwidget);
        EyeRecruiter->setObjectName(QString::fromUtf8("EyeRecruiter"));
        EyeRecruiter->setGeometry(QRect(1280, 400, 71, 51));
        EyeRecruiter->setFlat(true);
        EyeBiller = new QPushButton(centralwidget);
        EyeBiller->setObjectName(QString::fromUtf8("EyeBiller"));
        EyeBiller->setGeometry(QRect(1490, 310, 71, 51));
        EyeBiller->setFlat(true);
        EyeFactoryB = new QPushButton(centralwidget);
        EyeFactoryB->setObjectName(QString::fromUtf8("EyeFactoryB"));
        EyeFactoryB->setGeometry(QRect(770, 370, 71, 51));
        EyeFactoryB->setFlat(true);
        EyeFactoryC = new QPushButton(centralwidget);
        EyeFactoryC->setObjectName(QString::fromUtf8("EyeFactoryC"));
        EyeFactoryC->setGeometry(QRect(890, 240, 71, 51));
        EyeFactoryC->setFlat(true);
        EyeFactoryA = new QPushButton(centralwidget);
        EyeFactoryA->setObjectName(QString::fromUtf8("EyeFactoryA"));
        EyeFactoryA->setGeometry(QRect(610, 250, 71, 51));
        EyeFactoryA->setFlat(true);
        EyeFactoryAB = new QPushButton(centralwidget);
        EyeFactoryAB->setObjectName(QString::fromUtf8("EyeFactoryAB"));
        EyeFactoryAB->setGeometry(QRect(640, 20, 71, 51));
        EyeFactoryAB->setFlat(true);
        ButtonLoader = new QPushButton(centralwidget);
        ButtonLoader->setObjectName(QString::fromUtf8("ButtonLoader"));
        ButtonLoader->setGeometry(QRect(250, 930, 61, 31));
        ButtonLoader->setFlat(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 2229, 22));
        menubar->setCursor(QCursor(Qt::ArrowCursor));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Start->setDefault(true);


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
        Cliente3->setText(QString());
        Cliente2->setText(QString());
        f1->setText(QString());
        f3->setText(QString());
        f2->setText(QString());
        f4->setText(QString());
        Final->setText(QString());
        Stop->setText(QString());
        FACTORYA->setText(QCoreApplication::translate("MainWindow", "FACTORY A", nullptr));
        FACTORYB->setText(QCoreApplication::translate("MainWindow", "FACTORY B", nullptr));
        FACTORYC->setText(QCoreApplication::translate("MainWindow", "FACTORY C", nullptr));
        FACTORYAB->setText(QCoreApplication::translate("MainWindow", "FACTORY AB", nullptr));
        BALANCER->setText(QCoreApplication::translate("MainWindow", "BALANCER", nullptr));
        RECRUITIER->setText(QCoreApplication::translate("MainWindow", "RECRUITIER", nullptr));
        CLIENTS->setText(QCoreApplication::translate("MainWindow", "LOADER", nullptr));
        ButtonBalancer->setText(QString());
        ButtonFactoryAB->setText(QString());
        BILLER->setText(QCoreApplication::translate("MainWindow", "BILLER", nullptr));
        ButtonRecruiter->setText(QString());
        ButtonBiller->setText(QString());
        CHECKOUT->setText(QCoreApplication::translate("MainWindow", "CHECKOUT", nullptr));
        ButtonFactoryA->setText(QString());
        ButtonFactoryB->setText(QString());
        ButtonFactoryC->setText(QString());
        EyeLoader->setText(QString());
        EyeBalancer->setText(QString());
        EyeRecruiter->setText(QString());
        EyeBiller->setText(QString());
        EyeFactoryB->setText(QString());
        EyeFactoryC->setText(QString());
        EyeFactoryA->setText(QString());
        EyeFactoryAB->setText(QString());
        ButtonLoader->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

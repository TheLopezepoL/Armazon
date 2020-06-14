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
    QFrame *line_3;
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
    QFrame *line_4;
    QFrame *line_6;
    QFrame *line_13;
    QFrame *line_14;
    QFrame *line_15;
    QFrame *line_16;
    QLabel *label_2;
    QFrame *line_17;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1859, 1213);
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

        line_3 = new QFrame(layoutWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        f1 = new QLabel(centralwidget);
        f1->setObjectName(QString::fromUtf8("f1"));
        f1->setGeometry(QRect(700, -30, 161, 141));
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
        f4->setGeometry(QRect(810, 80, 151, 121));
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
        line_11->setGeometry(QRect(740, 100, 20, 111));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_12 = new QFrame(centralwidget);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(620, 460, 291, 16));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(1090, 150, 20, 201));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1640, 10, 231, 211));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../ImagenesGUI/checked.png")));
        line_17 = new QFrame(centralwidget);
        line_17->setObjectName(QString::fromUtf8("line_17"));
        line_17->setGeometry(QRect(1670, 200, 20, 71));
        line_17->setFrameShape(QFrame::VLine);
        line_17->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1859, 22));
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
        f1->setText(QString());
        f3->setText(QString());
        f2->setText(QString());
        f4->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

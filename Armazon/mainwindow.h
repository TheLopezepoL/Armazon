#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include "armazon.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    bool x;

public:
    Armazon *armazon;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    //BOTON START
    void on_Start_clicked();
    //BOTON STOP
    void on_Stop_clicked(bool checked);

    void on_ButtonBalancer_clicked(bool checked);

    void on_ButtonFactoryAB_clicked(bool checked);

    void on_ButtonFactoryA_clicked(bool checked);

    void on_ButtonFactoryB_clicked(bool checked);

    void on_ButtonFactoryC_clicked(bool checked);


    void on_ButtonLoader_clicked(bool checked);

    void on_ButtonRecruiter_clicked(bool checked);

    void on_ButtonBiller_clicked(bool checked);

    void on_EyeLoader_clicked(bool checked);

    void on_EyeBalancer_clicked(bool checked);

    void on_EyeFactoryA_clicked(bool checked);

    void on_EyeFactoryB_clicked(bool checked);

    void on_EyeFactoryC_clicked(bool checked);

    void on_EyeFactoryAB_clicked(bool checked);

    void on_EyeRecruiter1_clicked(bool checked);

    void on_EyeBiller_clicked(bool checked);

    void on_EyeRecruiter_6_clicked(bool checked);

    void on_EyeRecruiter_5_clicked(bool checked);

    void on_EyeRecruiter_4_clicked(bool checked);

    void on_EyeRecruiter_3_clicked(bool checked);

    void on_EyeRecruiter_2_clicked(bool checked);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

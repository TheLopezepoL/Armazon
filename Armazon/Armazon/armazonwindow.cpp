#include "armazonwindow.h"
#include "ui_armazonwindow.h"

ArmazonWindow::ArmazonWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ArmazonWindow)
{
    ui->setupUi(this);
}

ArmazonWindow::~ArmazonWindow()
{
    delete ui;
}


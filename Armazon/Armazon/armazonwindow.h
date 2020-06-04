#ifndef ARMAZONWINDOW_H
#define ARMAZONWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ArmazonWindow; }
QT_END_NAMESPACE

class ArmazonWindow : public QMainWindow
{
    Q_OBJECT

public:
    ArmazonWindow(QWidget *parent = nullptr);
    ~ArmazonWindow();

private:
    Ui::ArmazonWindow *ui;
};
#endif // ARMAZONWINDOW_H

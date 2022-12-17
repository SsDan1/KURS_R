#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Расчет затрачиваемых при беге калорий");
    w.resize(1500,600);
    w.show();

    return a.exec();
}

#include "mainwindow.h"
#include "times.h"
#include <QApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //Times time(11,4,4);

    return a.exec();
}

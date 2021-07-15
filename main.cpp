#include "mainwindow.h"
#include "soundclass.h"
#include <iostream>
#include <QApplication>
#include <QtDebug>
soundclass *soundclass::instance=0;
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    soundclass *sd=sd->getinstance();
    return a.exec();
}

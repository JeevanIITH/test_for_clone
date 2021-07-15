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
    //D:/qt_projects/sdl_path_test/sounds/m1.mp3
    /*
    sd->addmusic("sounds1/m1.mp3");
    sd->playmusic(0);
    int i=0;

    while((i!=-1))
    {
        std::cout<<"Enter input"<<std::endl;
        std::cin>> i;
    }
    if(i==-1)
    {
        sd->delete_all();
    }

        */
    return a.exec();
}

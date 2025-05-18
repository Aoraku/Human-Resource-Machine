#include<iostream>
#include<fstream>
#include<windows.h>
#include<stdlib.h>
#include<QQueue>
#include<QStack>
#include<QString>
# define inf 1e9

//#include "selfdefine.cpp"

#include "widget.h"
#include <QObject>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    return a.exec();
}

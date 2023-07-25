#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "TCPServ.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);


    TCPServ::print();

    return QCoreApplication::exec();
}
#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "TCPServ.h"
#include "tcpserver.h"
#include "tcpclient.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);


   // TCPServ::print();
    std::cout << "--- TCP Client ---" << std::endl;
    TcpClient tc;

    std::cout << "--- TCP Server ---" << std::endl;
    TcpServer ts;

    return QCoreApplication::exec();
}
#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "TCPServ.h"
#include "tcpserver.h"
#include "tcpclient.h"
#include <QTime>
void delay()
{
    QTime dieTime= QTime::currentTime().addSecs(1);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    std::cout << "--- TCP Server ---" << std::endl;
    TcpServer ts;
   // TCPServ::print();
    std::cout << "--- TCP Client ---" << std::endl;
    TcpClient tc;

    delay();

    return QCoreApplication::exec();
}
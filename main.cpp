#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include "TCPServ.h"
#include "tcpserver.h"
#include "tcpclient.h"
#include <QTime>

void delay(int i){

    QTime dieTime= QTime::currentTime().addSecs(1);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, i);

}

void tcp(){
    std::cout << "--- TCP Server ---" << std::endl;
    TcpServer ts;

    std::cout << "--- TCP Client ---" << std::endl;
    TcpClient tc;

    delay(10);
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    tcp();

    exit(0);
}
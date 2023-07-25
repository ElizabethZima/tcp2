#ifndef TCP2_TCPSERV_H
#define TCP2_TCPSERV_H
#include "tcpclient.h"
#include "tcpserver.h"
#include "iostream"

class TCPServ {

public:

    static void print(){
        std::cout << "--- TCP Client ---" << std::endl;
        TcpClient tc;

        std::cout << "--- TCP Server ---" << std::endl;
        TcpServer ts;

    }

};


#endif //TCP2_TCPSERV_H

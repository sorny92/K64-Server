/*
 * TcpConnection.cpp
 *
 *  Created on: 8/5/2016
 *      Author: Esteve
 */

#include <TcpConnection.h>

TcpConnection::TcpConnection() {
	// TODO Auto-generated constructor stub

}

TcpConnection::~TcpConnection() {
	// TODO Auto-generated destructor stub
}

//int main(void) {
//	//listening for http GET request
//	while (serverIsListening) {
//		//blocking mode(never timeout)
//		if (svr.accept(client) < 0) {
//			printf("failed to accept connection.\n\r");
//		} else {
//			printf("connection success!\n\rIP: %s\n\r", client.get_address());
//			clientIsConnected = true;
//			led2 = true;
//
//			while (clientIsConnected) {
//				char buffer[1024] = { };
//				switch (client.receive(buffer, 1023)) {
//				case 0:
//					printf("recieved buffer is empty.\n\r");
//					clientIsConnected = false;
//					break;
//				case -1:
//					printf("failed to read data from client.\n\r");
//					clientIsConnected = false;
//					break;
//				default:
//					printf("Recieved Data: %d\n\r\n\r%.*s\n\r", strlen(buffer),
//							strlen(buffer), buffer);
//					if (buffer[0] == 'G' && buffer[1] == 'E'
//							&& buffer[2] == 'T') {
//						printf("GET request incomming.\n\r");
//						//setup http response header & data
//						char echoHeader[256] = { };
//						sprintf(echoHeader,
//								"HTTP/1.1 200 OK\n\rContent-Length: %d\n\rContent-Type: text\n\rConnection: Close\n\r\n\r",
//								strlen(buffer));
//						client.send(echoHeader, strlen(echoHeader));
//						client.send(buffer, strlen(buffer));
//						clientIsConnected = false;
//						printf("echo back done.\n\r");
//					}
//					break;
//				}
//			}
//			printf("close connection.\n\rtcp server is listening...\n\r");
//			client.close();
//			led2 = false;
//		}
//	}
//}

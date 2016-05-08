/*
 * HttpConnection.cpp
 *
 *  Created on: 8/5/2016
 *      Author: Esteve
 */

#include <TcpServer.h>


TcpServer::TcpServer(DigitalOut &led) {
	serverIsListening = false;
	this->led = &led;

	ledTick.attach(this, &TcpServer::ledTickfunc, 0.5);

	eth.init(); //Use DHCP
	eth.connect();
	printf("IP Address is %s\n\r", eth.getIPAddress());

	//setup tcp socket
	if (svr.bind(PORT) < 0) {
		printf("tcp server bind failed.\n\r");
	} else {
		printf("tcp server bind success.\n\r");
		serverIsListening = true;
	}

	if (svr.listen(1) < 0) {
		printf("tcp server listen failed.\n\r");
	} else {
		printf("tcp server is listening...\n\r");
	}
}

TcpServer::~TcpServer() {
	printf("disconnection");
	ledTick.detach();
}

bool TcpServer::isListening() {
	return serverIsListening;
}

void TcpServer::ledTickfunc() {
	if (serverIsListening) {
		(*led) = !(*led);
	} else {
		(*led) = false;
	}
}

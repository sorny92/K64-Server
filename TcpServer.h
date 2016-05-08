/*
 * HttpConnection.h
 *
 *  Created on: 8/5/2016
 *      Author: Esteve
 */

#ifndef TCPSERVER_H_
#define TCPSERVER_H_

#include "mbed.h"
#include "EthernetInterface.h"
#include <stdio.h>
#include <string.h>

#define PORT   80

class TcpServer {
public:
	TcpServer(DigitalOut &led);
	virtual ~TcpServer();

	bool isListening();

private:
	EthernetInterface eth;
	TCPSocketServer svr;
	Ticker ledTick;
	DigitalOut *led;
	bool serverIsListening;

	void ledTickfunc();
};

#endif /* TCPSERVER_H_ */

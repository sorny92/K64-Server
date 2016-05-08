/*
 * TcpConnection.h
 *
 *  Created on: 8/5/2016
 *      Author: Esteve
 */

#ifndef TCPCONNECTION_H_
#define TCPCONNECTION_H_

#include "mbed.h"
#include "EthernetInterface.h"
#include <stdio.h>

class TcpConnection {
public:
	TcpConnection();
	virtual ~TcpConnection();
};

#endif /* TCPCONNECTION_H_ */

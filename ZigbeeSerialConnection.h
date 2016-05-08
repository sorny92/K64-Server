/*
 * ZigbeeSerialConnection.h
 *
 *  Created on: 8/5/2016
 *      Author: Esteve
 */

#ifndef ZIGBEESERIALCONNECTION_H_
#define ZIGBEESERIALCONNECTION_H_
#include "mbed.h"
#include "ZigbeeDevice.h"

class ZigbeeSerialConnection {
public:
	ZigbeeSerialConnection();
	ZigbeeDevice getConnectedDevices();
	virtual ~ZigbeeSerialConnection();

private:
};

#endif /* ZIGBEESERIALCONNECTION_H_ */

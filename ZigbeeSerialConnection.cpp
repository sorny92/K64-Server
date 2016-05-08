/*
 * ZigbeeSerialConnection.cpp
 *
 *  Created on: 8/5/2016
 *      Author: Esteve
 */

#include <ZigbeeSerialConnection.h>
#include "mbed.h"

ZigbeeSerialConnection::ZigbeeSerialConnection() {
	Serial serialConnection(PTC17,PTC16);
	serialConnection.baud(38400);
	serialConnection.format(8, SerialBase::None, 1);
}
ZigbeeSerialConnection::~ZigbeeSerialConnection() {

}


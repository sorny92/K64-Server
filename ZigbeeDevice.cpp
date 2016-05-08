/*
 * ZigbeeDevice.cpp
 *
 *  Created on: 8/5/2016
 *      Author: Esteve
 */

#include <ZigbeeDevice.h>

ZigbeeDevice::ZigbeeDevice() {
	uint16_t id = 1;
}
uint16_t ZigbeeDevice::getId() {
	return id;
}
void ZigbeeDevice::setId(uint16_t id) {
	this->id = id;
}

char* ZigbeeDevice::getType() {
	return type;
}

void ZigbeeDevice::setType(char type[16]) {
	for (int i = 0; i < 16; i++) {
		this->type[i] = type[i];
	}
}

ZigbeeDevice::~ZigbeeDevice() {
}

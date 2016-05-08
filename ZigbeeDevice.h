/*
 * ZigbeeDevice.h
 *
 *  Created on: 8/5/2016
 *      Author: Esteve
 */

#ifndef ZIGBEEDEVICE_H_
#define ZIGBEEDEVICE_H_

#include <stdint.h>

class ZigbeeDevice {

public:
	ZigbeeDevice();
	virtual ~ZigbeeDevice();

	void setId(uint16_t id);
	uint16_t getId();

	void setType(char type[]);
	char* getType();


private:
	uint16_t id;
	char type[16];
};

#endif /* ZIGBEEDEVICE_H_ */

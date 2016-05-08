#include "mbed.h"
#include "TcpServer.h"
#include "ZigbeeDevice.h"
#include "ZigbeeSerialConnection.h"


void buttonSW2Pressed () {
	printf("Button Pressed");
}

int main (void)
{
	DigitalOut led1(LED_BLUE);
	TcpServer server(led1);
	ZigbeeDevice device1;

	InterruptIn button(SW2);
	button.rise(&buttonSW2Pressed);

	while (server.isListening()) {

	}
	return 0;
}

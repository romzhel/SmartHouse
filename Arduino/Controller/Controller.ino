/*
 Name:		Controller.ino
 Created:	12.09.2018 22:08:06
 Author:	Ray
*/

#include "lib/SmartHouse.h"

#define pln Serial.println

void setup() {
	Serial.begin(115200);
	pln("begin");

	Controller controller;
	controller.addFunction(1, new Button());
	

}


void loop() {
  
}

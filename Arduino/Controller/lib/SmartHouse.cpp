//SmartHouse.cpp
//
//Library file

#include "SmartHouse.h"

#define pln Serial.println
#define p Serial.print


Function::Function() {}
String Function::getDescription() {
	return this->description;
}

Button::Button(){
	description = "button function";
}

Controller::Controller() {
	for (int i = 0; i < FUNCTION_AMOUNT; i++) {
		functions[i] = 0;
		pln(i);
	}
}

void Controller::addFunction(int pinNumber, Function* function) {
	functions[pinNumber] = function;
	pln(functions[pinNumber]->getDescription());
}
//SmartHouse.h
//
//Library header file

#ifndef _SMARTHOUSE_h
#define _SMARTHOUSE_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

class Function {
public:
	Function();
	String getDescription();

protected:
	String description = "function template";

};

class Button : public Function {
public:
	Button();

protected:

};





class Controller {
public:
	Controller();
	void addFunction(int, Function*);

private:
	static const int FUNCTION_AMOUNT = 10;
	Function* functions[FUNCTION_AMOUNT];


};







#endif
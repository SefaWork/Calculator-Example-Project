#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "screen.h"
#include "keypad.h"

class Calculator {
	public:
		void run();
		
		void promptOperation();
		void promptNumbers();
	private:
		int operation;
		int num1;
		int num2;

		Screen screen;
		Keypad keypad;
};

#endif
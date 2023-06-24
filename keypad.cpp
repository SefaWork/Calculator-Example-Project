#include "keypad.h"
#include <iostream>

int Keypad::getInput() {
	int input;
	std::cin >> input;
	return input;
}
#include "calculator.h"
#include <iostream>
#include <string>

void Calculator::run() {
    screen.output("Starting calculator...");

    while(true) {
        promptOperation();
        
        if(operation == 0) break;
        else if(operation > 4 || operation < 0) screen.output("Invalid operation.");
        else {
            promptNumbers();

            switch (operation)
            {
                case 1: {
                    int additionResult = num1 + num2;
                    screen.output("The result is " + std::to_string(additionResult));
                    break;
                }
                case 2: {
                    int subResult = num1 + num2;
                    screen.output("The result is " + std::to_string(subResult));
                    break;
                }
                case 3: {
                    int multiplicationResult = num1 * num2;
                    screen.output("The result is " + std::to_string(multiplicationResult));
                    break;
                }
                case 4: {
                    float divisionResult = (float)((float)num1 / (float)num2);
                    screen.output("The result is " + std::to_string(divisionResult));
                    break;
                }
                default:
                    break;
            }
        }
    }

    screen.output("Shutting down calculator...");
}

void Calculator::promptOperation() {
    screen.output("\n\nSelect an operation:\n\t0- CANCEL\n1- ADD (+)\t\t2- SUB (-)\n3- MULT (x)\t\t4- DIV (/)\n\nPlease make a selection(1-4): ");
    operation = keypad.getInput();
    screen.output("\n");
}

void Calculator::promptNumbers() {
    screen.output("\nEnter the first number: ");
    num1 = keypad.getInput();

    screen.output("\nEnter the second number: ");
    num2 = keypad.getInput();

    screen.output("\n");
}
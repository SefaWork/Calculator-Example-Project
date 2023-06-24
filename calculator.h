#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
	public:
		void run();
		
		void promptOperation();
		void promptNumbers();
		void doCalculation(char, int, int);
		char getOperationSign(int);
	private:
		int operation;
		int num1;
		int num2;
};

#endif
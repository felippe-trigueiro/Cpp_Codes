//This program takes two integer numbers and sum them
//To do this, the program uses two function, the first one receive the integer and return it. The second one receive
//an integer and print it with the phrase "The answer is:". This function is used to print the result.

#include <iostream>
#include "io.h"

int main() 
{
	int num1 = 0;
	int num2 = 0;

	num1 = readNumber();
	num2 = readNumber();

	writeNumber(num1 + num2);
	
	system("pause");

	return 0;
}
#include <iostream>

int readNumber()
{
	int number = 0;
	std::cin >> number;

	return number;
}

void writeNumber(int numberPrint)
{
	std::cout << "The answer is: " << numberPrint << std::endl;
}
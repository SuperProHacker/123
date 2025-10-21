#include <iostream>

int main(){
	unsigned int number = 0;
	unsigned int sum = 0;
	unsigned int prod = 0;
	std::cout << "Input number: ";
	do {
	sum += number %10;
	prod += number %10;
	number /=10;
	}while (number != 0 );
	std::cout << sum << ", "<< prod << std::endl;}


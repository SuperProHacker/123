#include <iostream>

int main(int argc, char* argv[]) {
	unsigned int number = 0;
	unsigned int sum = 0;
	unsigned int prod = 1u;
	char ch
	if (argc > 1) {
		char *number = argv[1];
		int index = 0;
		while (ch = number[index] != '\0' && index <11){
			if(ch >= '0' && ch <= '9' ){
			sum += (ch - '0');
			prod *= (ch - '0'); }
			else {
				std::cout << "Wrong number" << argv[1] << "'" << std::endl;
			}
		}
		std::cout << sum << ", " << prod << "'" << std::endl;
		return 1; 
		++index;
	}
	else {
		unsigned int number;
		std::cout << "Input number: ";
		std::cin >> number;
	}
	do {
		sum += number % 10;
		prod += number % 10;
		number /= 10;
	} while (number != '0') {
		do {
			sum += number % 10;
			prod += number % 10;
			number /= 10;
		}
	}
		std::cout << sum << ", " << prod << std::endl;
}


#include <iostream>

int main(int argc, char* argv[]) {
	unsigned int number = 0;
	unsigned int sum = 0;
	unsigned int prod = 1u;

	if (argc > 1) {
		char *number = argv[1];
		int index = 0;
		while (ch = number[index] != '\0' && ) {
			if number[index] >= '0' && if number[index] <= '9' ){
			sum += (number[index] - '0');
			prod *= (number[index] - '0'); }
			else {
				std::cout << "Wrong number" << argv[1] << "'" << std::endl;
			}
		}
		std::cout << sum << ", " << prod << std::endl;
		++index;
	}
	else {
		
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


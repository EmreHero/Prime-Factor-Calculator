#include <iostream>

main() {
	long long int number;
	int exponent = 0;
	
	std::cout << "Enter a number to find its prime factors: ";
	std::cin >> number;
	
	for(int divisor = 2; ; divisor++) {
		while(number % divisor == 0) {
			number /= divisor;
			exponent++;
		}
		
		if (exponent != 0) {
			std::cout << divisor << "^" << exponent;
		}

		if (number != 1 && exponent != 0) {
			std::cout << " * ";
		}
		
		if(number == 1) {
			std::cout << std::endl;
			break;
		}
		
		exponent = 0;
	}
	
	system("Pause");
}

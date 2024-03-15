#include <iostream>

int main() {
	long long int number = 0; // Input
	int exponent = 0;
	
	while(true) { // Controling if the given number is positive.
		std::cout << "Enter a number to find its prime factors: ";
		std::cin >> number;
		
		if (number > 0) break;
		else {
			std::cout << "The number must be positive.\n\n";
		}
	}
	
	// Starting from 2, the codes below tries to divide the number if the remainder equals zero.
	// Stores how many times the number divided whitout remainder zero to exponent variable.
	// Then prints the divider and exponent. The number variable will remain its divided version.
	// Then increases the disivor and does the same operations until the number equals one.
	for(int divisor = 2; number != 1; divisor++) {
		
		while(number % divisor == 0) {
			number /= divisor;
			exponent++;
		}
		
		// if the divisor can't divide the number without remainder anymore
		if (exponent != 0) {
			std::cout << divisor << "^" << exponent;
			exponent = 0;
		}
		
		// if there is uncalculated prime factors left
		if (number != 1 && exponent != 0) std::cout << " * ";
	}
	
	std::cout << std::endl;
	system("Pause");
}

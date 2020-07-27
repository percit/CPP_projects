#include <iostream>
//Collatz Conjecture - Start with a number n > 1. 
//Find the number of steps it takes to reach one using the following process: If n is even, divide it by 2. If n is odd, multiply it by 3 and add 1.
int main() {
	auto n = 0, number = 0;
	std::cout << "Place your number" << std::endl;
	std::cin >> n;
	if (n < 1) {
		std::cout << "Number must be greater than 1" << std::endl;
	}
	else {
		while (n != 1) {
			if (n % 2) {
				n /= 2;
				number++;
			}
			else {
				n = 3 * n + 1;
				number++;
			}
		}
	}
	std::cout << number;
	return 0;
}

#include <iostream>

int main()
{
    int number = 0;
    int n = 2, temp = 0; // first number to try
    std::cout << "Enter the number that you want to factorize to primes" << std::endl; //can you say that?
    std::cin >> number;
    while (number != 1) {
        if (number % n == 0) {
            std::cout << n << ' ';
            number = number / n;
        }
        n++;
    }
    return 0;
}

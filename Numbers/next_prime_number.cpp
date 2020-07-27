#include <iostream>

int main()
{
    int number = 0;
    int n = 2; 
    std::cout << "Enter the number" << std::endl; 
    std::cin >> number;
    ++number;
    while (n != number) {
        if (number % n == 0) {
            ++number;
            n = 2;
        }
        else
            ++n;
    }
    std::cout << "Next prime number is " << number;
    return 0;
}

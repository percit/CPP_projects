#include <iostream>
#include <iomanip>
int main()
{
    int digit = 0;
    const double PI = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
    std::cout << "How many decimal places do you want to have PI, the max is 100" << std::endl;
    std::cin >> digit;
    if (digit < 100) {
        std::cout << std::setprecision(digit) << PI << std::endl;
    }

    return 0;
}

#include <iostream>
#include <string>
#include <math.h>

int main()
{
    int choice = 0;
    std::string number;
    int value = 0;
    int temp = 0;
    std::cout << "If you want to convert from binary to decimal press 1, decimal to binary press 2" << std::endl;
    std::cin >> choice;
    switch (choice) {
    case 1: 
        std::cout << "Enter your binary number" << std::endl;
        std::cin >> number;
        temp = number.size() - 1;
        for (int i = 0; i < temp; ++i){
            if (number.at(i) == '1') {
                value += pow(2, temp - i);
            }
        }
        std::cout << "Your number is " << value << std::endl;
        break;
    case 2:
        std::cout << "rozwiaze to pozniej, nie mam pomyslu na ten moment" << std::endl;

    }
    

    return 0;
}

#include <iostream>
#include <iomanip>
#include <vector>

std::ostream& operator<<(std::ostream& s, const std::vector<int>& v) {
    int temp = v.size();
    s << '[';
    for (int i = 0; i < temp; ++i) {
        s << v.at(i) << ',';
    }
    s << ']';
    return s;
}



int main()
{
    int number = 0;
    std::cout << "Enter the amout of numbers you want to have your Fibonacci sequence to" << std::endl;
    std::cin >> number;
    std::vector<int> fibonacci = { 0, 1 };
    int temp1 = 0, temp2 = 0, temp3 = 0;
    while (fibonacci.size() != number) {
        temp1 = fibonacci.at(fibonacci.size() - 1);
        temp2 = fibonacci.at(fibonacci.size() - 2);
        temp3 = temp1 + temp2;
        //fibonacci.push_back(temp1);
        //fibonacci.push_back(temp2);
        fibonacci.push_back(temp3);
    }
    std::cout << fibonacci;
    return 0;
}

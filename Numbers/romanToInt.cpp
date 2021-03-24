//https://leetcode.com/problems/roman-to-integer/submissions/
#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <stdexcept>

std::ostream& operator<<(std::ostream& stream, std::vector<char> v) {
    for (int i = 0; i < v.size(); ++i) {
        stream << v.at(i);
    }
    return stream;
}

int romanToInt(std::string s) {
    std::vector<char> data(s.begin(), s.end());
    std::cout << data;
    int value = 0;
    int i = 0;
    for (i; i < data.size(); ++i) {
        switch (data.at(i)) {
            case 'M':
                value += 1000;
                break;
            case 'D':
                value += 500;
                break;
            case 'C':
                try {
                    if (data.at(i + 1) == 'D' || data.at(i + 1) == 'M') {
                        value -= 100;
                    } else {
                        value += 100;
                    }
                }
                catch (const std::out_of_range& oor) {
                    //std::cerr << "out of range" << oor.what() << std::endl;
                }
                break;
            case 'L':
                value += 50;
                break;
            case 'X':
                try {
                    if (data.at(i + 1) == 'L' || data.at(i + 1) == 'C') {
                        value -= 10;
                    } else {
                        value += 10;
                    }
                    std::cout << "i: " << i;
                } catch (const std::out_of_range& oor) {
                    std::cerr << "out of range" << oor.what() << std::endl;
                }
                break;
            case 'V':
                value += 5;
                break;
            case 'I':
                try {
                    if (data.at(i + 1) == 'V' || data.at(i + 1) == 'X') {
                        value -= 1;

                    } else {
                        value += 1;
                    }
                }
                catch (const std::out_of_range& oor) {
                    //std::cerr << "out of range" << oor.what() << std::endl;
                }
                break;
            default:
                break;
        }
    }

    return value;
}


int main() {
    std::cout << romanToInt("IX");

}

#include <iostream>
#include <string>

bool palindrome(const std::string& s) {
	if (s.size() % 2 == 0) {
		for (int i = 0; i < s.size() / 2; ++i) {
			if (s[i] == s[s.size() - i]) {
				std::cout << "it's a palindrome";
				return true;
			}
			else {
				std::cout << "it's not a palindrome";
				return false;
			}
		}
	}
	
	else {
		for (int i = 0; i < (s.size()-1) / 2; ++i) {
			if (s[i] == s[s.size() - i-1]) {
				std::cout << "it's a palindrome";
				return true;
			}
			else {
				std::cout << "it's not a palindrome";
				return false;
			}
		}
	}
	
}

int main() {
	palindrome("abcba");
	return 0;
}

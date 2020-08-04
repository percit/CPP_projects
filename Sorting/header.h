#pragma once
#include <iostream>
#include <stdexcept>
#include <vector>

std::ostream& operator<<(std::ostream& os, std::vector<int> v) {
	os << '[';
	for (auto i : v) {
		os << i << ' ';
	}
	os << ']';
	return os;
}
std::vector<int> swap(std::vector<int>& v, const int& a, const int& b) {
	;
	int temp = 0;
	temp = v.at(b);
	v.at(b) = v.at(a);
	v.at(a) = temp;
	return v;
}

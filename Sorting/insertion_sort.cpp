#include <iostream>
#include <stdexcept>
#include <vector>

std::ostream& operator<<(std::ostream& os, std::vector<int> v){
	os << '[';
	for (auto i : v) {
		os << i << ' ';
	}
	os << ']';
	return os;
}
std::vector<int> swap(std::vector<int>& v, const int& a, const int& b) {;
	int temp = 0;
	temp = v.at(b);
	v.at(b) = v.at(a);
	v.at(a) = temp;
	return v;
}
std::vector<int> insertion_sort(std::vector<int>& v) {
	int i = 0;
	try {
		for (i = 0; i < (v.size() - 1); ++i) {
			if (v.at(i) > v.at(i + 1)) {	
				swap(v, i, i + 1);
				for(int j = i; j > 0; --j){
					if (v.at(j - 1) > v.at(j)) {
						swap(v, j -1, j);
					}
				}
			}
		}
	}
	catch (const std::out_of_range& oor) {
		std::cerr << "Out of range" << oor.what() << ' ' << i;
	}
	return v;
}




int main()
{
	std::vector<int> v = {10, 4, 2, 7, 6, 3 };
	insertion_sort(v);
	std::cout << v;
}

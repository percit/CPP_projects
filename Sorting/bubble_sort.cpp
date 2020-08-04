#include "header.h"

std::vector<int> bubble_sort(std::vector<int>& v) {
	for (int i = 0; i < v.size() - 1; ++i) {
		for (int j = 0; j < v.size() - i - 1; ++j) {
			if (v.at(j) > v.at(j + 1)) {
				swap(v, j, j + 1);
			}
		}
	}
	return v;
}


int main()
{
	std::vector<int> v = {10, 4, 2, 7, 6, 3 };
	bubble_sort(v);
	std::cout << v;

}

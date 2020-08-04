#include "header.h"
int partition(std::vector<int>& v, int low, int high) {
	int pivot = high;
	int i = low - 1;
	for (int j = low; j < pivot; j++) {
		if (v.at(j) <= v.at(pivot)) {
			i++;
			swap(v, i, j);
		}
	}
	swap(v, i + 1, high);
	
	return (i + 1);
}

std::vector<int> quick_sort(std::vector<int>& v, int low, int high) {
	
	if (low < high) {
		int pivot = partition(v, low, high);

		quick_sort(v, low, pivot - 1);
		quick_sort(v, pivot + 1, high);
	}
	return v;
}


int main()
{
	std::vector<int> v = {10, 4, 2, 7, 6, 3 };
	quick_sort(v, 0, v.size()-1);
	std::cout << v;

}

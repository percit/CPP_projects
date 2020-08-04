#include "header.h"
int biggest(std::vector<int>& v) {
	int max = v.at(0);
	int n = 0;
	for (int i = 0; i < v.size() - 1; ++i) {
		if (max < v.at(i)) {
			max = v.at(i);
			n = i;
		}
	}
	return n;
}

std::vector<int> heap_sort(std::vector<int>& v) {
	int temp = v.size() - 1;
	int i = 0, j = 2;
	swap(v, 0, biggest(v));
	while (temp != 1) {
		while (j != temp) {		
			if (v.at(i) < v.at(j)) {
				swap(v, i, j);
			}
			++i;
			++j;
		}
		swap(v, 0, temp);
		temp--; 
		i = 0;
		j = 1;
	}
	return v;
}



int main()
{
	std::vector<int> v = {10, 4, 2, 7, 6, 3 };
	heap_sort(v);
	std::cout << v;

}

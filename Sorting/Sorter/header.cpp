#include "header.h"
//template std::ostream& operator<<(std::ostream& os, std::vector<int>& v);


template <typename T>
std::vector<T> swap(std::vector<int>& v, const T& a, const T& b) {
	int temp = 0;
	temp = v.at(b);
	v.at(b) = v.at(a);
	v.at(a) = temp;
	return v;
}
template <typename T>
std::vector<T> bubble_sort(std::vector<T>& v) {
	for (int i = 0; i < v.size() - 1; ++i) {
		for (int j = 0; j < v.size() - i - 1; ++j) {
			if (v.at(j) > v.at(j + 1)) {
				swap(v, j, j + 1);
			}
		}
	}
	return v;
}
template <typename T>
int biggest(std::vector<T>& v) {
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
template <typename T>
std::vector<T> heap_sort(std::vector<T>& v) {
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
template <typename T>
std::vector<T> insertion_sort(std::vector<T>& v) {
	int i = 0;
	try {
		for (i = 0; i < (v.size() - 1); ++i) {
			if (v.at(i) > v.at(i + 1)) {
				swap(v, i, i + 1);
				for (int j = i; j > 0; --j) {
					if (v.at(j - 1) > v.at(j)) {
						swap(v, j - 1, j);
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
template <typename T>
int partition(std::vector<T>& v, int low, int high) {
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
template <typename T>
std::vector<T> quick_sort(std::vector<T>& v, int low, int high) {

	if (low < high) {
		int pivot = partition(v, low, high);

		quick_sort(v, low, pivot - 1);
		quick_sort(v, pivot + 1, high);
	}
	return v;
}

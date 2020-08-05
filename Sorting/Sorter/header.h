#pragma once
#include <iostream>
#include <stdexcept>
#include <vector>
template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T>& v) {
	os << '[';
	for (auto i : v) {
		os << i << ' ';
	}
	os << ']';
	return os;
}
template <typename T>
std::vector<T> swap(std::vector<int>& v, const T& a, const T& b);
//bubble sort
template <typename T>
std::vector<T> bubble_sort(std::vector<T>& v);
//heap sort
template <typename T>
int biggest(std::vector<T>& v);
template <typename T>
std::vector<T> heap_sort(std::vector<T>& v);
//insertion sort
template <typename T>
std::vector<T> insertion_sort(std::vector<T>& v);
//quick sort
template <typename T>
int partition(std::vector<T>& v, int low, int high);
template <typename T>
std::vector<int> quick_sort(std::vector<T>& v, int low, int high);


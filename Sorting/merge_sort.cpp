//DOESN'T WORK FOR NOW, STACK OVERFLOW, REPAIR LATER


#include "header.h"

void merge(std::vector<int>& v, int left, int middle, int right) {
	int i, j, k;
	int n1 = middle - left + 1;
	int n2 = right - middle;
	std::vector<int> temp1, temp2;
	try {
		for (i = 0; i < n1; ++i) {	//Copy data to temp arrays
			temp1.at(i) = v.at(left + i);
		}
		for (j = 0; j < n2; ++j) {
			temp2.at(j) = v.at(middle + 1 + j);
		}
	}
	catch (std::out_of_range& oof) {
		std::cerr << oof.what();
	}
	std::cout << temp1 << temp2;
	i = 0;
	j = 0;
	k = 0;
	while (i < n1 && j < n2) {	//Merge the temp arrays back into array[l..r]
		if (temp1.at(i) <= temp2.at(j)) {
			v.at(k) = temp1.at(i);
			++i;
		}
		else {
			v.at(k) = temp2.at(j);
			++j;
		}
		++k;
	}
	while (i < n1) {//Copy the remaining elements of L[], if there are any
		v.at(k) = temp1.at(i);
		++i;
		++k;
	}
	while (j < n2) {// Copy the remaining elements of R[], if there are any 
		v.at(k) = temp2.at(j);
		++j;
		++k;
	}
}
std::vector<int> merge_sort(std::vector<int>& v, int left, int right) {
	int middle = 0;
	try {
		if (left < right) {
			middle = left + (right - 1) / 2;
			//std::cout << middle << ' ';
			merge_sort(v, left, middle);
			merge_sort(v, middle + 1, right);
			//std::cout << v << std::endl;
			merge(v, left, middle, right);
		}
	}
	catch (std::out_of_range& oof) {
		std::cerr << oof.what();
	}
	return v;
}

int main()
{
	std::vector<int> v = {10, 4, 2, 7, 6, 3 };
	merge_sort(v, 0, 3);
	std::cout << v;

}

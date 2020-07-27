#include <iostream>
#include <vector>
#include <math.h>



void fill(std::vector<int>& v, const int& a) {
	for (int i = 0; i < a - 1; ++i) {		//cause it only have to give value up to 'a'
		v.push_back(i + 2);				//cause we only need values 2 and bigger
	}
}

std::ostream& operator<<(std::ostream& s, const std::vector<int>& a) {
	int temp = a.size();
	for (int i = 0; i < temp; ++i) {
		s << a.at(i) << ' ';
	}
	return s;
}
void sieve(std::vector<int>& v, const int& n) {
	int factor = 2;
	int place = 0;
	//int temp = v.size();
	int i = 1;
	try {
		while (factor != sqrt(n) && place != v.size()) {	//to the sqrt, because it is so in this sieve, for example max for n = 100, 
						//then if we give 11 > sqrt(100) it only would change 121 or greater

				for (i; i < v.size(); i++) {
					if (v.at(i) % factor == 0) {//out of range exception, haven't resolved it
						v.erase(v.begin() + i);	//I delete everything that is divisible with this factor
						//--i;					//if I delete sth, then the place of next value moves
					}
				}
				factor = v.at(place);			//here I change the factor and then it goes into loop again
				place++;						//this will change the place for the next for loop
				i = place;
			
		}
	}
	catch (const std::out_of_range & oor) {
		std::cerr << "Out of Range error: " << oor.what() << ' ' << i << '\n';
	}
}

int main() {
	auto n = 0;
	std::vector<int> v;
	std::cout << "Place your number up to which you want to find primes" << std::endl;
	std::cin >> n;
	v.reserve(n);
	if (n < 1) {
		std::cout << "Number must be greater than 1" << std::endl;
	}
	else {
		fill(v, n);
		sieve(v, n);
		std::cout << "All primes are: "<< v;
	}
	return 0;
}

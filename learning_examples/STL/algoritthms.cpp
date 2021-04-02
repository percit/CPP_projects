/*
#include <algorithm> // std::min_element and std::max_element
#include <iostream>
#include <list>
#include <numeric> // std::iota
 
int main()
{
    std::list<int> li(6);
    // Fill li with numbers starting at 0.this is done with iota
    std::iota(li.begin(), li.end(), 0);
 
    std::cout << *std::min_element(li.begin(), li.end()) << ' '
              << *std::max_element(li.begin(), li.end()) << '\n';
	
    return 0;
}

prints 0 5

*/

/*
#include <algorithm>
#include <iostream>
#include <list>
#include <numeric>
 
int main()
{
    std::list<int> li(6);
    std::iota(li.begin(), li.end(), 0);
 
    // Find the value 3 in the list
    auto it{ find(li.begin(), li.end(), 3) };
    
    // Insert 8 right before 3.
    li.insert(it, 8);
 
    for (int i : li) // for loop with iterators
        std::cout << i << ' ';
    	
    std::cout << '\n';
 
    return 0;
}
When a searching algorithm doesn’t find what it was looking for, it returns the end iterator.
if (it == li.end())
{
  std::cout << "3 was not found\n";
}

*/

/*
#include <iostream>
#include <vector>
#include <algorithm>
 
int main()
{
    std::vector<int> vect{ 7, -3, 6, 2, -5, 0, 4 };
 
    // sort the vector
    std::sort(vect.begin(), vect.end());
 
    for (int i : vect)
    {
        std::cout << i << ' ';
    }
 
    std::cout << '\n';
 
    // reverse the vector
    std::reverse(vect.begin(), vect.end());
 
    for (int i : vect)
    {
        std::cout << i << ' ';
    }
	
    std::cout << '\n';
 
    return 0;
}


*/

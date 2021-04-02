//std::vector<const Teacher&> m_teachers{}; // Illegal because references need to be initialised and cannot be changed
//so how can we fix that and have "list of references"

#include <functional> // std::reference_wrapper
#include <iostream>
#include <vector>
#include <string>
 
int main()
{
  std::string tom{ "Tom" };
  std::string berta{ "Berta" };
 //we make vector of std::string references
  std::vector<std::reference_wrapper<std::string>> names{ tom, berta }; //we make this list and put "tom" and "berta"
 
  std::string jim{ "Jim" };
 
  names.push_back(jim); 
 
  for (auto name : names)
  {
    // Use the get() member function to get the referenced string.
    name.get() += " Beam"; //we get the name Jim(only can be used with get()) and add "beam" to it
  }
 
  std::cout << jim << '\n'; // Jim Beam, because the surname was added in the for loop above
 
  return 0;
}

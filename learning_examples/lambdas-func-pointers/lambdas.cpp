
#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>
 
int main()
{
  constexpr std::array<std::string_view, 4> arr{ "apple", "banana", "walnut", "lemon" };
 
  // Define the function right where we use it.
  const auto found{ std::find_if(arr.begin(), arr.end(),
                       	[](std::string_view str) // here's our lambda, no capture clause, third argument here is 
                                 //function pointer so out lambda
                       	{
                         	return (str.find("nut") != std::string_view::npos);//if finds “nut” it gives index,
                         //if not, it gives large number
                       	}) };
 
  if (found == arr.end())
  {
    std::cout << "No nuts\n";
  }
  else
  {
    std::cout << "Found " << *found << '\n';
  }
 
  return 0;
}

fajny kod do szukania jakiegos tekstu uzywajacy lambde, czyli syntax: []() {}; 
to ze dalismy jej kod tam gdzie potrzebowalismy, to sie nazywa function literal

// Bad: We have to read the lambda to understand what's happening.
return std::all_of(array.begin(), array.end(), [](int i){ return ((i % 2) == 0); });
to jest function literal, ale jest brzydki jak ja



8
9
// Good: Instead, we can store the lambda in a named variable and pass it to the function.
auto isEven{
  [](int i)
  {
    return ((i % 2) == 0);
  }
};
 
return std::all_of(array.begin(), array.end(), isEven);

tak dobrze, tak jak pan jezus nakazal
te wycinki kodu sprawdzaja czy wszelkie elementy tego array’a sa parzyste



1
2
3
4
5
6
7
8
9
10
11
#include <functional>
 
int main()
{

   // Using auto. Stores the lambda with its real type.
  auto addNumbers3{
    [](double a, double b) {
      return (a + b);
    }
  };
 
  addNumbers3(5, 6);
 
 
 
  // Using std::function. The lambda could have a non-empty capture clause (Next lesson).
  std::function addNumbers2{ // note: pre-C++17, use std::function<double(double, double)> instead
    [](double a, double b) {
      return (a + b);
    }
  };
 
  addNumbers2(3, 4);


 
   // A regular function pointer. Only works with an empty capture clause.
  double (*addNumbers1)(double, double){
    [](double a, double b) {
      return (a + b);
    }
  };
 
  addNumbers1(1, 2);
 
  return 0;
}

trzy funkcje lambdopodobne

#include <cassert> // for assert()
#include <cmath> // for std::sqrt
#include <iostream>
 


//static_assert(condition, diagnostic_message)  mozna jeszcze tak zrobic, pamietaj ze to nie jest error handling, tylko rzecz do debugowania bardziej


double calculateTimeUntilObjectHitsGround(double initialHeight, double gravity)
{
  assert(gravity > 0.0); // The object won't reach the ground unless there is positive gravity.
 
  if (initialHeight <= 0.0)
  {
    // The object is already on the ground. Or buried.
    return 0.0;
  }
 
  return std::sqrt((2.0 * initialHeight) / gravity);
}
 
int main()
{
  std::cout << "Took " << calculateTimeUntilObjectHitsGround(100.0, -9.8) << " second(s)\n";
 
  return 0;
}

//this will give error like this (bc argument gravity < 0):
//dropsimulator: src/main.cpp:6: double calculateTimeUntilObjectHitsGround(double, double): Assertion `gravity > 0.0' failed.

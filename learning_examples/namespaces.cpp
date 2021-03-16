#include <iostream>
namespace foo // define a namespace named foo
{
    // This doSomething() belongs to namespace foo
    int doSomething(int x, int y)
    {
        return x + y;
    }
}
 
namespace foo::goo
{
    int add(int x, int y)
    {
        return x + y;
    }
}
 
int main()
{
  std::cout << foo::doSomething(1, 2);
  
  namespace boo = foo::goo; // boo now refers to foo::goo, this is an alias
  std::cout << boo::add(1, 2) << '\n'; // This is really foo::goo::add()
 
    return 0;
} // The boo alias ends here

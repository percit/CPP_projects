
#include <iostream>
#include <stdexcept>
 
int main()
{
	try
	{
		throw std::runtime_error("Bad things happened");
	}
	// This handler will catch std::exception and all the derived exceptions too
	catch (const std::exception &exception)
	{
		std::cerr << "Standard exception: " << exception.what() << '\n';
	}
 
	return 0;
}

std::exception


//throwing exception in Child class, “catch (...) with catch “throw 1” from class A

#include <iostream>
 
class A
{
private:
	int m_x;
public:
	A(int x) : m_x{x}
	{
		if (x <= 0)
			throw 1;
	}
};
 
class B : public A
{
public:
	B(int x) try : A{x} // note addition of try keyword here
	{
	}
	catch (...) // note this is at same level of indentation as the function itself
	{
                // Exceptions from member initializer list or constructor body are caught here
 
                std::cerr << "Exception caught\n";
 
                // If an exception isn't explicitly thrown here, the current exception will be implicitly rethrown
	}
};
 
int main()
{
	try
	{
		B b{0};
	}
	catch (int)
	{
		std::cout << "Oops\n";
	}
}


pamietaj, ze nie mozemy zostawic w try czegos co catch moze zatrzymac, np close file czy delete ptr musi byc w catch

1
2
3
4
5
try
{
    openFile(filename);
    writeFile(filename, data);
    closeFile(filename);
}
catch (const FileException &exception)
{
    // Make sure file is closed
    closeFile(filename);
    // Then write error
    std::cerr << "Failed to write to file: " << exception.what() << '\n';
}




void doSomething() noexcept; // this function is non-throwing


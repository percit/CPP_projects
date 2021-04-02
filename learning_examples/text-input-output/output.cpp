Formatting
There are two ways to change the formatting options: flags, and manipulators. You can think of flags as boolean variables that can be turned on and off. Manipulators are objects placed in a stream that affect the way things are input and output.
To switch a flag on, use the setf() function, with the appropriate flag as a parameter. For example, by default, C++ does not print a + sign in front of positive numbers. However, by using the std::ios::showpos flag, we can change this behavior:
1
2
std::cout.setf(std::ios::showpos); // turn on the std::ios::showpos flag
std::cout << 27 << '\n';

This results in the following output:
+27

std::cout.unsetf(std::ios::showpos); // turn off the std::ios::showpos flag
std::cout << 28 << '\n';

 


std::cout << std::hex << 27 << '\n'; // print 27 in hex
std::cout << 28 << '\n'; // we're still in hex
std::cout << std::dec << 29 << '\n'; // back to decimal

to sa manipulatory, sa madrzejsze od flag



1
2
3
4
5
6
7
std::string sSource{ "sphinx of black quartz, judge my vow" };
 
char szBuf[20];
int nLength{ static_cast<int>(sSource.copy(szBuf, 5, 10)) };
szBuf[nLength] = '\0';  // Make sure we terminate the string in the buffer
 
std::cout << szBuf << '\n';

Output:
black
kopiowanie tekstu, sprawdzamy jego dlugosc i jednoczesnie kopiujemy w jednej linii, zeby dodac na koniec \0 tak jak pan bog nakazal






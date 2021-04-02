
#include <string>
#include <iostream>
 
int main()
{
    std::string strBuf;
    std::getline(std::cin, strBuf);
    std::cout << strBuf << '\n';
 
    return 0;
}

 
jak chcemy uzyc wejscia i nie stracic whitespacesow (spacji/enterow)

A few more useful istream functions
There are a few more useful input functions that you might want to make use of:
ignore() discards the first character in the stream.
ignore(int nCount) discards the first nCount characters.
peek() allows you to read a character from the stream without removing it from the stream.
unget() returns the last character read back into the stream so it can be read again by the next call.
putback(char ch) allows you to put a character of your choice back into the stream to be read by the next call.


//basicowa template class, pamietaj ze klasa i body funkcji ma byc wjednym pliku, najlepiej .h
#include <iostream>
 
template <class T, int size> // size is the non-type parameter
class StaticArray
{
private:
    // The non-type parameter controls the size of the array
    T m_array[size];
 
public:
    T* getArray();
	
    T& operator[](int index)
    {
        return m_array[index];
    }
};
 
// Showing how a function for a class with a non-type parameter is defined outside of the class
template <class T, int size>
T* StaticArray<T, size>::getArray()
{
    return m_array;
}
 
int main()
{
    // declare an integer array with room for 12 integers
    StaticArray<int, 12> intArray;
 return 0;
}

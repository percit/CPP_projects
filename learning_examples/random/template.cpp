#include <iostream>
template<typename T> 
void Print(T value){
	std::cout << value << std::endl;
}
template<typename T, int N>
class Array{
private:
T m_Array[N];
public:
	int GetSize() const {return N;}
};
int main(){
    //i wywolujemy np:
    Print<int>(5); //albo 
    Print(5);
	Array<int, 5> array;
	std::cout<< array.GetSize() << std::endl;
    return 0;
}

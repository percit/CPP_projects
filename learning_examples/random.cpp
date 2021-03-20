#include <iostream>
#include <string>
#include <vector>
//to jest to samo co, ale ta wersja na samym dole nie ma niepotrzebnych alokacji
std::string name = "Yan Chernikov";
std::string firstName = name.substr(0,3);
std::string_view FirstName(name.c_str(), 3);

//jak chcemy sprawdzic gdzie alokuje sie nowa pamiec:
void* operator new(size_t size){
    std::cout << "allocating" << size << " bytes" << std::endl;
    return malloc(size);
}
//przeciazenia operatora wyjscia: 
 std::ostream& operator<<(std::ostream& stream, const std::vector<int>& v){
     for(int i = 0; i < v.size(); ++i){
	stream << v.at(i) << std::endl;
     }
	return stream;
}

/*
lvalue to a, rvalue to 10 (lvalue left value, rvalue right value), oznacza 
ze lvalue to cos czemu mozna przypisac wartosc, a rvalue juz nie
*/

/*jak jest jedna funkcja rzadko uzywana, np raz to dajemy przed funkcja “inline”*/
/*ternary operation to “a > b ? 10 : 5” czyli jak a > b to 10, inaczej to bedzie 5*/
/*
jak damy “explicit” przed konstruktorem to nie pozwoli na zadne niejawne konwersje 
i trzeba uzywac normalnych inicjalizacji tak jak pan bog nakazal
*/

//podczas drukowanie czegos na konsole(i tylko do tego) uzywaj std::stringview, zamiast std::string, zeby oszczedzic ilosc kopii, ktore robisz

int max(int x, int y) 
{
    int max{ (x > y) ? x : y }; // tak latwo mozemy sprawdzic co jest wieksze
 
    return max;
} 
int main(){

    return 0;
}

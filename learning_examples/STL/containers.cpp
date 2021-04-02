#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <tuple>

//STRING
//jak chcemy cos string skopiowac do drugiego to uzywamy 
//memcpy(ostateczny string, poczatkowy string, rozmiar), albo takie same “strcpy”, ktory ma w sobie \0
//wstring to taki string, który moze miec w sobie nawet jakies dziwne znaki typu “*&*&&^*” itp

std::array<int, 5> another; //i to dziala jak array, ale ma metody typu size() itp
//jak chcemy cos posortowac uzywamy std::sort(array.begin(), array.end());

std::tuple<int, int> foo_tuple() 		
{//to jest tuple, mozna tu przechowywac dane w jakich parach (2, 3 lub wiecej, moga byc dowolne typy, nawet rozne od siebie)
  return std::tuple<int, int>{1, -1}; // Always works
  return std::make_tuple(1, -1); // Always works
}


//jak uzywamy enum to mozemy nadawac zmiennym wartosc tak jak dla integer, mozemy je dzieki temu grupowac i sprawiac, ze lepiej wygladaja 
enum Example	// mozemy w tej linice dodac “const int” np, ale tylko rodzac int
{
a = 5, b =8, c = 10
};
Example value = b; //gdzie mamy te 3 wartosci 5, 8, 10 i tylko z nich mozemy wybrac
// generalnie to ten enum moze byc zastapiony: “int a = 5, b =8, c = 10;”, ale wyglada to lepiej 


int main(){
  std::vector<int> bar;
  bar.reserve(100); //reserve space for 100 elements of size(int)
  bar.emplace_back(1); //lepsze pamieciowo od push_back

    //zeby stworzyc macierz 2d to dajemy:
int** array1 = new int*[50];
for(int i = 0; i < 50; ++i){
    array1[i] = new int[50];
}
//ale lepsza opcja jest:
int* array2 = new int[5*5];
for(int y = 0; y < 5; y++){
	for(int x = 0; x < 5; x++){
		array2[x +y*5] = 2;
	}
}

    return 0;
}

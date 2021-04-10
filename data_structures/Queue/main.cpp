#include <iostream>
#include "Queue.h"
#include <string>

int main( )
{
    Queue Q; // kolejka
    int i = 0;
    std::string s = "";
    std::cout << "dodaj osobe do kolejki przez wpisanie 'add', zapros do okienka przez wpisanie 'invite', zatrzymaj program przez wpisanie 'stop' ";
    while( s != "stop"){
        std::cin >> s;
        if(s == "add"){
            std::cout << "Nowa osoba doszla do kolejki" << std::endl;
            Q.push(i);
            i++;
        }
        else if(s == "invite"){
            Q.pop();
        }
    }
}
//singly linked list objet oriented
#include <iostream>
#include "header.h"
int main(){

  List L; //adres początku listy
  listElement * e;        // do wskazywania elementów listy
  char i;

  for( i = 'A'; i <= 'G'; i++ ) L.push_back(i );
  L.print();
  e = L.head;

  for( i = 'A'; i <= 'C'; i++ ){
    e = e->next;
  }

  L.insert_before (e, '+' );
  L.insert_after ( e, '*' );
  L.print();

  L.remove ( e );
  L.pop_front ();
  L.pop_back ();
  L.print ();

    return 0;
}

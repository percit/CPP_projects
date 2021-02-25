#include <iostream>
#include "header1.h"




int main( )
{
  List L;
  char i;

  L.printl( );
  for( i = 'A'; i <= 'C'; i++ ) L.push_front ( i );
  L.printl( );
  for( i = 'D'; i <= 'F'; i++ ) L.push_back ( i );
  L.printl( );
  L.insert_before ( L.tail, '#' );
  L.printl( );
  L.insert_after ( L.head, '%' );
  L.printl( );
  L.pop_front( );
  L.printl( );
  L.pop_back( );
  L.printl( );
  L.remove ( L.head->next->next );
  L.printl( );

  return 0;
} 

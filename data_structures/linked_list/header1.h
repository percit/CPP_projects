#include <iostream>
#include <iomanip>
struct listElement { // our doubly linked list
    listElement *next;
    listElement *prev;
    char data;
};
class List{
    public:
      listElement *head;
      listElement *tail;
      unsigned int count;

      List();
      ~List();
      void print();
      void printl( );
      void push_front ( char v );
      void push_back ( char v );
      void insert_before ( listElement * e, char v );
      void insert_after ( listElement * e, char v );
      void remove ( listElement * e );
      void pop_front( );
      void pop_back( );
};


List::List( )
{
  head  = tail  = NULL;
  count = 0;
}

List::~List( )
{
  while( count ){ 
    pop_front( );
    }
}

void List::printl( )
{
  listElement * p;

  std::cout << std::setw ( 3 ) << count << ": [ ";
  p = head;
  while( p ){
    std::cout << " " << p->data;
    p = p->next;
  }
  std::cout << " ] \n\n";
}

void List::push_front ( char v )
{
  listElement * p;

  p = new listElement;
  p->data = v;
  p->prev = NULL;
  p->next = head;
  head  = p;
  count++;
  if( p->next ){
    p->next->prev = p;
  } 
  else{
    tail = p;
  }
}

void List::push_back ( char v )
{
  listElement * p;

  p = new listElement;
  p->data = v;
  p->next = NULL;
  p->prev = tail;
  tail  = p;
  count++;
  if( p->prev ){
    p->prev->next = p;
  }
  else{
    head = p;
  }
}

void List::insert_before ( listElement * e, char v )
{
  listElement * p;

  if( e == head ){
    push_front(v);
  }
  else{
    p = new listElement;
    p->data = v;
    p->next = e;
    p->prev = e->prev;
    count++;
    e->prev->next = p;
    e->prev = p;
  }
}

void List::insert_after ( listElement * e, char v )
{
  listElement * p;

  if( e == tail ){
    push_back ( v );
  }
  else
  {
    p = new listElement;
    p->data = v;
    p->next = e->next;
    p->prev = e;
    count++;
    e->next->prev = p;
    e->next = p;
  }
}

void List::remove ( listElement * e )
{
  count--;
  if( e->prev ){
    e->prev->next = e->next;
  }
  else{
    head = e->next;
  }
  if( e->next ){
    e->next->prev = e->prev;
  }
  else{
    tail = e->prev;
  }
  delete e;
}


void List::pop_front( )
{
  if( count ){
    remove ( head );
  }
}

void List::pop_back( )
{
  if( count ){
    remove ( tail );
  }
}


#include "Queue.h"



Queue::Queue( )
{
    head = tail = NULL;
}

Queue::~Queue( )
{
    while( head ) pop( );
}


bool Queue::empty ( void )
{
    return !head;
}

// Zwraca początek kolejki.
// Wartość specjalna to -MAXINT
//-----------------------------
int Queue::front ( void )
{
    if( head ) return head->data;
    else     return -DEFAULT;
}

// Zapisuje do kolejki
//--------------------
void Queue::push ( int v )
{
    slistEl * p = new slistEl;
    p->next = NULL;
    p->data = v;
    if( tail ) tail->next = p;
    else     head = p;
    tail = p;
}

// Usuwa z kolejki
//----------------
void Queue::pop ( void )
{
    if( head )
    {
        std::cout<< "Przyjeto osobe nr: " << head->data << std::endl;
        slistEl * p = head;
        head = head->next;
        if( !head ) tail = NULL;
        delete p;
    }
}

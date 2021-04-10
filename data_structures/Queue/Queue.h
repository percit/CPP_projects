#ifndef UNTITLED5_QUEUE_H
#define UNTITLED5_QUEUE_H
#include<iostream>
const int DEFAULT = -2147483647;


struct slistEl
{
    slistEl * next;
    int data;
};


class Queue
{
private:
    slistEl * head;
    slistEl * tail;

public:
    Queue( );      // konstruktor
    ~Queue( );     // destruktor
    bool empty ( void );
    int  front ( void );
    void push ( int v );
    void pop ( void );
};
#endif //UNTITLED5_QUEUE_H

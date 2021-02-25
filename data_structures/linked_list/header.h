#include <iostream>
struct listElement{
    listElement *next;
    char data;
};
class List{
  public:
    listElement *head;
    
    List();
    ~List();
    unsigned int size();
    void print();
    void push_front(char v);
    void push_back(char v);
    void insert_before(listElement *e, char v);
    void insert_after(listElement *e, char v);
    void pop_back();
    void pop_front();
    void remove(listElement *e);
};
List::List(){
    head = NULL;
}
List::~List(){
    while(head){
        pop_front();
    }
}
unsigned int List::size(){
    unsigned int c = 0;
    listElement *p = head;
    while(p){
        c++;
        p = p->next;
    }
    return c;
}
void List::print(){
    unsigned int i =0;
    listElement *p = head;
    std::cout << "number of elements: "<< size() << std::endl;

    for(i = 1; p; p = p->next){
        std::cout << "element #" << i++ << " data = " << p->data << std::endl;
        std::cout << std::endl;
    }
}
void List::push_front( char v){
    listElement *p = new listElement;
    p->data = v;
    p->next = head;
    head = p;
}
void List::pop_front (){
    listElement *p = head;
    if(p){
        head = p->next;
        delete p;
    }
}
void List::push_back( char v){
    listElement *p, *e;
    e = new listElement;//making new element
    e->next = NULL; //initialisation
    e->data = v;
    p = head;
    if(p){
        while(p->next){
            p = p->next;
        }
        p->next = e;
    }
    else{
        head = e;
    }
}
void List::pop_back(){
    listElement *p = head;
    if(p){
        if(p->next){
            while(p->next->next) p = p->next;
            delete p->next;
            p->next = NULL;
        }
        else{
            delete p; //if one element in list
            head = NULL;
        }
    }
}
void List::insert_before(listElement *e, char v){
    listElement *p = head;
    if(p == e){
        push_front( v);
    }
    else{
        while(p->next != e){
            p = p->next;
        }
        p->next = new listElement;
        p->next->next = e;
        p->next->data = v;
    }
}
void List::insert_after(listElement *e, char v){
    listElement *p = new listElement;
    p->next = e->next;//p bedzie nastepne po e, a potem juz izi
    p->data = v;
    e->next = p;
}
void List::remove( listElement *e){
    listElement *p;
    if(head == e){
        pop_front();
    }
    else{
        p = head;
        while(p->next != e){
            p = p->next;
        }
        p->next = e->next;
        delete e;
    }
}

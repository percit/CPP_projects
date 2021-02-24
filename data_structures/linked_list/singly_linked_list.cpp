#include <iostream>
struct listElement{
    listElement *next;
    char data;
};
unsigned int l_size(listElement *p){
    unsigned int c = 0;
    while(p){
        c++;
        p = p->next;
    }
    return c;
}
void l_print(listElement *p){
    unsigned int i =0;
    std::cout << "number of elements: "<< l_size(p) << std::endl;

    for(i = 1; p; p = p->next){
        std::cout << "element #" << i++ << " data = " << p->data << std::endl;
        std::cout << std::endl;
    }
}
void l_push_front( listElement * &head, char v){
    listElement *p = new listElement;
    p->data = v;
    p->next = head;
    head = p;
}
void l_pop_front ( listElement *&head){
    listElement *p = head;
    if(p){
        head = p->next;
        delete p;
    }
}
void l_push_back(listElement *&head, char v){
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
void l_pop_back(listElement *& head){
    listElement *p = head;
    if(p){
        if(p->next){
            while(p->next->next) p = p->next;
            delete p->next;
            p->next - NULL;
        }
        else{
            delete p; //if one element in list
            head = NULL;
        }
    }
}
void l_insert_before(listElement *&head, listElement *e, char v){
    listElement *p = head;
    if(p == e){
        l_push_front(head, v);
    }
    else{
        while(p->next != e){
            p = p->next;
            p->next = new listElement;
            p->next->next = e;
            p->next->data = v;
        }
    }
}
void l_insert_after(listElement *e, char v){
    listElement *p = new listElement;
    p->next = e->next;//p bedzie nastepne po e, a potem juz izi
    p->data = v;
    e->next = p;
}
void l_remove(listElement *&head, listElement *e){
    listElement *p;
    if(head == e){
        l_pop_front(head);
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
int main(){

  listElement * L = NULL; // zawiera adres początku listy
  listElement * e;        // do wskazywania elementów listy
  char i;

  for( i = 'A'; i <= 'G'; i++ ) l_push_back ( L, i );
  l_print ( L );

  // Przechodzimy do elementu o wartości D

  e = L;

  for( i = 'A'; i <= 'C'; i++ ) e = e->next;

  // Przed elementem D umieszczamy +

  l_insert_before ( L, e, '+' );

  // Za elementem D umieszczamy *

  l_insert_after ( e, '*' );
  l_print ( L );

  // Usuwamy element D oraz element pierwszy i ostatni

  l_remove ( L, e );
  l_pop_front ( L );
  l_pop_back ( L );
  l_print ( L );

    return 0;
}

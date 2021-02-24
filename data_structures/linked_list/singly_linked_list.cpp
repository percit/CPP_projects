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
int main(){

    listElement *L = NULL;
    l_push_front(L, 'a');
    l_push_front(L, 'b');
    l_push_front(L, 'c');
    l_print(L);
    l_pop_front(L);
    l_print(L);
    return 0;
}

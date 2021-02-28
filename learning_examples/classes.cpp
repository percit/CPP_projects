#include <iostream>
class baseClass
{
private:
    /* data */
public:
    baseClass(/* args */) {}
    ~baseClass() {}
};
class myClass: public baseClass
{
private:
    int a = 0, b = 2;
public:
    myClass
(int k, int j): a(k), b(j) {}
    ~myClass
() {}
    int getA();
    void setA(int);
};
int myClass::getA(){
    return a;
}
void myClass::setA(int b){
    a = b;
}

int main(){
    myClass object1(1, 2);
    object1.getA();


    return 0;
}

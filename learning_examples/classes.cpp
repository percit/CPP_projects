#include <iostream>
class baseClass
{
private:
    std::string Name;
public:
    baseClass(/* args */) {}
    ~baseClass() {}
    virtual  std::string getName() = 0; //tworzymy interfers, czyli pusta wirtualna funkcje
};
class myClass: public baseClass
{
private:
    int a = 0, b = 2;
    std::string Name;
public:
    myClass
(int k, int j): a(k), b(j) {}
    ~myClass
() {}
    int getA();
    void setA(int);
    std::string getName() override {return Name;}
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

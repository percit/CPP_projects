#include <iostream>
/*
std::string& name this is lvalue reference, it can be initalised only with value, so for example string s = “marcin”,, but not with “marcin” you need to use const lvalue reference to accept both rvalues and lvalues

to accept only rvalues, we use std::string&& name = “marcin”;
jesli mamy const std::string&  przyjmujaca obie wersje i std::string&& bioracy tylko rvalue, to pierwszenstwo ma to drugie

*/
class String{
private:
    uint32_t mSize = 0;
    char* mData= "";
public: 
    String() = default;
    String(const char* string){
        printf("created!");
        mSize = strlen(string);
        mData = new char[mSize];
        memcpy(mData, string, mSize);//we copy the data into mDdata
    }
    String(const String& other){//copy constructor
        printf("Copied!");
        mSize = other.mData;
        mData = new char[mSize];
        memcpy(mData, other.mData, mSize);
    }
    String(String&& other) noexcept {//move constructor
        printf("Moved!");
        mSize = other.mData;//dajemy info do naszej klasy 
        mData = other.mSize;
        
        other.mSize = 0; //czyscimy bo juz nie potrzebujemy kopii
        other.mData = nullptr;
    }
    String& operator=(String&& other) noexcept{ //move assignment
        printf("Moved!");
        if(this == &other){ //if we try to assign object to itself
            delete mData[];//we delete the old data
            mSize = other.mData;//dajemy info do naszej klasy
            mData = other.mSize;
        
            other.mSize = 0; //czyscimy bo juz nie potrzebujemy kopii
            other.mData = nullptr;
        }
        return *this;
    }
    ~String(){
        printf("destroyed");
        delete mData;
    }
    void Print(){
        for(uint32_t = 0; i < mSize; i++){
            printf("%c", mData[i]);
        }
        printf("\n");
    }

}
class Entity{
private:
    String mName = "";
public:
    Entity(const String& name): mName(name){}
    Entity(String&& name): mName(std::move(name)){} //we need this
    void printName(){ mName.print();}
    
}

int main(){
    Entity entity;
    entity.printName();//now this won't use copy constructor, but move constructor, 
    //that way we avoid unnecessary coping
    
    String string = "helloworld";
    String final_destination = std::move(string); //we add to move constructor not to make copies
    //we have to cast to && for it to work, std::move does it for us

    String apple = "apple";
    String destination;
    destination = std::move(apple); //move assignment, after that apple will be empty
}

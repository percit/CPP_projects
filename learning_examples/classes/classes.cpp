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
    myClass(int k, int j): a(k), b(j) {}
    ~myClass() {}
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
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//NESTED TYPES IN CLASSES
#include <iostream>
 
class Fruit
{
public:
	// Note: we've moved FruitType inside the class, under the public access specifier
	enum FruitType
	{
		APPLE,
		BANANA,
		CHERRY
	};
 
private:
	FruitType m_type;
	int m_percentageEaten = 0;
 
public:
 
 
	Fruit(FruitType type) :
		m_type(type)
	{
	}
 
	FruitType getType() { return m_type;  }
	int getPercentageEaten() { return m_percentageEaten;  }
};
 


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//INICJALIZOWANIE ZMIENNYCH Z KLASY BASE W KLASIE DERIVED
class Base
{
public:
    int m_id;
 
    Base(int id=0)
        : m_id{ id }
    {
    }
 
    int getId() const { return m_id; }
};
class Derived: public Base
{
public:
    double m_cost;
 
    Derived(double cost=0.0, int id=0)
        : m_cost{ cost }
    {
        m_id = id;
    }
 
    double getCost() const { return m_cost; }
};
int main()
{
	// Note: we access the FruitType via Fruit now
	Fruit apple(Fruit::APPLE);
	
	if (apple.getType() == Fruit::APPLE)
		std::cout << "I am an apple";
	else
		std::cout << "I am not an apple";
	
	return 0;
}


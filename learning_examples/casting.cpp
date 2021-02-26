#include <iostream>
class Entity
{
private:
  /* data */
public:
  Entity
(/* args */) {}
  virtual ~Entity
() {}
virtual void PrintName(){};//this is needed for dynamic cast 
};

class Player : public Entity
{
private:

public:  
};


int main(){

    Player * player = new Player;
    Entity* e = player;
    
    Player *p = dynamic_cast<Player*>(e);
    //remember to add at least one virtual function(or destructor) in base class for it to work
    //additionally if this fails it gives NULL, so you can make if statement here
    return 0;
}

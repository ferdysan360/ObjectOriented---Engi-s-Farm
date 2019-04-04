#ifndef _KAMBING_HPP
#define _KAMBING_HPP
#include "MilkProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
#include "../FarmAnimal.hpp"

class Kambing : public MeatProducingAnimal, public MilkProducingAnimal
{
  public:
    Kambing(int _x, int _y);
    void sound(); // cout voice
    Product* extract(); //ngeesktrak cuy ke tas pemain
    //void move(); 
};

#endif
#ifndef _KAMBING_HPP
#define _KAMBING_HPP
#include "MilkProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Kambing : public MeatProducingAnimal, public MilkProducingAnimal
{
  public:
    Kambing(int _x, int _y): MeatProducingAnimal(_x, _y, "Mbek", 4), MilkProducingAnimal(_x, _y, "Mbek", 4){} // ctor
    void sound(); // cout voice
    void extract(); //ngeesktrak cuy ke tas pemain
    //void move(); 
};

#endif
#ifndef _ANGSA_HPP
#define _ANGSA_HPP
#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
#include "../FarmAnimal.hpp"

class Angsa : public EggProducingAnimal
{
  public:
    Angsa(int _x, int _y); // ctor
    void sound(); //cout getVoice
    Product* extract(); // menambah telur angsa ke tas player
};

#endif
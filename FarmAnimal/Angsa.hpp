#ifndef _ANGSA_HPP
#define _ANGSA_HPP
#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
#include "../FarmAnimal.hpp"
#include "../List.hpp"
using namespace std;

class Angsa : public EggProducingAnimal, public MeatProducingAnimal
{
  public:
    Angsa(int _x, int _y); // ctor
    void sound(); //cout getVoice
    Product* extract(); // menambah telur angsa ke tas player
};

#endif
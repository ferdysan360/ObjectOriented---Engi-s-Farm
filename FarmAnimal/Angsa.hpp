#ifndef _ANGSA_HPP
#define _ANGSA_HPP
#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Angsa : public EggProducingAnimal, public MeatProducingAnimal
{
  public:
    Angsa(int _x, int _y): EggProducingAnimal(_x, _y, "Ngok ngok ngok", 3), MeatProducingAnimal(_x, _y, "Ngok ngok ngok", 3){} // ctor
    void sound(); //cout voice
    void extract(); // menambah telur ayam ke tas player
};

#endif
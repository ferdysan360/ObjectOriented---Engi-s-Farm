#ifndef _BEBEK_HPP
#define _BEBEK_HPP
#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Bebek: public EggProducingAnimal, public MeatProducingAnimal 
{
    public:
        Bebek(int _x, int _y) : EggProducingAnimal(_x, _y, "Kwek kwek", 2), MeatProducingAnimal(_x, _y, "Kwek kwek", 2){}; // ctor
        void sound(); //cout voice
        Product* extract(); // menambah telur ayam ke tas player
};


#endif
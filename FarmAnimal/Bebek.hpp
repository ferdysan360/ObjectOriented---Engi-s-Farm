#ifndef _BEBEK_HPP
#define _BEBEK_HPP
#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"

class Bebek: public EggProducingAnimal, public MeatProducingAnimal 
{
    public:
        Bebek(int _x, int _y); // ctor
        void sound(); //cout voice
        Product* extract(); // menambah telur ayam ke tas player
};


#endif
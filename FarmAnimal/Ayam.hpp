#ifndef _AYAM_HPP
#define _AYAM_HPP
#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
#include "../FarmAnimal.hpp"

class Ayam: public EggProducingAnimal, public MeatProducingAnimal {
    public:
        Ayam(int _x, int _y); // ctor
        void sound(); //cout voice
        Product* extract(); // menambah telur ayam ke tas play
};


#endif
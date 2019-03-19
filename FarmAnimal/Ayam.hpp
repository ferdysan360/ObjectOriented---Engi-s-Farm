#ifndef _AYAM_HPP
#define _AYAM_HPP
#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Ayam: public EggProducingAnimal, public MeatProducingAnimal {
    public:
        Ayam(int _x, int _y): EggProducingAnimal(_x, _y, "Petook", 1), MeatProducingAnimal(_x, _y, "Petook", 1){} // ctor
        void sound(); //cout voice
        void extract(); // menambah telur ayam ke tas play
};


#endif
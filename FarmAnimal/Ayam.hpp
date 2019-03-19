#ifndef _AYAM_HPP
#define _AYAM_HPP
#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Ayam: public EggProducingAnimal, public MeatProducingAnimal {
    private:
        const string voice = "Petook";
        ChickenEgg CE;
        ChickenMeat ME;

    public:
        Ayam(); // ctor
        void sound(); //cout voice
        void addProduct(); // menambah telur ayam ke tas player
};


#endif
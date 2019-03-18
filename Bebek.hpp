#ifndef _BEBEK_HPP
#define _BEBEK_HPP
#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Bebek: public EggProducingAnimal, public MeatProducingAnimal {
    private:
        const string voice = "Kwek Kwek";

    public:
        Bebek();
        void sound(); //cout voice
        void addEgg(); // menambah telur bebek ke tas player
};


#endif
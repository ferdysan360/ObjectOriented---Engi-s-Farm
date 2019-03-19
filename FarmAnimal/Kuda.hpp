#ifndef _KUDA_HPP
#define _KUDA_HPP
#include "MilkProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Kuda: public EggProducingAnimal, public MeatProducingAnimal {
    private:
        const string voice = "hikhik-hikhik";
    public:
        Kuda(); // ctor
        void sound(); //cout voice
};


#endif
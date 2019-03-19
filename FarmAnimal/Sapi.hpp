#ifndef _SAPI_HPP
#define _SAPI_HPP
#include "MilkProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Sapi : public MeatProducingAnimal, public MilkProducingAnimal {
    public:
        Sapi(int _x, int _y): MeatProducingAnimal(_x, _y, "Moo", 6), MilkProducingAnimal(_x, _y, "Moo", 6){} // ctor
        void sound(); // cout voice
        void extract();
};

#endif
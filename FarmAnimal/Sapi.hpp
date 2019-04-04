#ifndef _SAPI_HPP
#define _SAPI_HPP
#include "MilkProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Sapi : public MeatProducingAnimal, public MilkProducingAnimal {
    public:
        Sapi(int _x, int _y);
        void sound(); // cout voice
        Product* extract();
};

#endif
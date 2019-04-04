#ifndef _KUDA_HPP
#define _KUDA_HPP
#include "MilkProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
#include "../FarmAnimal.hpp"

class Kuda: public MilkProducingAnimal, public MeatProducingAnimal {
    public:
        Kuda(int _x, int _y);
        void sound(); //cout voice
        Product* extract();
}; 


#endif
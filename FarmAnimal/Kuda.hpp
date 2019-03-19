#ifndef _KUDA_HPP
#define _KUDA_HPP
#include "MilkProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Kuda: public MilkProducingAnimal, public MeatProducingAnimal {
    public:
        Kuda(int _x, int _y): MeatProducingAnimal(_x, _y, "Hikhik-hikhik", 5), MilkProducingAnimal(_x, _y, "Hikhik-hikhik", 5){} // ctor
        void sound(); //cout voice
        void extract();
        
}; 


#endif
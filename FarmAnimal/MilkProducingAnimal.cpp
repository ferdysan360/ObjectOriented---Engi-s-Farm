#include <iostream>
#include <string>
#include "MilkProducingAnimal.hpp"
using namespace std;

MilkProducingAnimal::MilkProducingAnimal() {
    
}

MilkProducingAnimal::MilkProducingAnimal(int _x, int _y, string _voice, int _typeAnimal) : FarmAnimal(_x, _y, _voice, _typeAnimal) {}

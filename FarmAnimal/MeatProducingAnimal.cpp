#include <iostream>
#include <string>
#include "MeatProducingAnimal.hpp"
using namespace std;

MeatProducingAnimal::MeatProducingAnimal() {
    
}

MeatProducingAnimal::MeatProducingAnimal(int _x, int _y, string _voice, int _typeAnimal) : FarmAnimal(_x, _y, _voice, _typeAnimal) {
    
}

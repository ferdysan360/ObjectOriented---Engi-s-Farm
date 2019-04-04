#include <iostream>
#include <string>

#include "EggProducingAnimal.hpp"
EggProducingAnimal::EggProducingAnimal() {

}

EggProducingAnimal::EggProducingAnimal(int _x, int _y, string _voice, int _typeAnimal) : FarmAnimal(_x, _y, _voice, _typeAnimal) {
    cout << "Masuk egg" << endl;
}
#include <iostream>
#include <string>
#include "EggProducingAnimal.hpp"
using namespace std;

EggProducingAnimal::EggProducingAnimal(int _x, int _y, string _voice, int _typeAnimal) : FarmAnimal(_x, _y, _voice, _typeAnimal) {}

void EggProducingAnimal::move(char c) {
}
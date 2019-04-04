#include "Ayam.hpp"
#include <iostream>
using namespace std;

Ayam::Ayam(int _x, int _y): EggProducingAnimal(_x, _y, "Petook", 3), MeatProducingAnimal(_x, _y, "Petook", 3){} // ctor

void Ayam::sound(){
    cout << EggProducingAnimal::voice << endl;
}

Product* Ayam::extract(){
    return new ChickenEgg();
}

#include "Ayam.hpp"
#include <iostream>

Ayam::Ayam(int _x, int _y): FarmAnimal(_x, _y, "Petook", 2) /*, MeatProducingAnimal(_x, _y, "Petook", 2)*/ { // ctor
    renderChar='c';
    hungry = 6;
    timeLeft = hungry + 5;
}
void Ayam::sound(){
    std::cout << EggProducingAnimal::voice << endl;
}

Product* Ayam::extract(){
    hasProduct = false;
    return new ChickenEgg();
}

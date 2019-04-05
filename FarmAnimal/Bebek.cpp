#include "Bebek.hpp"
#include <iostream>

Bebek::Bebek(int _x, int _y): FarmAnimal(_x, _y, "Kwek kwek", 3) { // ctor
    renderChar='b';
    hungry = 7;
    timeLeft = hungry + 5;
}

void Bebek::sound(){
    std::cout << EggProducingAnimal::voice << endl;
}

Product* Bebek::extract(){
    hasProduct = false;
    return new DuckEgg();
}
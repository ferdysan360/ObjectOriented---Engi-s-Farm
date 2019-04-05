#include "Angsa.hpp"
#include <iostream>

Angsa::Angsa(int _x, int _y): FarmAnimal(_x, _y, "Ngok ngok ngok", 1)/*, MeatProducingAnimal(_x, _y, "Ngok ngok ngok", 1) */ {
    // x=_x;
    renderChar='a';
    hungry = 5;
    timeLeft = hungry+5;
    // cout << "ctor1 Angsa" << endl;
}

void Angsa::sound(){
    std::cout << EggProducingAnimal::voice << endl;
}

Product* Angsa::extract() {
    return new GooseEgg();
}
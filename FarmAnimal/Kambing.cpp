#include "Kambing.hpp"
#include <iostream>

Kambing::Kambing(int _x, int _y): FarmAnimal(_x, _y, "Mbek", 4) { // ctor
    renderChar='k';
    hungry = 8;
    timeLeft = hungry + 5;
}
void Kambing::sound(){
    std::cout << MilkProducingAnimal::voice << endl;
}

Product* Kambing::extract(){
    hasProduct = false;
    return new GoatMilk();
}
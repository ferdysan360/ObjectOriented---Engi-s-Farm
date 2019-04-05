#include "Kuda.hpp"
#include <iostream>

Kuda::Kuda(int _x, int _y): FarmAnimal(_x, _y, "Hikhik-hikhik", 5) { // ctor
    renderChar='h';
    hungry = 9;
    timeLeft = hungry + 5;
}

void Kuda::sound(){
    std::cout << MilkProducingAnimal::voice << endl;
}

Product* Kuda::extract(){
    hasProduct = false;
    return new HorseMilk();
}
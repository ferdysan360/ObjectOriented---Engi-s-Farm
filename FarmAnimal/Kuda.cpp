#include "Kuda.hpp"
#include <iostream>
using namespace std;

Kuda::Kuda(int _x, int _y): MeatProducingAnimal(_x, _y, "Hikhik-hikhik", 5), MilkProducingAnimal(_x, _y, "Hikhik-hikhik", 5){} // ctor

void Kuda::sound(){
    cout << MilkProducingAnimal::voice << endl;
}

Product* Kuda::extract(){
    return new HorseMilk();
}
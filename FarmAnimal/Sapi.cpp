#include "Sapi.hpp"
#include <iostream>
using namespace std;

Sapi::Sapi(int _x, int _y): MeatProducingAnimal(_x, _y, "Moo", 6), MilkProducingAnimal(_x, _y, "Moo", 6){} // ctor

void Sapi::sound(){
    cout << MilkProducingAnimal::voice << endl;
}

Product* Sapi::extract(){
    return new CowMilk();
}
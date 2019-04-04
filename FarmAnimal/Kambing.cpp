#include "Kambing.hpp"
#include <iostream>
using namespace std;

Kambing::Kambing(int _x, int _y): MeatProducingAnimal(_x, _y, "Mbek", 4), MilkProducingAnimal(_x, _y, "Mbek", 4){} // ctor

void Kambing::sound(){
    cout << MilkProducingAnimal::voice << endl;
}

Product* Kambing::extract(){
    return new GoatMilk();
}
#include "Sapi.hpp"
#include <iostream>
using namespace std;

Sapi::Sapi(int _x, int _y): FarmAnimal(_x, _y, "Moo", 6) { // ctor
    renderChar='s';
    hungry = 10;
    timeLeft = hungry + 5;
}
void Sapi::sound(){
    cout << MilkProducingAnimal::voice << endl;
}

Product* Sapi::extract(){
    return new CowMilk();
}
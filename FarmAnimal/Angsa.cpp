#include "Angsa.hpp"
#include <iostream>
using namespace std;

Angsa::Angsa(int _x, int _y): EggProducingAnimal(_x, _y, "Ngok ngok ngok", 3), MeatProducingAnimal(_x, _y, "Ngok ngok ngok", 3){} // ctor

void Angsa::sound(){
    cout << EggProducingAnimal::voice << endl;
}

Product* Angsa::extract(){
    return new GooseEgg();
}


int main(){
    List<Product *> bag;
    Angsa A();
    
    GooseEgg e();
    bag.find(new Angsa());
    return 0;
}
#include "Bebek.hpp"
#include <iostream>
using namespace std;

Bebek::Bebek(int _x, int _y): EggProducingAnimal(_x, _y, "Kwek kwek", 3), MeatProducingAnimal(_x, _y, "Kwek kwek", 3){} // ctor

void Bebek::sound(){
    cout << EggProducingAnimal::voice << endl;
}

Product* Bebek::extract(){
    return new DuckEgg();
}


int main(){
    List<Product *> bag;
    Bebek A();
    
    DuckEgg e();
    bag.find(new Bebek());
    return 0;
}
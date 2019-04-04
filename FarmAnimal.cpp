#include <iostream>
#include "FarmAnimal.hpp"
using namespace std;


int FarmAnimal::n_FarmAnimal = 0;

//n_FarmAnimal++; hungry = 5; hasProduct = false
FarmAnimal::FarmAnimal(int _x, int _y, string _voice, int _typeAnimal) : typeAnimal(_typeAnimal) {
    n_FarmAnimal++;
    this-> hungry = 5;
    this-> hasProduct = false;
    this-> x = _x;
    this-> y = _y;
    this-> voice = _voice;
}



FarmAnimal::~FarmAnimal() {
    // delete voice;
    n_FarmAnimal--;
} //n_FarmAnimal--;

//getter
int FarmAnimal::getTypeAnimal() const{
    return typeAnimal;
}

bool FarmAnimal::getHasProduct() const {
    return hasProduct;
}

int FarmAnimal::getHungry() const{
    return hungry;
}

int FarmAnimal::getX() const{
    return x;
}

int FarmAnimal::getY() const{
    return y;
}

//setter
void FarmAnimal::setHasProduct(bool _hasProduct) {
    hasProduct = _hasProduct;
}

void FarmAnimal::setHungry(int _hungry) {
    hungry = _hungry;
}

void FarmAnimal::setX(int _x) {
    x = _x;
}

void FarmAnimal::setY(int _y) {
    y = _y;
}

// jika dia lapar, kalau ada makanan maka dia akan makan, kalau tidak, maka dia akan move lalu cek apakah bisa makan
// kalau ga lapar, maka dia akan move dan mengurangi tingkat kelaparan sebanyak 1
void FarmAnimal::live() {

}

void FarmAnimal::eat() {
    
} //makan rumput

void FarmAnimal::move(Cell* map[10][11]){
    int val = rand() % 4 + 1;

    switch (val) {
        case 1:     // Up
            y--;
            break;
        case 2:     // Down
            y++;
            break;
        case 3:     // Left
            x--;
            break;
        case 4:     // Right
            x++;
            break;
    }
    /*
    if(c == 'U'){
        y--;
    }
    else if(c == 'D'){
        y++;
    }
    else if(c == 'L'){
        x--;
    }
    else if(c == 'R'){
        x++;
    }
    */
}



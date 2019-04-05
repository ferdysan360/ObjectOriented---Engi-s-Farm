#include <iostream>
#include "FarmAnimal.hpp"


int FarmAnimal::n_FarmAnimal = 0;

// FarmAnimal::FarmAnimal() {
//     cout << "Farm animal1-- " << endl;
// }

//n_FarmAnimal++; hungry = 5; hasProduct = false
FarmAnimal::FarmAnimal(int _x, int _y, string _voice, int _typeAnimal) : typeAnimal(_typeAnimal) {
    n_FarmAnimal++;
    this-> hasProduct = false;
    // cout << "Farm animal-- " << _x << _y << endl;
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

bool FarmAnimal::getDead(){
    return dead;
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

bool FarmAnimal::isPointValid(int _y, int _x) {
    return (_y >= 0 && _y < 10 && _x >= 0 && _x < 11);
}

bool FarmAnimal::isAreaValid(int tipeAnimal, int tipeArea) {
    if (tipeAnimal == 1 || tipeAnimal == 2 || tipeAnimal == 3) {
        return (tipeArea == 4 || tipeArea == 5);
    }
    if (tipeAnimal == 4 || tipeAnimal == 5 || tipeAnimal == 6) {
        return (tipeArea == 4 || tipeArea == 6);
    }
}

// jika dia lapar, kalau ada makanan maka dia akan makan, kalau tidak, maka dia akan move lalu cek apakah bisa makan
// kalau ga lapar, maka dia akan move dan mengurangi tingkat kelaparan sebanyak 1
void FarmAnimal::live(Cell* map[10][11]) {
    if (timeLeft > 5) {
        timeLeft--;
        // move(map);
    }
    else if (timeLeft > 0) {
        eat(map);
        // move(map);
        timeLeft--;
    }
    else {
        dead = true;
        // kill animal
    }
}

void FarmAnimal::eat(Cell* map[10][11]) {
    if (map[y][x]->isHasGrass()) {
        map[y][x]->setHasGrass(false);
        timeLeft = hungry+5+1;
        hasProduct = true;
    }
} //makan rumput

void FarmAnimal::move(Cell* map[10][11]){
    bool success = false;
    int val = rand() % 4 + 1;
    int tries = 1;

    while (!success && tries <= 4) {
        switch (val) {
            case 1:     // Up
                if (isPointValid(y-1,x) && !map[y-1][x]->isOccupied() && isAreaValid(getTypeAnimal(),map[y-1][x]->getTypeCell())){
                    map[y][x]->setOccupied(false);
                    y--;
                    map[y][x]->setOccupied(true);
                    success = true;
                }
                break;
            case 2:     // Down
                if (isPointValid(y+1,x) && !map[y+1][x]->isOccupied() && isAreaValid(getTypeAnimal(),map[y+1][x]->getTypeCell())){
                    map[y][x]->setOccupied(false);
                    y++;
                    map[y][x]->setOccupied(true);
                    success = true;
                }
                break;
            case 3:     // Left
                if (isPointValid(y,x-1) && !map[y][x-1]->isOccupied() && isAreaValid(getTypeAnimal(),map[y][x-1]->getTypeCell())){
                    map[y][x]->setOccupied(false);
                    x--;
                    map[y][x]->setOccupied(true);
                    success = true;
                }
            break;
            case 4:     // Right
                if (isPointValid(y,x+1) && !map[y][x+1]->isOccupied() && isAreaValid(getTypeAnimal(),map[y][x+1]->getTypeCell())){
                    map[y][x]->setOccupied(false);
                    x++;
                    map[y][x]->setOccupied(true);
                    success = true;
                }
                break;
        }
        val++;
        if (val > 4) {
            val = 1;
        }
        tries++;
    }
}



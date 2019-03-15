#include <iostream>
#include "FarmAnimal.hpp"
using namespace std;

int FarmAnimal::n_FarmAnimal = 0;

int FarmAnimal::getHungry(){
    return hungry;
}
int FarmAnimal::getX(){
    return x;
}
int FarmAnimal::getY(){
    return y;
}

void FarmAnimal::move(char c){
    if(c == 'U'){
        y++;
    }
    else if(c == 'D'){
        y--;
    }
    else if(c == 'L'){
        x--;
    }
    else if(c == 'R'){
        x++;
    }
}

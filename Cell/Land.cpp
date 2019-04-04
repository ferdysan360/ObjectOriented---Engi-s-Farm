#include "Land.hpp"

Land::Land(char renderChar, int type): Cell(renderChar,type,false) {        
    hasGrass = true;
}

int Land::getTypeCell() {
    return 2;
}
#include "Land.hpp"

Land::Land(char renderChar, int type): Cell(renderChar,type,false) {        
    setHasGrass(true);
}
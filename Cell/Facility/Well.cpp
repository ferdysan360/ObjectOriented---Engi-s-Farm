#include "Well.hpp"


Well::Well() : Facility('W',3) {
    
}

void Well::getWater(int* waterBag) {
    *waterBag = MAX_WATER;
}
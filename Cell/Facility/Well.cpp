#include "Well.hpp"


Well::Well() : Facility('W',3) {
    
}

void Well::getWater(int* waterBag) {
    if (*waterBag==MAX_WATER) {
        cout << "Ga ush tamak, air gratis kok\n";
    } else {
        *waterBag = MAX_WATER;
    }
}
#include "Facility.hpp"

Facility::Facility(char renderChar, int type) : Cell(renderChar, type, true) {
    hasGrass = false;
}

int Facility::getTypeCell() {
    return 1;
}
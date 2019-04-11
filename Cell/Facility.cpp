#include "Facility.hpp"

Facility::Facility(char renderChar, int type) : Cell(renderChar, type, true) {
    setHasGrass(false);
}
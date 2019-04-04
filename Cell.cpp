#include "Cell.hpp"
Cell::Cell(): typeCell(0) {

}

Cell::Cell(char renderChar, int typeCell, bool isOccupied) : typeCell(typeCell), Renderable(renderChar), occupied(isOccupied) {
    
}

bool Cell::isOccupied() {
    return occupied;
}

void Cell::setOccupied(bool newStat) {
    occupied=newStat;
}

int Cell::getTypeCell() {
    return typeCell;
}

bool Cell::isHasGrass() {
    return hasGrass;
}

void Cell::setHasGrass(bool newStat) {
    hasGrass = newStat;
}
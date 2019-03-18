//Kelas : Cell.hpp

#ifndef _CELL_H
#define _CELL_H
#include "Player.hpp"


class Cell {
    public:
        Cell();
        virtual int getType() = 0;
        // type 1 = well
        // type 2 = mixer
        // type 3 = truck
        // type 4 = coop
        // type 5 = grassland
        // type 6 = barn
};
#endif
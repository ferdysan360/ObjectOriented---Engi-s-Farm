//Kelas : Cell.hpp

#ifndef _CELL_H
#define _CELL_H
#include "Player.hpp"


class Cell {
    public:
        Cell();
        virtual int getTypeCell() = 0;
        // type 1 = facility
        // type 2 = land
};
#endif
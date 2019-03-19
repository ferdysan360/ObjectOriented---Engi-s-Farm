//Kelas : Cell.hpp

#ifndef _CELL_H
#define _CELL_H

class Cell {
    protected:
        char renderChar;

    public:
        Cell();

        //mengembalikan char sesuai status dari cell, apakah occupied ataukah facility dll
        char getRenderable();

        // type 1 = facility
        // type 2 = land
        virtual int getTypeCell() = 0;
};
#endif
//Kelas : Barn.hpp

#ifndef _BARN_H
#define _BARN_H
#include "../Land.hpp"

class Barn: public Land{
    private:
        
    public:
        //ctor
        Barn(): Land(1)
        {
            isOccupied = false;
        }
};
#endif
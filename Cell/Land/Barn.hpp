//Kelas : Barn.hpp

#ifndef _BARN_H
#define _BARN_H
#include "../Land.hpp"

class Barn: public Land{
    private:
        
    public:
        //ctor
        Barn(bool occupied): Land('b',4)
        {
            occupied = occupied;
        }
};
#endif
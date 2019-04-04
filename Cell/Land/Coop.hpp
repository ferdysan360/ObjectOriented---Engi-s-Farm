//Kelas : Coop.hpp

#ifndef _COOP_H
#define _COOP_H
#include "../Land.hpp"

class Coop: public Land{
    private:
        
    public:
        //ctor
        Coop(bool occupied): Land('c',5)
        {
            occupied = occupied;
        }
};
#endif
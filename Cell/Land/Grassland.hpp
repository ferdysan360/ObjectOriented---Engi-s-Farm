//Kelas : Mixer.hpp

#ifndef _GRASSLAND_H
#define _GRASSLAND_H
#include "../Land.hpp"

class Grassland: public Land{
    private:
        
    public:
        //ctor
        Grassland(bool occupied): Land('g',6)
        {
            occupied = occupied;
        }
};
#endif
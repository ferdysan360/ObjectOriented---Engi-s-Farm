//Kelas : Facility.hpp

#ifndef _FACILITY_H
#define _FACILITY_H
#include "../Cell.hpp"
#include "../Product.hpp"

class Facility : public Cell{
    protected:
        
    public:
        Facility(char renderChar, int type);
};
#endif
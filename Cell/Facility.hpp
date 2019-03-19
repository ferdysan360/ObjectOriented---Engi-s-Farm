//Kelas : Facility.hpp

#ifndef _FACILITY_H
#define _FACILITY_H
#include "../Cell.hpp"
#include "../Product.hpp"

class Facility : public Cell{
    protected:
        const int typeFacility;
        
    public:
        Facility(int type): typeFacility(type){}

        int getTypeCell()
        {
            return 1;
        }
};
#endif
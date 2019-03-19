//Kelas : Facility.hpp

#ifndef _LAND_H
#define _LAND_H
#include "../Cell.hpp"

class Land : public Cell{
    protected:
        const int typeLand;
        
    public:
        Land(int type): typeLand(type)
        {

        }

        int getTypeCell()
        {
            return 2;
        }
};
#endif
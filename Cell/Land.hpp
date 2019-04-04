//Kelas : Facility.hpp

#ifndef _LAND_H
#define _LAND_H
#include "../Cell.hpp"

class Land : public Cell{
    protected:
        
        
    public:
        Land(char renderChar, int type): Cell(renderChar,type,false)
        {
            // cout << getRenderable();
        }

        int getTypeCell()
        {
            return 2;
        }
};
#endif
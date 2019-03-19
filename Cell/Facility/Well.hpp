//Kelas : Well.hpp

#ifndef _WELL_H
#define _WELL_H
#include <iostream>
#include "../Facility.hpp"

using namespace std;

class Well : public Facility{
    private:
        
    public:
        Well() : Facility(1)
        {
            
        }

        void getWater();
};
#endif
//Kelas : Truck.hpp

#ifndef _TRUCK_H
#define _TRUCK_H
#include "Facility.hpp"

class Truck : public Facility{
    private:
        bool truck_status;
        const int typeFacility = 3;
    public:
    
        checkStatus(); //Mengecek status ketersediaan truck
};
#endif
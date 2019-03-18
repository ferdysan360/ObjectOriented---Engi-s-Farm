//Kelas : Truck.hpp

#ifndef _TRUCK_H
#define _TRUCK_H
#include "Facility.hpp"
#include "Product.hpp"

class Truck : public Facility{
    private:
        bool truck_status;
        const int typeFacility = 3;

    public:
        bool checkStatus() //Mengecek status ketersediaan truck
        {
            return truck_status;
        }

        void setStatus(bool newStatus)
        {
            truck_status = newStatus;
        }

        void sellProduct(Product* p,int* gameMoney)
        {
            *gameMoney += (*p).getPrice();
        }
};
#endif
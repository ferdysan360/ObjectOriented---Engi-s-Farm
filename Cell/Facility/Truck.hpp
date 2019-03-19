//Kelas : Truck.hpp

#ifndef _TRUCK_H
#define _TRUCK_H
#include "../Facility.hpp"
#include <vector>

class Truck : public Facility{
    private:
        bool truck_status;

    public:
        Truck() : Facility(3)
        {
            truck_status = true;
        }
        bool checkStatus() //Mengecek status ketersediaan truck
        {
            return truck_status;
        }

        void setStatus(bool newStatus) //set status ketersediaan truck
        {
            truck_status = newStatus;
        }

        void sellProduct(vector<Product>* bag,int* gameMoney) //mendapat price dari setiap item di bag lalu menambah uang game sebesar itu
        {
            
        }
};
#endif
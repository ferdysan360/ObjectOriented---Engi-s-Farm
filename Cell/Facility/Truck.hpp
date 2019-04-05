//Kelas : Truck.hpp

#ifndef _TRUCK_H
#define _TRUCK_H
#include "../Facility.hpp"
#include "../../List.hpp"
#include "../../Product/SideProduct/AngsaGeprek.hpp"
#include "../../Product/SideProduct/ChickenRolade.hpp"
#include "../../Product/SideProduct/KambingGuling.hpp"
#include "../../Product/SideProduct/KapsulEkstrakSusuKuda.hpp"
#include "../../Product/SideProduct/KudaBakarTelur.hpp"
#include "../../Product/SideProduct/NasiHainan.hpp"
#include "../../Product/SideProduct/SapiOmelete.hpp"
#include "../../Product/SideProduct/SusuKambingInstan.hpp"
#include "../../Product/SideProduct/SusuTelurMaduJahe.hpp"
#include <vector>

class Truck : public Facility{
    private:
        bool truck_status;
        int lastUsed;

    public:
        Truck();
        bool checkStatus(); //Mengecek status ketersediaan truck
        void setStatus(bool newStatus); //set status ketersediaan truck
        void sellProduct(List<Product*>* bag,int* gameMoney, int gameTime); //mendapat price dari setiap item di bag lalu menambah uang game sebesar itu

};
#endif
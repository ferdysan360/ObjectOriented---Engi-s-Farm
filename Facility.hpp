//Kelas : Facility.hpp

#ifndef _FACILITY_H
#define _FACILITY_H
#include "Cell.hpp"
#include "Player.hpp"


class Facility : public Cell{
    private:
    
    public:
        Well(); //Untuk mengisi WaterContainer
        Mixer(); //Combine 2 atau lebih bahan-bahan untuk menghasilkan SideProduct
        Truck(); //Menjual seluruh isi tas, Truck dipakai dlm selang waktu tertentu
};
#endif
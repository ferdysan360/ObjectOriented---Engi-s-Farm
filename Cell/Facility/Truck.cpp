//Kelas : Truck.hpp

#include "Truck.hpp"

Truck::Truck() : Facility('T',2) {
    truck_status = true;
}

bool Truck::checkStatus() {//Mengecek status ketersediaan truck
    return truck_status;
}

void Truck::setStatus(bool newStatus) {//set status ketersediaan truck
    truck_status = newStatus;
}

void Truck::sellProduct(List<Product*>* bag, int* gameMoney) {//mendapat price dari setiap item di bag lalu menambah uang game sebesar itu
    int moneytemp = 0;
        for (int idx = 0; idx < bag->getNeff(); idx++){
            moneytemp += bag->get(idx)->getPrice(); //mengambil harga dari product
            bag->removeIdx(idx); //mengosongkan dan menjual
        }
    *gameMoney = moneytemp;
    
}


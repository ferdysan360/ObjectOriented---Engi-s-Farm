//Kelas : Truck.hpp

#include "Truck.hpp"

Truck::Truck() : Facility('T',2) {
    truck_status = true;
    lastUsed=0;
}

bool Truck::checkStatus() {//Mengecek status ketersediaan truck
    return truck_status;
}

void Truck::setStatus(bool newStatus) {//set status ketersediaan truck
    truck_status = newStatus;
}

void Truck::sellProduct(List<Product*>* bag, int* gameMoney, int gameTime) {//mendapat price dari setiap item di bag lalu menambah uang game sebesar itu
    if ((gameTime-lastUsed)%3==0) {
        setStatus(true);
    }
    if (truck_status) {
        if (bag->getNeff()>0) {
            int moneytemp = *gameMoney;
            int idx = 0;
            while (idx<bag->getNeff()) {
                moneytemp += bag->get(idx)->getPrice(); //mengambil harga dari product
                bag->removeIdx(idx); //mengosongkan dan menjual
            }
            setStatus(false);
            *gameMoney = moneytemp;
            lastUsed = gameTime;
            cout << "Berhasil jualan di truck!" << endl;
        } else {
            cout << "Tidak ada product yang bisa dijual!" << endl;
        }
        
    } else {
        cout << "Can't use truck rightnow!" << endl;
    }
    
    
}


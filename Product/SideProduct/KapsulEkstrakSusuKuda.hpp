#ifndef _KAPSUL_EKSTRAK_SUSU_KUDA_HPP
#define _KAPSUL_EKSTRAK_SUSU_KUDA_HPP
#include "../SideProduct.hpp"
#include <string>
using namespace std;

class KapsulEkstrakSusuKuda: public SideProduct {
    private:
        
    public:
        KapsulEkstrakSusuKuda() : SideProduct("Kapsul Ekstrak Susu Kuda", 9, 8){}
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_SProduct(); //return price;        
};


#endif
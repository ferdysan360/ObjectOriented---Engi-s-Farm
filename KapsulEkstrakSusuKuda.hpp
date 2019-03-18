#ifndef _KAPSUL_EKSTRAK_SUSU_KUDA_HPP
#define _KAPSUL_EKSTRAK_SUSU_KUDA_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class KapsulEkstrakSusuKuda: public SideProduct {
    private:
        const string name = "Kapsul Ekstrak Susu Kuda";
        const int type_sproduct = 9;
        const int price = 8; 
    public:
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_Sproduct(); //return price;        
};


#endif
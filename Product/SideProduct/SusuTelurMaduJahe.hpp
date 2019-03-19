#ifndef _SUSU_TELUR_MADU_JAHE_HPP
#define _SUSU_TELUR_MADU_JAHE_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class SusuTelurMaduJahe: public SideProduct {
    private:
        
    public:
        SusuTelurMaduJahe() : SideProduct("Susu Telur Madu Jahe", 8, 5){}
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_Sproduct(); //return price;        
};


#endif
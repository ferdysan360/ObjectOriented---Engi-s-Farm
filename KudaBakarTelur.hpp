#ifndef _KUDA_BAKAR_TELUR_HPP
#define _KUDA_BAKAR_TELUR_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class KudaBakarTelur: public SideProduct {
    private:
        const string name = "Kuda Bakar Telur";
        const int type_sproduct = 6
        const int price = 25; 
    public:
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_Sproduct(); //return price;        
};


#endif
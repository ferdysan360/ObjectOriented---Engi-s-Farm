#ifndef _KUDA_BAKAR_TELUR_HPP
#define _KUDA_BAKAR_TELUR_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class KudaBakarTelur: public SideProduct {
    private:

    public:
        KudaBakarTelur() : SideProduct("Kuda Bakar Telur", 6, 25){}
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_Sproduct(); //return price;        
};


#endif
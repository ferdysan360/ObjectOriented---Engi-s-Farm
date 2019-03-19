#ifndef _SAPI_OMELETE_HPP
#define _SAPI_OMELETE_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class SapiOmelete: public SideProduct {
    private:
        
    public:
        SapiOmelete() : SideProduct("Sapi Omelete", 5, 20){}
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_Sproduct(); //return price;        
};


#endif
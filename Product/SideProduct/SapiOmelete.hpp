#ifndef _SAPI_OMELETE_HPP
#define _SAPI_OMELETE_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class SapiOmelete: public SideProduct {
    private:
        const string name = "Sapi Omelete";
        const int type_sproduct = 5;
        const int price = 20; 
    public:
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_Sproduct(); //return price;        
};


#endif
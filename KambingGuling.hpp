#ifndef _KAMBING_GULING_HPP
#define _KAMBING_GULING_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class KambingGuling: public SideProduct {
    private:
        const string name = "Kambing Guling";
        const int type_sproduct = 7;
        const int price = 18; 
    public:
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_Sproduct(); //return price;        
};


#endif
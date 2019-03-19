#ifndef _KAMBING_GULING_HPP
#define _KAMBING_GULING_HPP
#include "../SideProduct.hpp"
#include <string>
using namespace std;

class KambingGuling: public SideProduct {
    private:
        
    public:
        KambingGuling() : SideProduct("Kambing Guling", 7, 18){}
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_Sproduct(); //return price;        
};


#endif
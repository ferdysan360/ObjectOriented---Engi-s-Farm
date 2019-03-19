#ifndef _CHICKEN_ROLADE_HPP
#define _CHICKEN_ROLADE_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class ChickenRolade: public SideProduct {
    private:
    
    public:
        ChickenRolade() : SideProduct("Chicken Rolade", 1, 10){}
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeEgg;        
        int getPrice_Sproduct(); //return price;        
};


#endif
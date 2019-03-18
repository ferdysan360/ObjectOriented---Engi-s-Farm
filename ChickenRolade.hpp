#ifndef _CHICKEN_ROLADE_HPP
#define _CHICKEN_ROLADE_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class ChickenRolade: public SideProduct {
    private:
        const string name = "Chicken Rolade";
        const int type_sproduct = 1;
        const int price = 10; 
    public:
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeEgg;        
        int getPrice_Sproduct(); //return price;        
};


#endif
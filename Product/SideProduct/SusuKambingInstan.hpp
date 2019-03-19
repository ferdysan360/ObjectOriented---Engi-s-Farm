#ifndef _SUSU_KAMBING_INSTAN_HPP
#define _SUSU_KAMBING_INSTAN_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class SusuKambingInstan: public SideProduct {
    private:
        const string name = "Susu Kambing Instan";
        const int type_sproduct = 10;
        const int price = 8; 
    public:
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_Sproduct(); //return price;        
};


#endif
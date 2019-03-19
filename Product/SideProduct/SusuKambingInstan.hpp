#ifndef _SUSU_KAMBING_INSTAN_HPP
#define _SUSU_KAMBING_INSTAN_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class SusuKambingInstan: public SideProduct {
    private:
        
    public:
        SusuKambingInstan() : SideProduct("Susu Kambing Instan", 10, 8){}
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_Sproduct(); //return price;        
};


#endif
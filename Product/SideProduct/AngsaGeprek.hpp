#ifndef _ANGSA_GEPREK_HPP
#define _ANGSA_GEPREK_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class AngsaGeprek: public SideProduct {
    private:
        const string name = "Angsa Geprek";
        const int type_sproduct = 3;
        const int price = 12; 
    public:
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_Sproduct(); //return price;        
};


#endif
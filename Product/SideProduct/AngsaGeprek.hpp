#ifndef _ANGSA_GEPREK_HPP
#define _ANGSA_GEPREK_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class AngsaGeprek: public SideProduct {
    private:
    
    public:
        AngsaGeprek() : SideProduct("Angsa Geprek",3,12){}
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeSProduct;        
        int getPrice_Sproduct(); //return price;        
};


#endif
#ifndef _NASI_HAINAN_HPP
#define _NASI_HAINAN_HPP
#include "SideProduct.hpp"
#include <string>
using namespace std;

class NasiHainan: public SideProduct {
    private:
        const string name = "Nasi Hainan";
        const int type_sproduct = 2;
        const int price = 20; 
    public:
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeEgg;        
        int getPrice_Sproduct(); //return price;        
};


#endif
#ifndef _NASI_HAINAN_HPP
#define _NASI_HAINAN_HPP
#include "../SideProduct.hpp"
#include <string>
using namespace std;

class NasiHainan: public SideProduct {
    private:
        
    public:
        NasiHainan() : SideProduct("Nasi Hainan", 2, 20){}
        string getName_SProduct(); // return name
        int getType_SProduct(); //return typeEgg;        
        int getPrice_Sproduct(); //return price;        
};


#endif
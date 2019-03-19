#ifndef _KAPSUL_EKSTRAK_SUSU_KUDA_HPP
#define _KAPSUL_EKSTRAK_SUSU_KUDA_HPP
#include "../SideProduct.hpp"
#include <string>
using namespace std;

class KapsulEkstrakSusuKuda: public SideProduct {
    private:
        
    public:
        KapsulEkstrakSusuKuda() : SideProduct("Kapsul Ekstrak Susu Kuda", 20, 8){}   
};


#endif
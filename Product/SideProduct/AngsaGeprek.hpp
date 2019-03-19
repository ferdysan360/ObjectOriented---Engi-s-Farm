#ifndef _ANGSA_GEPREK_HPP
#define _ANGSA_GEPREK_HPP
#include "../SideProduct.hpp"
#include <string>
using namespace std;

class AngsaGeprek: public SideProduct {
    private:

    public:
        AngsaGeprek() : SideProduct("Angsa Geprek", 15, 12){}       
};


#endif
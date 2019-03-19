#ifndef _SAPI_OMELETE_HPP
#define _SAPI_OMELETE_HPP
#include "../SideProduct.hpp"
#include <string>
using namespace std;

class SapiOmelete: public SideProduct {
    private:
        
    public:
        SapiOmelete() : SideProduct("Sapi Omelete", 16, 20){}
};


#endif
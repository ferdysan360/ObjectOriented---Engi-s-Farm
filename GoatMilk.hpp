#ifndef _GOAT_MILK_HPP
#define _GOAT_MILK_HPP
#include "Milk.hpp"
#include <string>
using namespace std;

class GoatMilk: public Milk {
    private:
        const int type = 12;

    public:
        int getType(); //return typeMilk;        
};


#endif
#ifndef _GOAT_MILK_HPP
#define _GOAT_MILK_HPP
#include "../Milk.hpp"
#include <string>
using namespace std;

class GoatMilk: public Milk {
    private:
    public:
        GoatMilk(): Milk("Goat Milk", 12, 11){}
};


#endif
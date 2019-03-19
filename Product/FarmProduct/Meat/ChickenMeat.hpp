#ifndef _CHICKEN_MEAT_HPP
#define _CHICKEN_MEAT_HPP
#include "../Meat.hpp"
#include <string>
using namespace std;

class ChickenMeat: public Meat {
    private:

    public:
        ChickenMeat(): Meat("Chicken Meat", 4, 28){}
};


#endif
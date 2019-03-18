#ifndef _CHICKEN_MEAT_HPP
#define _CHICKEN_MEAT_HPP
#include "Meat.hpp"
#include <string>
using namespace std;

class ChickenMeat: public Meat {
    private:
        const string name = "Chicken Meat";
        const int type = 4;
        const int price = 10000;

    public:
        string getName(); // return name;
        int getType(); //return typeMeat;    
        int getPrice(); // return price    
};


#endif
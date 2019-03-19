#ifndef _CHICKEN_MEAT_HPP
#define _CHICKEN_MEAT_HPP
#include "Meat.hpp"
#include <string>
using namespace std;

class ChickenMeat: public Meat {
    private:
        const string name = "Chicken Meat";
        const int type = 4;
        const int price = 28;

    public:
        string getName(); // return name;
        int getTypeProduct(); //return typeMeat;    
        int getPrice(); // return price    
};


#endif
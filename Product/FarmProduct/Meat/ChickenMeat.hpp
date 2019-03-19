#ifndef _CHICKEN_MEAT_HPP
#define _CHICKEN_MEAT_HPP
#include "../Meat.hpp"
#include <string>
using namespace std;

class ChickenMeat: public Meat {
    private:

    public:
        ChickenMeat(): Meat("Chicken Meat", 4, 28){}
        string getName_FProduct(); // return name
        int getType_FProduct(); //return typeEgg;        
        int getPrice_FProduct(); //return price;
};


#endif
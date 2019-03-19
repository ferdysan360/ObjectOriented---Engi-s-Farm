#ifndef _HORSE_MILK_HPP
#define _HORSE_MILK_HPP
#include "../Milk.hpp"
#include <string>
using namespace std;

class HorseMilk: public Milk {
    private:

    public:
        HorseMilk(): Milk("Horse Milk", 11, 10){}
        string getName_FProduct(); // return name
        int getType_FProduct(); //return typeEgg;        
        int getPrice_FProduct(); //return price;
};


#endif
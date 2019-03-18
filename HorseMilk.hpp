#ifndef _HORSE_MILK_HPP
#define _HORSE_MILK_HPP
#include "Milk.hpp"
#include <string>
using namespace std;

class HorseMilk: public Milk {
    private:
        const string name = "Horse Milk";
        const int type = 11;
        const int price = 10000; 
    public:
        string getName(); // return name
        int getType(); //return typeMilk; 
        int getPrice(); //return price;          
};


#endif
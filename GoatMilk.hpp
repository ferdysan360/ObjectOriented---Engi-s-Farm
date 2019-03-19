#ifndef _GOAT_MILK_HPP
#define _GOAT_MILK_HPP
#include "Milk.hpp"
#include <string>
using namespace std;

class GoatMilk: public Milk {
    private:
        const string name = "Goat Milk";
        const int type = 12;
        const int price = 28; 
    public:
        string getName(); // return name
        int getTypeProduct(); //return typeEgg;        
        int getPrice(); //return price;          
};


#endif
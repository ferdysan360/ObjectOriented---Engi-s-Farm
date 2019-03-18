#ifndef _COW_MILK_HPP
#define _COW_MILK_HPP
#include "Milk.hpp"
#include <string>
using namespace std;

class CowMilk : public Milk {
    private:
        const string name = "Cow Milk";
        const int type = 10;
        const int price = 9000; 
    public:
        string getName(); // return name
        int getType(); //return typeMilk; 
        int getPrice(); //return price;  
};

#endif
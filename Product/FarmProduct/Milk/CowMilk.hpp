#ifndef _COW_MILK_HPP
#define _COW_MILK_HPP
#include "../Milk.hpp"
#include <string>
using namespace std;

class CowMilk : public Milk {
    private:

    public:
        CowMilk(): Milk("Cow Milk", 10, 9){}
        string getName_FProduct(); // return name
        int getType_FProduct(); //return typeEgg;        
        int getPrice_FProduct(); //return price;
};

#endif
#ifndef _CHICKEN_EGG_HPP
#define _CHICKEN_EGG_HPP
#include "../Egg.hpp"
#include <string>
using namespace std;

class ChickenEgg: public Egg {
    private:

    public:
        ChickenEgg(): Egg("Chicken Egg",1, 28){}
        string getName_FProduct(); // return name
        int getType_FProduct(); //return typeEgg;        
        int getPrice_FProduct(); //return price;        
};


#endif
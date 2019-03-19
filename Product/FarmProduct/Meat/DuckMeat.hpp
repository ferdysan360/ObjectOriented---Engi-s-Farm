#ifndef _DUCK_MEAT_HPP
#define _DUCK_MEAT_HPP
#include "../Meat.hpp"
#include <string>
using namespace std;

class DuckMeat: public Meat {
    private:

    public:
        DuckMeat(): Meat("Duck Meat", 5, 31){}
        string getName_FProduct(); // return name
        int getType_FProduct(); //return typeEgg;        
        int getPrice_FProduct(); //return price;
};


#endif
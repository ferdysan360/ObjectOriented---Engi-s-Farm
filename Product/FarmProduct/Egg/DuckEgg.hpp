#ifndef _DUCK_EGG_HPP
#define _DUCK_EGG_HPP
#include "../Egg.hpp"
#include <string>
using namespace std;

class DuckEgg : public Egg {
    private:

    public:
        ChickenEgg(): Egg("Duck Egg",2, 20){}
        string getName_FProduct(); // return name
        int getType_FProduct(); //return typeEgg;        
        int getPrice_FProduct(); //return price;
};

#endif
#ifndef _DUCK_EGG_HPP
#define _DUCK_EGG_HPP
#include "Egg.hpp"
#include <string>
using namespace std;

class DuckEgg : public Egg {
    private:
        const string name = "Duck Egg";
        const int type = 2;
        const int price = 20;
    public:
        int getName(); //return name
        int getTypeProduct(); //return typeEgg;
        int getPrice(); //return price;        
};

#endif
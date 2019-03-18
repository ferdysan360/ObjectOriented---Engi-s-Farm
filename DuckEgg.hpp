#ifndef _DUCK_EGG_HPP
#define _DUCK_EGG_HPP
#include "Egg.hpp"
#include <string>
using namespace std;

class DuckEgg : public Egg {
    private:
        const string name = "Duck Egg";
        const int type = 2;
        const int price = 32000;
    public:
        int getName(); //return name
        int getType(); //return typeEgg;
        int getPrice(); //return price;        
};

#endif
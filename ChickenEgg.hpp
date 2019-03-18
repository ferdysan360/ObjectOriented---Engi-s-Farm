#ifndef _CHICKEN_EGG_HPP
#define _CHICKEN_EGG_HPP
#include "Egg.hpp"
#include <string>
using namespace std;

class ChickenEgg: public Egg {
    private:
        const string name = "Chicken Egg";
        const int type = 1;
        const int price = 28000; 
    public:
        string getName(); // return name
        int getType(); //return typeEgg;        
        int getPrice(); //return price;        
};


#endif
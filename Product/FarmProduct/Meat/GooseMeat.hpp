#ifndef _GOOSE_MEAT_HPP
#define _GOOSE_MEAT_HPP
#include "../Meat.hpp"
#include <string>
using namespace std;

class GooseMeat: public Meat {
    private:

    public:
        GooseMeat(): Meat("Goose Meat", 6, 20){}
        string getName_FProduct(); // return name
        int getType_FProduct(); //return typeEgg;        
        int getPrice_FProduct(); //return price;
};


#endif
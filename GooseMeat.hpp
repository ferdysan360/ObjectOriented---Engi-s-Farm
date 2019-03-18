#ifndef _GOOSE_MEAT_HPP
#define _GOOSE_MEAT_HPP
#include "Meat.hpp"
#include <string>
using namespace std;

class GooseMeat: public Meat {
    private:
      const string name = "Goose Meat";
      const int type = 6;
      const int price = 20000;

    public:
        string getName(); // return name;
        int getType();  //return typeMeat;
        int getPrice(); // return price;
};


#endif
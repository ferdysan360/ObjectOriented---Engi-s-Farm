#ifndef _DUCK_MEAT_HPP
#define _DUCK_MEAT_HPP
#include "Meat.hpp"
#include <string>
using namespace std;

class DuckMeat: public Meat {
    private:
      const string name = "Duck Meat";
      const int type = 5;
      const int price = 31;

    public:
        string getName(); // return name;
        int getTypeProduct();  //return typeMeat;
        int getPrice(); // return price
};


#endif
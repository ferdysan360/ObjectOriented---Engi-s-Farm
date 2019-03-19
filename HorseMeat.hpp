#ifndef _HORSE_MEAT_HPP
#define _HORSE_MEAT_HPP
#include "Meat.hpp"
#include <string>
using namespace std;

class HorseMeat : public Meat {
    private:
      const string name = "Horse Meat";
      const int type = 8;
      const int price = 35;

    public:
      int getName(); //return name
      int getTypeProduct();  //return typeMeat;
      int getPrice(); // return price
};

#endif
#ifndef _GOAT_MEAT_HPP
#define _GOAT_MEAT_HPP
#include "Meat.hpp"
#include <string>
using namespace std;

class GoatMeat : public Meat {
  private:
    const string name = "Goat Meat";
    const int type = 9;
    const int price = 40000;

  public:
    string getName(); // return name;
    int getType();  //return typeMeat;
    int getPrice(); // return price
};

#endif
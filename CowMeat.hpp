#ifndef _COW_MEAT_HPP
#define _COW_MEAT_HPP
#include "Meat.hpp"
#include <string>
using namespace std;

class CowMeat : public Meat {
  private:
    const string name = "Cow Meat";
    const int type = 7;
    const int price = 30000;

  public:
    string getName(); // return name;
    int getType();  //return typeMeat;
    int getPrice(); // return price
};

#endif
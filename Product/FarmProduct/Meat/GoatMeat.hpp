#ifndef _GOAT_MEAT_HPP
#define _GOAT_MEAT_HPP
#include "../Meat.hpp"
#include <string>
using namespace std;

class GoatMeat : public Meat {
  private:

  public:
    GoatMeat(): Meat("Goat", 9, 40){}
    string getName_FProduct(); // return name
    int getType_FProduct(); //return typeEgg;        
    int getPrice_FProduct(); //return price;
};

#endif
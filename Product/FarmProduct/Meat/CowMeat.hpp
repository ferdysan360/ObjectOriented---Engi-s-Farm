#ifndef _COW_MEAT_HPP
#define _COW_MEAT_HPP
#include "../Meat.hpp"
#include <string>
using namespace std;

class CowMeat : public Meat {
  private:
  
  public:
    CowMeat(): Meat("Cow Meat", 7, 36){}
    string getName_FProduct(); // return name
    int getType_FProduct(); //return typeEgg;        
    int getPrice_FProduct(); //return price;
};

#endif
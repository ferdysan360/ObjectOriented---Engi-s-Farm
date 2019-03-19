#ifndef _COW_MEAT_HPP
#define _COW_MEAT_HPP
#include "../Meat.hpp"
#include <string>
using namespace std;

class CowMeat : public Meat {
  private:
  
  public:
    CowMeat(): Meat("Cow Meat", 7, 36){}
};

#endif
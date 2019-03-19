#ifndef _GOOSE_EGG_HPP
#define _GOOSE_EGG_HPP
#include "../Egg.hpp"
#include <string>
using namespace std;

class GooseEgg : public Egg {
  private:

  public:
    GooseEgg(): Egg("Goose Egg",3, 25){}
};

#endif
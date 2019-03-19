#ifndef _HORSE_MEAT_HPP
#define _HORSE_MEAT_HPP
#include "../Meat.hpp"
#include <string>
using namespace std;

class HorseMeat : public Meat {
    private:

    public:
      HorseMeat(): Meat("Horse Meat", 8, 35){}
};

#endif
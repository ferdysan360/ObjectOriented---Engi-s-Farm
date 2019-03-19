#ifndef _GOOSE_MEAT_HPP
#define _GOOSE_MEAT_HPP
#include "../Meat.hpp"
#include <string>
using namespace std;

class GooseMeat: public Meat {
    private:

    public:
        GooseMeat(): Meat("Goose Meat", 6, 20){}
};


#endif
#ifndef _MEAT_HPP
#define _MEAT_HPP
#include "../FarmProduct.hpp"
using namespace std;

class Meat: public FarmProduct {
    private:

    public:
        Meat(string _name, int _type_fproduct, int _price) : FarmProduct(_name, _type_fproduct, _price){}
};


#endif
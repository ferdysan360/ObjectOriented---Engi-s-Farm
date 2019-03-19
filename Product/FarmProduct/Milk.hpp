#ifndef _MILK_HPP
#define _MILK_HPP
#include "../FarmProduct.hpp"
using namespace std;

class Milk: public FarmProduct {
    private:
        
    public:
        Milk(string _name, int _type_fproduct, int _price) : FarmProduct(_name, _type_fproduct,_price){}
};


#endif
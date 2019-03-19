#ifndef _FARM_PRODUCT_HPP
#define _FARM_PRODUCT_HPP
#include "../Product.hpp"
using namespace std;

class FarmProduct: public Product {
    protected:
        
    public:
        FarmProduct(string _name, int _type_product, int _price) : Product(_name, _type_product, _price){}
        
};


#endif
#ifndef _FARM_PRODUCT_HPP
#define _FARM_PRODUCT_HPP
#include "../Product.hpp"
using namespace std;

class FarmProduct: public Product {
    protected:
        const int type_product;
    public:
        FarmProduct(string _name, int _type_fproduct, int _price) : Product(_name,_price), type_fproduct(_type_fproduct){}
        
};


#endif
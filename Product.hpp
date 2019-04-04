#ifndef _PRODUCT_HPP
#define _PRODUCT_HPP
#include <string>
using namespace std;

class Product {
    protected:
        const string name;
        const int type_product;
        const int price;

    public:
        
        Product(string _name, int _type_product, int _price);
        
        string getName();
        int getTypeProduct();
        int getPrice();
};


#endif
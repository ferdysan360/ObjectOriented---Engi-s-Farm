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
        bool operator==(const Product& P);
        Product(string _name, int _type_product, int _price): name(_name), type_product(_type_product) ,price(_price){}
        Product(const Product& P);
        string getName();
        int getTypeProduct();
        int getPrice();
};


#endif
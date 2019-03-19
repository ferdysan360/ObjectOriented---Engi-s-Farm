#ifndef _PRODUCT_HPP
#define _PRODUCT_HPP
using namespace std;

class Product {
    protected:
        const string name;
        const int price;

    public:
        Product(string name, int price): name(name), price(price){}
        int getPrice();
};


#endif
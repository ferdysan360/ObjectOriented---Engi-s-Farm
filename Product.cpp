#include "Product.hpp"
#include <iostream>
#include <string>

using namespace std;

Product::Product(string _name, int _type_product, int _price): name(_name), type_product(_type_product) ,price(_price){}

string Product::getName(){
    return name;
}
int Product::getTypeProduct() {
    return type_product;
}
int Product::getPrice(){
    return price;
}
#include "Product.hpp"
#include "Product/FarmProduct.hpp"
#include "Product/FarmProduct/Egg.hpp"
#include "Product/FarmProduct/Egg/GooseEgg.hpp"
#include "Product/FarmProduct/Egg/DuckEgg.hpp"

#include "List.hpp"

#include <iostream>
#include <vector>
using namespace std;

int main(){
    List<Product*> bag;
    bag.add(new GooseEgg());
    bag.add(new DuckEgg());
    Product * p = new DuckEgg();
    std::cout << bag.find(p);
    return 0;
}

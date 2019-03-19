#ifndef _GOOSE_EGG_HPP
#define _GOOSE_EGG_HPP
#include "../Egg.hpp"
#include <string>
using namespace std;

class GooseEgg : public Egg {
  private:
    const string name = "Goose Egg";
    const int type = 3;
    const int price = 25;

  public:
    string getName(); // return name;
    int getTypeProduct();    //return typeEgg;
    int getPrice();   //return price;
};

#endif
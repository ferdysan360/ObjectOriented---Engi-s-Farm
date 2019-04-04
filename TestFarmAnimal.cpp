#include "Product/FarmProduct/Egg/ChickenEgg.hpp"
#include "Product/FarmProduct/Egg/DuckEgg.hpp"
#include "Product/FarmProduct/Egg/GooseEgg.hpp"
//meat
#include "Product/FarmProduct/Meat/ChickenMeat.hpp"
#include "Product/FarmProduct/Meat/CowMeat.hpp"
#include "Product/FarmProduct/Meat/DuckMeat.hpp"
#include "Product/FarmProduct/Meat/GoatMeat.hpp"
#include "Product/FarmProduct/Meat/GooseMeat.hpp"
#include "Product/FarmProduct/Meat/HorseMeat.hpp"
//Milk
#include "Product/FarmProduct/Milk/CowMilk.hpp"
#include "Product/FarmProduct/Milk/GoatMilk.hpp"
#include "Product/FarmProduct/Milk/HorseMilk.hpp"

using namespace std;

class FarmAnimal
{
  public:
    FarmAnimal()
    {
    }
    virtual void sound()
    {
    }
};

class Sapi : public FarmAnimal
{
  private:
    string name;

  public:
    Sapi()
    {
    }
    Sapi(string _name)
    {
        name = _name;
    }
    void sound()
    {
        cout << "Moo" << endl;
    }
    void printName()
    {
        cout << name << endl;
    }
};

int main()
{
    FarmAnimal A = new Sapi();

    return 0;
}
#ifndef _KAMBING_HPP
#define _KAMBING_HPP
#include "MilkProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Kambing : public MeatProducingAnimal, public MilkProducingAnimal
{
  private:
    const string voice = "Mbek";

  public:
    Kambing();
    void sound(); // cout voice
};

#endif
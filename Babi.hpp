#ifndef _BABI_HPP
#define _BABI_HPP
#include "MilkProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Babi : public MeatProducingAnimal, public MilkProducingAnimal
{
  private:
    const string voice = "Oink";

  public:
    Babi(); // ctor
    void sound(); // cout voice
};

#endif
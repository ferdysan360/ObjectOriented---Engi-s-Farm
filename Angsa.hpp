#ifndef _ANGSA_HPP
#define _ANGSA_HPP
#include "EggProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Angsa : public EggProducingAnimal, public MeatProducingAnimal
{
  private:
    const string voice = "Ngok ngok ngok";

  public:
    Angsa();
    void sound(); //cout voice
};

#endif
#ifndef _SAPI_HPP
#define _SAPI_HPP
#include "MilkProducingAnimal.hpp"
#include "MeatProducingAnimal.hpp"
using namespace std;

class Sapi : public MeatProducingAnimal, public MilkProducingAnimal {
    private:
        const string voice = "Moo";

    public:
        Sapi(); // ctor
        void sound(); // cout voice

};

#endif
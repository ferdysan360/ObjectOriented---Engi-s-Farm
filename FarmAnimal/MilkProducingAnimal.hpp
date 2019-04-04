#ifndef _MILK_PRODUCING_ANIMAL_HPP
#define _MILK_PRODUCING_ANIMAL_HPP
#include <string>
#include "../FarmAnimal.hpp"
using namespace std;

class MilkProducingAnimal: public virtual FarmAnimal{
	public:
		MilkProducingAnimal();
		MilkProducingAnimal(int _x, int _y, string _voice, int _typeAnimal);
};

#endif
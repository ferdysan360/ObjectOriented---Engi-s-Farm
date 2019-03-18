#ifndef _MILK_PRODUCING_ANIMAL_HPP
#define _MILK_PRODUCING_ANIMAL_HPP
#include <string>
#include "FarmAnimal.hpp"
using namespace std;

class MilkProducingAnimal: public FarmAnimal{
	private:
		const int typeAnimal = 3;
	public:
		int getTypeAnimal();
		virtual void addMilk() = 0; // menambah Milk ke tas player
};

#endif
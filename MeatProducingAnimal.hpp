#ifndef _MEAT_PRODUCING_ANIMAL_HPP
#define _MEAT_PRODUCING_ANIMAL_HPP
#include <string>
#include "FarmAnimal.hpp"
using namespace std;

class MeatProducingAnimal: public FarmAnimal{
	private:
		const int typeAnimal = 2;
	public:
		int getTypeAnimal();
};


#endif
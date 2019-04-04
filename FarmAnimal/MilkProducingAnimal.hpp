#ifndef _MILK_PRODUCING_ANIMAL_HPP
#define _MILK_PRODUCING_ANIMAL_HPP
#include <string>
#include "../FarmAnimal.hpp"
using namespace std;

class MilkProducingAnimal: public virtual FarmAnimal{
	public:
		MilkProducingAnimal(int _x, int _y, string _voice, int _typeAnimal):FarmAnimal(_x, _y, _voice,  _typeAnimal){}
		void move(char c);
};

#endif
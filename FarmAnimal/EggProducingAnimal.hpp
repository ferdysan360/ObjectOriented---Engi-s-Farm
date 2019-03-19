#ifndef _EGG_PRODUCING_ANIMAL_HPP
#define _EGG_PRODUCING_ANIMAL_HPP
#include <string>
#include "../FarmAnimal.hpp"
using namespace std;

class EggProducingAnimal: public FarmAnimal{
	public:
		EggProducingAnimal(int _x, int _y, string _voice, int _typeAnimal):FarmAnimal(_x, _y, _voice, _typeAnimal){}
		void move(char c);
};

#endif
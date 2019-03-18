#ifndef _EGG_PRODUCING_ANIMAL_HPP
#define _EGG_PRODUCING_ANIMAL_HPP
#include <string>
#include "FarmAnimal.hpp"
using namespace std;

class EggProducingAnimal: public FarmAnimal{
	private:
		const int typeAnimal = 1;
        
	public:
		virtual void addEgg() = 0; // menambah telur ke tas player
		int getTypeAnimal();
};

#endif
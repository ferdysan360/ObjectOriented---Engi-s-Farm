#ifndef _FARM_ANIMAL_HPP
#define _FARM_ANIMAL_HPP
#include <string>
using namespace std;
class FarmAnimal{
	private:
		static int n_FarmAnimal;
		int hungry;
		int x;
		int y;
	public:
		// FarmAnimal();
		virtual void sound() = 0;
		virtual int getTypeAnimal() = 0;
		int getHungry();
		int getX();
		int getY();
		void move(char c);
		virtual void extract() = 0;
};

#endif
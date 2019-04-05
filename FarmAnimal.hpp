#ifndef _FARM_ANIMAL_HPP
#define _FARM_ANIMAL_HPP
#include <vector>

#include "Cell.hpp"
#include "Renderable.hpp"
//egg
#include "Product/FarmProduct/Egg/ChickenEgg.hpp"
#include "Product/FarmProduct/Egg/DuckEgg.hpp"
#include "Product/FarmProduct/Egg/GooseEgg.hpp"
//meat
#include "Product/FarmProduct/Meat/ChickenMeat.hpp"
#include "Product/FarmProduct/Meat/CowMeat.hpp"
#include "Product/FarmProduct/Meat/DuckMeat.hpp"
#include "Product/FarmProduct/Meat/GoatMeat.hpp"
#include "Product/FarmProduct/Meat/GooseMeat.hpp"
#include "Product/FarmProduct/Meat/HorseMeat.hpp"
//Milk
#include "Product/FarmProduct/Milk/CowMilk.hpp"
#include "Product/FarmProduct/Milk/GoatMilk.hpp"
#include "Product/FarmProduct/Milk/HorseMilk.hpp"

#include <string>

class FarmAnimal : public Renderable {
	protected:
		static int n_FarmAnimal;
		const int typeAnimal;
		int timeLeft;
		int hungry;
		bool hasProduct, dead=false;
		int x;
		int y;
		string voice;
	public:
		//n_FarmAnimal++; hungry = 5; hasProduct = false
		// FarmAnimal();
		FarmAnimal(int _x, int _y, string _voice, int _typeAnimal);
		~FarmAnimal(); //n_FarmAnimal--;
		virtual void sound() = 0;
		
		//getter
		virtual int getTypeAnimal() const;
		bool getHasProduct() const;
		int getHungry() const;
		int getX() const;
		int getY() const;
		string getVoice() const;

		//setter
		void setHasProduct(bool _hasProduct);
		void setHungry(int _hungry);
		void setX(int _x);
		void setY(int _y);
		bool isPointValid(int _x, int _y);
		bool isAreaValid(int tipeAnimal, int tipeArea);
		bool getDead();
		// jika dia lapar, kalau ada makanan maka dia akan makan, kalau tidak, maka dia akan move lalu cek apakah bisa makan
		// kalau ga lapar, maka dia akan move dan mengurangi tingkat kelaparan sebanyak 1
		void live(Cell* map[10][11]); 

		void eat(Cell* map[10][11]); //makan rumput
		
		virtual void move(Cell* map[10][11]); //didalam masing2 penghasil telur, daging sama susu, beda2 implementasinya
		virtual Product* extract() = 0; //bool hasProduct jadi false, push_back product kedalam bag player
};

#endif
#ifndef _FARM_ANIMAL_HPP
#define _FARM_ANIMAL_HPP
#include <vector>
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

class FarmAnimal{
	protected:
		static int n_FarmAnimal;
		const int typeAnimal;
		int hungry;
		bool hasProduct;
		int x;
		int y;
		string voice;
	public:
		//n_FarmAnimal++; hungry = 5; hasProduct = false
		FarmAnimal(int _x, int _y, string _voice, int _typeAnimal): typeAnimal(_typeAnimal){}
		FarmAnimal(const FarmAnimal& F);
		~FarmAnimal(); //n_FarmAnimal--;
		bool operator==(const FarmAnimal& F);
		virtual void sound() = 0;
		
		//getter
		virtual int getTypeAnimal();
		bool getHasProduct();
		int getHungry();
		int getX();
		int getY();

		//setter
		void setHasProduct();
		void setHungry();
		void setX();
		void setY();

		// jika dia lapar, kalau ada makanan maka dia akan makan, kalau tidak, maka dia akan move lalu cek apakah bisa makan
		// kalau ga lapar, maka dia akan move dan mengurangi tingkat kelaparan sebanyak 1
		void live(); 

		void eat(); //makan rumput
		
		virtual void move(char c); //didalam masing2 penghasil telur, daging sama susu, beda2 implementasinya
		virtual void extract(std::vector<Product>* bag) = 0; //bool hasProduct jadi false, push_back product kedalam bag player
};

#endif
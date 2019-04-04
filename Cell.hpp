//Kelas : Cell.hpp

#ifndef _CELL_H
#define _CELL_H

#include "Renderable.hpp"
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

#include "Product/FarmProduct/Milk/CowMilk.hpp"
#include "Product/FarmProduct/Milk/GoatMilk.hpp"
#include "Product/FarmProduct/Milk/HorseMilk.hpp"

class Cell : public Renderable {
    protected:
        const int typeCell;
        bool occupied;
        bool hasGrass;

    public:
        Cell();

        Cell(char renderChar, int typeCell, bool isOccupied);

        bool isOccupied();

        void setOccupied(bool newStat);
        
        int getTypeCell();

        bool isHasGrass();

        void setHasGrass(bool newStat);
};
#endif
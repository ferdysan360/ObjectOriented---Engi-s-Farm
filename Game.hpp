// class game
// file : game.hpp

#ifndef _GAME_HPP_
#define _GAME_HPP_
#include "Player.hpp"

#include "Cell/Facility/Mixer.hpp"
#include "Cell/Facility/Truck.hpp"
#include "Cell/Facility/Well.hpp"

#include "Cell/Land/Barn.hpp"
#include "Cell/Land/Coop.hpp"
#include "Cell/Land/Grassland.hpp"

#include "FarmAnimal/Angsa.hpp"
#include "FarmAnimal/Ayam.hpp"
#include "FarmAnimal/Bebek.hpp"
#include "FarmAnimal/Kambing.hpp"
#include "FarmAnimal/Kuda.hpp"
#include "FarmAnimal/Sapi.hpp"

#include <fstream>

class Game {
    private:
        Cell* map[10][11];
        int gameTime;

        Player P;

        List<FarmAnimal*> listOfAnimal;
        List<Product*> listOfProduct;


    public:

        Game();
        //menginisialisasi data game
        //1. pertama2 readFile
        //2. Masukin ke map game
        //3. tempatin hewan
        //4. inisialisasi tas player
        //5. inisialisasi uang dan waktu
        //6. 
        
        void initializeGame();

        //membuat render UI
        void renderUI();

        //dia yang ngedelete kalau ada yang mati
        void forwardTime();

        void placeAnimal();

        void placePlayer();

        void moveAnimal();

        void readMap(string namaFile);

        void liveAnimal();

        void clearDeadAnimal();
};

#endif
// class game
// file : game.hpp

#ifndef _GAME_HPP_
#define _GAME_HPP_

#include "Cell.hpp"
#include "List.hpp"
#include "FarmAnimal.hpp"

class Game {
    private:
        Cell** map;
        int gameTime;

        List<FarmAnimal*> listOfAnimal;
        List<Product*> listOfProduct;


    public:
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

        
};

#endif
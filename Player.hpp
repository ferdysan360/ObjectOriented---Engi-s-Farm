// class player
// file : player.hpp

#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_
#define MAX_WATER 100
#define MAX_BAG 10
#include "Product.hpp"
#include "FarmAnimal.hpp"

class Player {
    private:
        int WaterContainer;         // Container air player, nilai maksimumnya adalah MAX_WATER

        Product* Bag;               // Tas player, nilai maksimumnya adalah MAX_BAG

    public:
        Player();                   // ctor player, inisialisasi waterContainer = 0 & bag = 0

        Player(int, Product*);      // ctor user-defined player, inisialisasi

        Player(const Player&);      // cctor player

        Player& operator=(const Player&); // operator= overloading class player

        void Interact(FarmAnimal*); // {F->addProduct()}

        void Kill();

};

#endif
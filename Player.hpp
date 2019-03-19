// class player
// file : player.hpp

#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_
#define MAX_BAG 10
#include "Product.hpp"
#include "FarmAnimal.hpp"

class Player {
    private:
        int WaterContainer;         // Container air player, nilai maksimumnya adalah MAX_WATER

        Product* Bag;               // Tas player, nilai maksimumnya adalah MAX_BAG
        int money;

    public:
        Player();                   // ctor player, inisialisasi waterContainer = 0 & Bag = 0

        Player(int, Product*);      // ctor user-defined player, inisialisasi

        // find tile apa yang ada disekitar
        // return 1 jika facility
        // return 2 jika land
        int Find();

        void Talk(); // Berbicara kepada hewan

        void Interact(); // Berinteraksi dengan benda di samping player (FarmAnimal & Facility)

        void Move(); // Menggerakkan player

        void Kill(); // Menyembelih hewan, bila animalnya termasuk yang meatProducer

        void Grow(); // Menyiram land dengan wadah air yang dimiliki
                     // dan menumbuhkan rumput di petak tersebut

        //bagian player yang berfungsi untuk menerima command
        void ReceiveCommand();
};

#endif
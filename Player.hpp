// class player
// file : player.hpp

#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_
#define MAX_BAG 10
#include "List.hpp"
#include "Product.hpp"
#include "FarmAnimal.hpp"

class Player : public Renderable {
    private:
        int x,y;
        int WaterContainer;         // Container air player, nilai maksimumnya adalah MAX_WATER
        int direction;
        List<Product*> Bag;             // Tas player, nilai maksimumnya adalah MAX_BAG
        int money;

    public:
        Player();
        Player(int x, int y);                 // ctor player, inisialisasi waterContainer = 0 & Bag = 0

        Player(int, Product*);      // ctor user-defined player, inisialisasi

        // find tile apa yang ada disekitar
        // return 1 jika facility
        // return 2 jika land
        int find();

        int getMoney();

        void setMoney(int newVal);

        int getWater();

        void setWater(int water);

        void Talk(); // Berbicara kepada hewan

        void Interact(); // Berinteraksi dengan benda di samping player (FarmAnimal & Facility)

        void Move(); // Menggerakkan player

        void Kill(); // Menyembelih hewan, bila animalnya termasuk yang meatProducer

        void Grow(); // Menyiram land dengan wadah air yang dimiliki
                     // dan menumbuhkan rumput di petak tersebut
        List<Product*> getBag();
        //bagian player yang berfungsi untuk menerima command
        void ReceiveCommand();

        int getX();
        int getY();
};

#endif
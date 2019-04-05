// class player
// file : player.hpp

#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_
#define MAX_BAG 10
#include "List.hpp"
#include "Product.hpp"
#include "FarmAnimal.hpp"
#include "Cell/Facility/Mixer.hpp"
#include "Cell/Facility/Truck.hpp"
#include "Cell/Facility/Well.hpp"

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
        int find(int x, int y, List<FarmAnimal*> listOfAnimal);

        int getMoney();

        void setMoney(int newVal);

        int getWater();

        void setWater(int water);

        void Talk(List<FarmAnimal*> listOfAnimal); // Berbicara kepada hewan

        void Interact(List<FarmAnimal*> listOfAnimal, Cell* map[10][11], int gameTime); // Berinteraksi dengan benda di samping player (FarmAnimal & Facility)

        void Move(int dir, Cell* map[10][11]); // Menggerakkan player

        void Kill(List<FarmAnimal*>* listOfAnimal, Cell* map[10][11]); // Menyembelih hewan, bila animalnya termasuk yang meatProducer

        void Grow(Cell* map[10][11]); // Menyiram land dengan wadah air yang dimiliki
                     // dan menumbuhkan rumput di petak tersebut
        List<Product*> getBag();
        //bagian player yang berfungsi untuk menerima command
        void ReceiveCommand();

        void changeDirection(int direction);
        int getX();
        int getY();
        bool isPointValid(int _x, int _y);
};

#endif
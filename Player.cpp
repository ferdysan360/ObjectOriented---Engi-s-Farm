#include "Player.hpp"

Player::Player() {
}


Player::Player(int x, int y) {                   // ctor player, inisialisasi waterContainer = 0 & Bag = 0
    this->x=x;
    this->y=y;
    renderChar = '^';
    direction = 0;
}

// ctor user-defined player, inisialisasi
Player::Player(int, Product*) {

}

// find tile apa yang ada disekitar
// return 1 jika facility
// return 2 jika land
int Player::find() {

}

int Player::getMoney() {
    return money;
}

void Player::setMoney(int newVal) {
    money = newVal;
}

int Player::getWater() {
    return WaterContainer;
}

void Player::setWater(int water) {
    WaterContainer = water;
}

// Berbicara kepada hewan
void Player::Talk() {
    
} 

// Berinteraksi dengan benda di samping player (FarmAnimal & Facility)
void Player::Interact() {
    int targetX, targetY;
    targetX = x;
    targetY = y;

    //atas
    if (direction==0) {
        
    }
} 

// Menggerakkan player
void Player::Move() {

}

// Menyembelih hewan, bila animalnya termasuk yang meatProducer
void Player::Kill() {
    
}

// Menyiram land dengan wadah air yang dimiliki
void Player::Grow() {

}

// dan menumbuhkan rumput di petak tersebut
List<Product*> Player::getBag() {
    return Bag;
}

//bagian player yang berfungsi untuk menerima command
void ReceiveCommand();

int Player::getX() {
    return x;
}

int Player::getY() {
    return y;
}
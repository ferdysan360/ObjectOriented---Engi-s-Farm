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
int Player::find(int x, int y) {
    
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
void Player::Interact(List<FarmAnimal*> listOfAnimal, Cell* map[11][10]) {
    int targetX, targetY, typeCell, i1, i2;
    targetX = x;
    targetY = y;

    //atas
    if (direction==0) {
        targetY--;
    } 
    //kanan
    else if (direction == 1) {
        targetX++;
    }
    //bawah
    else if (direction == 2) {
        targetY++;
    }
    //kiri
    else {
        targetX--;
    }
    
    //jika target adalah tanah kosong
    if (!map[targetY][targetX]->isOccupied()) {
        std::cout << "Can't interact" << endl;
    } 
    //adalah binatang atau facility
    else {
        typeCell = map[targetY][targetX]->getTypeCell();
        if (typeCell<4) { //facility
            if (typeCell==1) {
                Mixer* pM = static_cast<Mixer*>(map[targetY][targetX]);
                if (pM!=nullptr) {
                    cout << "Masukkan index barang: \n";
                    cin >> i1 >> i2;
                    pM->Mix(i1,i2, &Bag);
                } else {
                    cout << "Cast to mixer failed!" << endl;
                }
            } else if (typeCell==2) {
                Truck* pT = static_cast<Truck*>(map[targetY][targetX]);
                if (pT!=nullptr) {
                    pT->sellProduct(&Bag, &money);
                    cout << "Berhasil jualan di truck!" << endl;
                } else {
                    cout << "Cast to truck failed!" << endl;
                }
            } else if (typeCell==3) {
                Well* pW = static_cast<Well*>(map[targetY][targetX]);
                if (pW!=nullptr) {
                    pW->getWater(&WaterContainer);
                    cout << "Berhasil mendapatkan air!" << endl;
                } else {
                    cout << "Cast to well failed!" << endl;
                }
            }
        } else { //land, berarti interaksi dengan binatang

        }
    }
} 

// Menggerakkan player
void Player::Move(int dir, Cell* map[11][10]) {
    // move
    if (dir == 0 && isPointValid(y-1,x) && !map[y-1][x]->isOccupied()) { // up
        map[y-1][x]->setOccupied(false);
        y--;
        map[y-1][x]->setOccupied(true);
    }
    else if (dir == 1 && isPointValid(y,x+1) && !map[y][x+1]->isOccupied()) { // right
        map[y][x+1]->setOccupied(false);
        x++;
        map[y][x+1]->setOccupied(true);
    }
    else if (dir == 2 && isPointValid(y+1,x) && !map[y+1][x]->isOccupied()) { // down
        map[y+1][x]->setOccupied(false);
        y++;
        map[y+1][x]->setOccupied(true);
    }
    else { // left
        if (isPointValid(y,x-1) && !map[y][x-1]->isOccupied()) {
            map[y][x-1]->setOccupied(false);
            x--;
            map[y][x-1]->setOccupied(true);
        }
    }
    
    // facing
    changeDirection(dir);
}

// Menyembelih hewan, bila animalnya termasuk yang meatProducer
void Player::Kill() {
    
}

// Menyiram land dengan wadah air yang dimiliki
void Player::Grow(Cell* map[11][10]) {
    if (!map[y][x]->isHasGrass()) {
        map[y][x]->setHasGrass(true);
        cout << "Grass sudah ditumbuhkan" << endl;
    } else {
        cout << "Grass masih ada" << endl;
    }
}

// dan menumbuhkan rumput di petak tersebut
List<Product*> Player::getBag() {
    return Bag;
}

//bagian player yang berfungsi untuk menerima command
void Player::ReceiveCommand() {

}

int Player::getX() {
    return x;
}

int Player::getY() {
    return y;
}

bool Player::isPointValid(int _y, int _x) {
    return (_y >= 0 && _y < 10 && _x >= 0 && _x < 11);
}

void Player::changeDirection(int direction) {
    //atas
    if (direction==0) {
        renderChar = '^';
    }
    //kanan 
    else if (direction==1) {
        renderChar = '>';   
    }
    //bawah
    else if (direction==2) {
        renderChar = 'v';
    }
    //kiri
    else {
        renderChar = '<';
    }
    this->direction=direction;
}
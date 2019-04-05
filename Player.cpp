#include "Player.hpp"

Player::Player() {
    
}


Player::Player(int x, int y) {                   // ctor player, inisialisasi waterContainer = 0 & Bag = 0
    this->x=x;
    this->y=y;
    renderChar = '^';
    direction = 0;
    // Bag.add(new ChickenEgg());
    // Bag.add(new ChickenMeat());
}

// ctor user-defined player, inisialisasi
Player::Player(int, Product*) {

}

// find tile apa yang ada disekitar
// return 1 jika facility
// return 2 jika land
int Player::find(int x, int y, List<FarmAnimal*> listOfAnimal) {
    int xAnimal, yAnimal;
    for (int i=0; i<listOfAnimal.getNeff(); i++) {
        xAnimal = listOfAnimal.get(i)->getX();
        yAnimal = listOfAnimal.get(i)->getY();
        if (x==xAnimal && y==yAnimal) {
            return i;
        }
    }
    return -1;
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
void Player::Talk(List<FarmAnimal*> listOfAnimal) {
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
    // ada hewan
    // cout << "Target: " << x << " " << y << endl;
    int idxHewan = find(targetX,targetY,listOfAnimal);
    if (idxHewan!=-1) {
        listOfAnimal.get(idxHewan)->sound();
    } else {
        
        cout << "Tidak ada animal didepan mata\n";
        cout << targetX << " " << targetY << endl;
    }
}

// Berinteraksi dengan benda di samping player (FarmAnimal & Facility)
void Player::Interact(List<FarmAnimal*> listOfAnimal, Cell* map[10][11], int gameTime) {
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
                    pT->sellProduct(&Bag, &money, gameTime);
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
            int indexAnimal = find(targetX, targetY, listOfAnimal);
            if (listOfAnimal.get(indexAnimal)->getHasProduct()) {
                Bag.add(listOfAnimal.get(indexAnimal)->extract());
            } else {
                cout << "Animal tidak memiliki produk!" << endl;
            }
            
        }
    }
} 

// Menggerakkan player
void Player::Move(int dir, Cell* map[10][11]) {
    // move
    if (dir == 0 && isPointValid(y-1,x) && !map[y-1][x]->isOccupied()) { // up
        map[y][x]->setOccupied(false);
        y--;
        map[y][x]->setOccupied(true);
    }
    else if (dir == 1 && isPointValid(y,x+1) && !map[y][x+1]->isOccupied()) { // right
        map[y][x]->setOccupied(false);
        x++;
        map[y][x]->setOccupied(true);
    }
    else if (dir == 2 && isPointValid(y+1,x) && !map[y+1][x]->isOccupied()) { // down
        map[y][x]->setOccupied(false);
        y++;
        map[y][x]->setOccupied(true);
    }
    else if (dir == 3 && isPointValid(y,x-1) && !map[y][x-1]->isOccupied()) { // left
        map[y][x]->setOccupied(false);
        x--;
        map[y][x]->setOccupied(true);
    }
    
    // facing
    changeDirection(dir);
}

// Menyembelih hewan, bila animalnya termasuk yang meatProducer
void Player::Kill(List<FarmAnimal*>* listOfAnimal, Cell* map[10][11]) {
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
    
    int idxHewan = find(targetX,targetY, *listOfAnimal);
    if (idxHewan!=-1) {
        int typeHewan = (*listOfAnimal).get(idxHewan)->getTypeAnimal();
        

        // delete (*listOfAnimal).get(idxHewan);
        map[targetY][targetX]->setOccupied(false);

        (*listOfAnimal).removeIdx(idxHewan);
        
        //angsa
        if (typeHewan==1) {
            Bag.add(new GooseMeat());
        }//ayam
        else if (typeHewan==2) {
            Bag.add(new ChickenMeat());
        }
        else if (typeHewan==3) {
            Bag.add(new DuckMeat());
        }
        else if (typeHewan==4) {
            Bag.add(new GoatMeat());
        }
        else if (typeHewan==5) {
            Bag.add(new HorseMeat());
        }
        else if (typeHewan==6) {
            Bag.add(new CowMeat());
        }
        cout << "Berhasil memasukkan product" << endl;
        
    } else {
        cout << "Tidak ada animal didepan mata\n";
        // cout << targetX << " " << targetY << endl;
    }

}

// Menyiram land dengan wadah air yang dimiliki
void Player::Grow(Cell* map[10][11]) {
    if (!map[y][x]->isHasGrass()) {
        if (WaterContainer>=10) {
            map[y][x]->setHasGrass(true);
            WaterContainer-=10;
            cout << "Grass sudah ditumbuhkan" << endl;
        } else {
            cout << "Water tidak cukup" << endl;
        }
        
        
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
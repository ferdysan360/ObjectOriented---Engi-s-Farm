#include "Game.hpp"
#include <stdlib.h>
#include <iostream>
#include <string>
#include <cstdlib> // untuk random number generation
#define mixer 1
#define truck 2
#define well 3
#define barn 4
#define coop 5
#define grassland 6

Game::Game() {
    initializeGame();
};

void Game::initializeGame(){
    cout << "Game inisialized!" << endl;
    readMap("map.txt");
    gameTime=0;
    placePlayer();
    placeAnimal();
    P.setMoney(0);
    P.setWater(MAX_WATER);
};

void Game::renderUI(){
    char dummyMap [10][11] = {'\0'};
    int x,y;
    // system("clear");
    // cout << "Ada " << listOfAnimal.getNeff() << " animal" << endl;
    
    // ngeluarin map

    //animal
    for (int i=0; i<listOfAnimal.getNeff(); i++) {
        x = listOfAnimal.get(i)->getX();
        y = listOfAnimal.get(i)->getY();
        // cout << "x: " << x << " y: " << y<< endl;
        dummyMap[y][x] = listOfAnimal.get(i)->getRender();
    }
    //ngeluarin map
    for (int i=0; i<10; i++) {
        std::cout << "|";
        for(int j=0; j<11; j++) {
            if (P.getX()==j && P.getY()==i) {
                // cout << j << i << endl;
                std::cout << P.getRender() << "|";
            }
            else if (dummyMap[i][j]=='\0') {
                std::cout << map[i][j]->getRender() << "|";
            } else {
                std::cout << dummyMap[i][j] << "|";
            }
        }
        std::cout << endl;
    }
    
    // cout << "pas kena player" << P.getX() << P.getY() << endl;
    // if (map[P.getY()][P.getX()]->isOccupied()) {
    //     cout << "true" << endl;
    // } else {
    //     cout << "false" << endl;
    // }
    //ngeluarin inventory
    List<Product*> bag = P.getBag();
    for (int i=0; i<bag.getNeff(); i++) {
        std::cout << i+1 <<". " << bag.get(i)->getName() << endl;
    }

    std::cout << "Money: " << P.getMoney() << endl;
    std::cout << "Water: " << P.getWater() << endl;
};

void Game::forwardTime(){
    gameTime++;
    // moveAnimal();
    if (listOfAnimal.getNeff()==0) {
        cout << "End Game" << endl;
        exit;
    } else {
        liveAnimal();
        clearDeadAnimal();
    }
    
};

void Game::readMap(string namaFile) {
    int i;
    char a;
    string line;
    fstream mapFile;
    mapFile.open(namaFile);
    i=0;
    while (getline(mapFile, line)) {
        for (int j=0; j<line.length(); j++) {
            switch (line[j]) {
                case 'c': //coop
                    map[i][j] = new Coop(false);
                    a = map[i][j] -> getRender();
                    // std::cout << a << " ";
                    break;
                
                case 'g': //grassland
                    map[i][j] = new Grassland(false);
                    a = map[i][j] -> getRender();
                    //std::cout << a << " ";
                    break;

                case 'b': //barn
                    map[i][j] = new Barn(false);
                    a = map[i][j] -> getRender();
                    //std::cout << a << " ";
                    break;

                case 'w': //well
                    map[i][j] = new Well();
                    a = map[i][j] -> getRender();
                    map[i][j]->setOccupied(true);
                    //std::cout << a << " ";
                    break;
                
                case 'm': //mixer
                    map[i][j] = new Mixer();
                    a = map[i][j] -> getRender();
                    map[i][j]->setOccupied(true);
                    //std::cout << a << " ";
                    break;

                case 't': //truck
                    map[i][j] = new Truck();
                    a = map[i][j] -> getRender();
                    map[i][j]->setOccupied(true);
                    //std::cout << a << " ";
                    break;

                default:
                    std::cout << "error";
                    break;
            }
        }
        i++;
    }
    mapFile.close();
};

void Game::placeAnimal() {
    bool berhasil=false, occupied;
    int x, y, typeCell;

    srand((unsigned)time(0));
    
    berhasil = false;
    //place angsa
    while (!berhasil) {
        x = rand()%11;
        y = rand()%10;
        
        typeCell = map[y][x]->getTypeCell();
        // cout << typeCell << endl;
        occupied = map[y][x]->isOccupied();
        //barn or coop
        if ((typeCell==barn || typeCell==coop)&&(!occupied)) {
            // cout << x << " " << y << "angsa" << endl;
            listOfAnimal.add(new Angsa(x,y));
            map[y][x]->setOccupied(true);
            berhasil = true;
        }
    }

    berhasil = false;
    //place ayam
    while (!berhasil) {
        x = rand()%11;
        y = rand()%10;
        typeCell = map[y][x]->getTypeCell();
        occupied = map[y][x]->isOccupied();
        // cout << "ayam :" << x << " " << y;
        //barn or coop
        if ((typeCell==barn || typeCell==coop)&&(!occupied)) {
            listOfAnimal.add(new Ayam(x,y));
            map[y][x]->setOccupied(true);
            berhasil = true;
        }
    }

    berhasil = false;
    //place bebek
    while (!berhasil) {
        x = rand()%11;
        y = rand()%10;
        typeCell = map[y][x]->getTypeCell();
        occupied = map[y][x]->isOccupied();
        //barn or coop
        if ((typeCell==barn || typeCell==coop)&&(!occupied)) {
            listOfAnimal.add(new Bebek(x,y));
            map[y][x]->setOccupied(true);
            berhasil = true;
        }
    }

    berhasil = false;
    //place Kambing
    while (!berhasil) {
        x = rand()%11;
        y = rand()%10;
        typeCell = map[y][x]->getTypeCell();
        occupied = map[y][x]->isOccupied();
        //barn or grassland
        if ((typeCell==barn || typeCell==grassland)&&(!occupied)) {
            listOfAnimal.add(new Kambing(x,y));
            map[y][x]->setOccupied(true);
            berhasil = true;
        }
    }

    berhasil = false;
    //place kuda
    while (!berhasil) {
        x = rand()%11;
        y = rand()%10;
        typeCell = map[y][x]->getTypeCell();
        occupied = map[y][x]->isOccupied();
        //barn or grassland
        if ((typeCell==barn || typeCell==grassland)&&(!occupied)) {
            listOfAnimal.add(new Kuda(x,y));
            map[y][x]->setOccupied(true);
            berhasil = true;
        }
    }

    berhasil = false;
    //place sapi
    while (!berhasil) {
        x = rand()%11;
        y = rand()%10;
        typeCell = map[y][x]->getTypeCell();
        occupied = map[y][x]->isOccupied();
        //barn or grassland
        if ((typeCell==barn || typeCell==grassland)&&(!occupied)) {
            listOfAnimal.add(new Sapi(x,y));
            map[y][x]->setOccupied(true);
            berhasil = true;
        }
    }
    cout << "Place Animal Succeed!" << endl;
};

void Game::placePlayer() {
    bool berhasil=false, occupied;
    int x, y, typeCell;

    srand((unsigned)time(0));

    //place manusia
    while (!berhasil) {
        x = rand()%11;
        y = rand()%10;
        
        typeCell = map[y][x]->getTypeCell();
        // cout << typeCell << endl;
        occupied = map[y][x]->isOccupied();
        //barn or coop
        if (!occupied) {
            // cout << x << " " << y << "angsa" << endl;
            P = Player(x,y);
            map[y][x]->setOccupied(true);
            berhasil = true;
        }
    }
    cout << "Placed player to: " << x << " " << y << endl;
}

void Game::movePlayer(int direction) {
    P.Move(direction, map);
}

void Game::moveAnimal() {
    for (int i=0; i<listOfAnimal.getNeff(); i++) {
        listOfAnimal.get(i)->live(map);
    }
    cout << "Move animal Succeed!" << endl;
};

void Game::liveAnimal() {
    for (int i=0; i<listOfAnimal.getNeff(); i++) {
        listOfAnimal.get(i)->live(map);
    }
    cout << "Menuakan animal succeed!" << endl;
}

void Game::clearDeadAnimal() {
    int i=0;
    while (i < listOfAnimal.getNeff()) {
        // cout << i+1 <<listOfAnimal.get(i)->getDead() << endl;
        if (listOfAnimal.get(i)->getDead()) {
            int x = listOfAnimal.get(i)->getX();
            int y = listOfAnimal.get(i)->getY();
            map[y][x]->setOccupied(false);
            listOfAnimal.removeIdx(i);
        } else {
            i++;
        }
    }
}

void Game::playerTalk() {
    P.Talk(listOfAnimal);
}

void Game::playerGrow() {
    P.Grow(map);
}

void Game::playerKill() {
    P.Kill(&listOfAnimal, map);
}

void Game::playerInteract() {
    P.Interact(listOfAnimal, map, gameTime);
}

Player Game::getPlayer() {
    return P;
}
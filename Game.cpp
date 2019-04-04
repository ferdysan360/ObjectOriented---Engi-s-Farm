#include "Game.hpp"
#include <iostream>
#include <string>
#include <cstdlib> // untuk random number generation
using namespace std;


void Game::initializeGame(){
    readMap("map.txt");
    placeAnimal();
};

void Game::renderUI(){
    // ngeluarin map
    for (int i=0; i<10; i++) {
        for(int j=0; j<11; j++) {
            cout << map[i][j]->getRender() << " ";
        }
        cout << endl;
    }

    //ngeluarin inventory
    List<Product*> bag = P.getBag();
    for (int i=0; i<bag.getNeff(); i++) {
        cout << i+1 << bag.get(i)->getName() << endl;
    }

    cout << "Money: " << P.getMoney() << endl;
    cout << "Water: " << P.getWater() << endl;
};

void Game::forwardTime(){
    gameTime++;
    moveAnimal();
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
                    a = map[i][j] -> getRenderable();
                    cout << a << " ";
                    break;
                
                case 'g': //grassland
                    map[i][j] = new Grassland(false);
                    a = map[i][j] -> getRenderable();
                    cout << a << " ";
                    break;

                case 'b': //barn
                    map[i][j] = new Barn(false);
                    a = map[i][j] -> getRenderable();
                    cout << a << " ";
                    break;

                case 'w': //well
                    map[i][j] = new Well();
                    a = map[i][j] -> getRenderable();
                    map[i][j]->setOccupied(true);
                    cout << a << " ";
                    break;
                
                case 'm': //mixer
                    map[i][j] = new Mixer();
                    a = map[i][j] -> getRenderable();
                    map[i][j]->setOccupied(true);
                    cout << a << " ";
                    break;

                case 't': //truck
                    map[i][j] = new Truck();
                    a = map[i][j] -> getRenderable();
                    map[i][j]->setOccupied(true);
                    cout << a << " ";
                    break;

                default:
                    cout << "error";
                    break;
            }
        }
        i++;
    }
    mapFile.close();
};

void Game::placeAnimal() {
    bool berhasil=false;
    int x, y, typeCell;

    srand((unsigned)time(0));

    //place angsa
    while (!berhasil) {
        x = rand()%11;
        y = rand()%10;
        // jika merupakan land
        if (map[y][x]->getTypeCell()==2) {
            typeCell = map[y][x]->getTypeCell();

            //barn or coop
            if (typeCell==1 || typeCell==2) {
                listOfAnimal.add(new Angsa(x,y));
                map[y][x]->setOccupied(true);
                berhasil = true;
            }

        }
    }

    berhasil = false;
    //place ayam
    while (!berhasil) {
        x = rand()%11;
        y = rand()%10;
        // jika merupakan land
        if (map[y][x]->getTypeCell()==2) {
            typeCell = map[y][x]->getTypeCell();

            //barn or coop
            if (typeCell==1 || typeCell==2) {
                listOfAnimal.add(new Ayam(x,y));
                map[y][x]->setOccupied(true);
                berhasil = true;
            }

        }
    }

    berhasil = false;
    //place bebek
    while (!berhasil) {
        x = rand()%11;
        y = rand()%10;
        // jika merupakan land
        if (map[y][x]->getTypeCell()==2) {
            typeCell = map[y][x]->getTypeCell();

            //barn or coop
            if (typeCell==1 || typeCell==2) {
                listOfAnimal.add(new Bebek(x,y));
                map[y][x]->setOccupied(true);
                berhasil = true;
            }

        }
    }

    berhasil = false;
    //place kambing
    while (!berhasil) {
        x = rand()%11;
        y = rand()%10;
        // jika merupakan land
        if (map[y][x]->getTypeCell()==2) {
            typeCell = map[y][x]->getTypeCell();

            //barn or grass
            if (typeCell==1 || typeCell==3) {
                listOfAnimal.add(new Kambing(x,y));
                map[y][x]->setOccupied(true);
                berhasil = true;
            }
        }
    }

    berhasil = false;
    //place kuda
    while (!berhasil) {
        x = rand()%11;
        y = rand()%10;
        // jika merupakan land
        if (map[y][x]->getTypeCell()==2) {
            typeCell = map[y][x]->getTypeCell();

            //barn or grass
            if (typeCell==1 || typeCell==3) {
                listOfAnimal.add(new Kuda(x,y));
                map[y][x]->setOccupied(true);
                berhasil = true;
            }

        }
    }

    berhasil = false;
    //place sapi
    while (!berhasil) {
        x = rand()%11;
        y = rand()%10;
        // jika merupakan land
        if (map[y][x]->getTypeCell()==2) {
            typeCell = map[y][x]->getTypeCell();

            //barn or grass
            if (typeCell==1 || typeCell==3) {
                listOfAnimal.add(new Sapi(x,y));
                map[y][x]->setOccupied(true);
                berhasil = true;
            }

        }
    }
};

void Game::moveAnimal() {
    for (int i=0; i<listOfAnimal.getNeff(); i++) {
        listOfAnimal.get(i)->move(map);
    }
};


int main() {
    Game a;
    a.readMap("map.txt");
}
#include "Game.hpp"
#include <iostream>
#include <unistd.h>

int main() {
    int inputInt;
    string input;
    Game gameObj;
    
    // gameObj.initializeGame();
    // cout << "\033[1;31mbold red text\033[0m\n";
    cout<<" _______ .__   __.   _______  __   __     _______.    _______    ___      .______      .___  ___."<<endl;
    cout<<"|   ____||  \\ |  |  /  _____||  | (_ )   /       |   |   ____|  /   \\     |   _  \\     |   \\/   |"<<endl;
    cout<<"|  |__   |   \\|  | |  |  __  |  |  |/   |   (----`   |  |__    /  ^  \\    |  |_)  |    |  \\  /  |"<<endl;
    cout<<"|   __|  |  . `  | |  | |_ | |  |        \\   \\       |   __|  /  /_\\  \\   |      /     |  |\\/|  |"<<endl;
    cout<<"|  |____ |  |\\   | |  |__| | |  |    .----)   |      |  |    /  _____  \\  |  |\\  \\----.|  |  |  |"<<endl;
    cout<<"|_______||__| \\__|  \\______| |__|    |_______/       |__|   /__/     \\__\\ | _| `._____||__|  |__|"<<endl;
    cout<<"Welcome to ENGI's FARM\n";
    cout<<"1. Start\n";
    cout<<"2. Exit\n";
    cout<<">> ";
    
    cin >> inputInt;
    if (inputInt==2) {
        exit(0);
    }
                                                                              
    gameObj.renderUI();
    cout << "Enter your input: ";
    cin >> input;
    while (input != "exit") {
        if (input == "w") {
            // move up
            gameObj.movePlayer(0);
        }
        else if (input == "d") {
            // move right
            gameObj.movePlayer(1);
        }
        else if (input == "s") {
            // move down
            gameObj.movePlayer(2);
        }
        else if (input == "a") {
            // move left
            gameObj.movePlayer(3);
        }
        else if (input == "talk") {
            gameObj.playerTalk();
        }
        else if (input == "grow") {
            gameObj.playerGrow();
        }
        else if (input == "kill") {
            gameObj.playerKill();
        }
        else if (input == "interact") {
            gameObj.playerInteract();
        }
        gameObj.forwardTime();
        gameObj.renderUI();
        cout << "Enter your input: ";
        cin >> input;
    }
    return 0;
}
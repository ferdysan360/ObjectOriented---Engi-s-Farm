#include "Game.hpp"
#include <iostream>

int main() {
    string input;
    Game gameObj;
    
    // gameObj.initializeGame();

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
#include "Game.hpp"

int main() {
    string input;
    Game gameObj;
    return 0;
    gameObj.initializeGame();
    cin >> input;
    while (input != "exit") {
        if (input == "up") {
            // move up
            break;
        }
        else if (input == "down") {
            // move down
            break;
        }
        else if (input == "left") {
            // move left
            break;
        }
        else if (input == "right") {
            // move right
            break;
        }
        else if (input == "interactup") {
            // player interact with the object above them
        }
        else if (input == "interactdown") {
            // player interact with the object below them
        }
        else if (input == "interactleft") {
            // player interact with the object to the left of them
        }
        else if (input == "interactright") {
            // player interact with the object to the right of them
        }
        cin >> input;
    }

}
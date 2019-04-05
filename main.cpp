#include "Game.hpp"
#include <iostream>

int main() {
    string input;
    Game gameObj;
    
    // gameObj.initializeGame();

    gameObj.renderUI();

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
        cin >> input;
    }
    // cin >> input;
    // while (input != "exit") {
    //     if (input == "up") {
    //         // move up
            
    //     }
    //     else if (input == "down") {
    //         // move down
            
    //     }
    //     else if (input == "left") {
    //         // move left
            
    //     }
    //     else if (input == "right") {
    //         // move right
            
    //     }
    //     else if (input == "interactup") {
    //         // player interact with the object above them
    //     }
    //     else if (input == "interactdown") {
    //         // player interact with the object below them
    //     }
    //     else if (input == "interactleft") {
    //         // player interact with the object to the left of them
    //     }
    //     else if (input == "interactright") {
    //         // player interact with the object to the right of them
    //     }

    //     gameObj.forwardTime();
        
    //     gameObj.renderUI();
    //     cin >> input;
    // }
    return 0;
}
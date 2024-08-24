#include "gameController.h"
#include "dialogue.h"
#include <iostream>
#include <stdexcept>
#include <string>

std::string nameSelection() {
    std::cout << "Enter player 1's name: ";
    std::string player{};
    std::cin >> player;

    std::cout << "Welcome, " << player << "!\n";
    return player;
}

size_t moveSelection(std::string playerName) {
    bool isValidNum{ false };
    size_t moveNum{};

    //Input handler
    while (!isValidNum) {
        std::cout << playerName << ", choose a number 1-9 to place a piece: ";
        std::cin >> moveNum;

        try {
            if (board[moveNum - 1] != ' ') {
                throw moveNum;  // Board position already occupied
            }
            isValidNum = true;
        }
    
        catch (size_t moveNum) {
            std::cout << "There is already a piece on " << moveNum << '\n';
        }
    }
    return moveNum;
}

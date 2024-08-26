#include "gameController.h"
#include "dialogue.h"
#include <iostream>
#include <stdexcept>
#include <string>

int constexpr boardLimit = 9;

std::string nameSelection() {
    std::cout << "Enter player's name: ";
    std::string player{};
    std::cin >> player;

    std::cout << "Welcome, " << player << "!\n";
    return player;
}

size_t moveSelection(std::string playerName) {
    size_t moveNum{};

    //Input handler
    while (true) {
        while (true) {
            try {
                std::cout << playerName << ", choose a number 1-9 to place a piece: ";
                std::cin >> moveNum;
                if (moveNum > boardLimit || boardLimit - moveNum < 0) {
                    throw moveNum;
                }
                break;
            }
            
            catch (size_t moveNum) {
                std::cout << "Please select a number between 1-9, not " << moveNum << '\n';
            }
        }

        try {
            if (board[moveNum - 1] != ' ') {
                throw moveNum;  // Board position already occupied
            }
            break;
        }
    
        catch (size_t moveNum) {
            std::cout << "There is already a piece on " << moveNum << '\n';
        }
    }
    return moveNum;
}

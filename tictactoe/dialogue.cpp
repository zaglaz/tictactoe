#include "gameController.h"
#include "dialogue.h"
#include <iostream>
#include <string>

std::string nameSelection()
{
    std::cout << "Enter player 1's name: ";
    std::string player{};
    std::cin >> player;

    std::cout << "Welcome, " << player << "!\n";
    return player;
}

size_t moveSelection(std::string playerName)
{
    std::cout << playerName << ", choose a number 1-9 to place a piece: ";
    size_t moveNum{};
    std::cin >> moveNum;
    return moveNum;
}

#include "gameController.h"
#include "dialogue.h"
#include <iostream>
#include <string>

void intro()
{
    std::cout
            << "Welcome to Tic-Tac-Toe.\n"
            << "The objective is to get three pieces in a row diagonally, horizontally, or vertically before your opponent.\n"
            << "Select where to add a piece with numbers 1 through 9, as so: \n"
            << "|1|2|3|\n|4|5|6|\n|7|8|9|\nGood Luck!\n";
}

std::string nameSelection()
{
    std::cout << "Enter player 1's name: ";
    std::string player{};
    std::cin >> player;

    std::cout << "Welcome, " << player << "!\n";
    return player;
}

int moveSelection(std::string playerName)
{
    std::cout << playerName << ", choose a number 1-9 to place a piece: ";
    int moveNum{};
    std::cin >> moveNum;
    return moveNum;
}

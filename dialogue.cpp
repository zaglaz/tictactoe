#include "dialogue.h"
#include <iostream>
#include <string>

void intro()
{
    std::cout
            << "Welcome to Tic-Tac-Toe.\n"
            << "The objective is to get three pieces in a row diagonally, horizontally, or vertically before your opponent.\n"
            << "Select where to add a piece with numbers 1 through 9, as so: \n"
            << "|1|2|3|\n|4|5|6|\n|7|8|9|\nGood Luck!";
}

void nameSelection()
{
    std::cout << "Enter player 1's name: ";
    std::string player1{};
    std::cin >> player1;

    std::cout << "Enter player 2's name: ";
    std::string player2{};
    std::cin >> player2;

    std::cout << "Welcome, " << player1 << " and " << player2 << '!';
}

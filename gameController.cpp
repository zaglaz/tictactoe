#include "gameController.h"
#include <iostream>
#include <string>

std::string board{"         "};

void addPiece(int boardNum, int turnCount)
{
    //Odd number turns (first player) will use X as a marker, with the other using O.
    if (turnCount % 2 == 1)
    {
        board[boardNum - 1] = 'X';
    }
    else
    {
        board[boardNum - 1] = 'O';
    }
}

void renderBoard()
{
    for (int i{0}; i <= board.length(); ++i)
    {
        if (i % 3 == 0 && i != 0 && i != board.length())
        {
            std::cout << "|\n";
        }
        std::cout << '|' << board[i];
    }
    std::cout << '\n';
}

bool checkTurnCount(int turnCount)
{
    if (turnCount >= 9)
    {
        std::cout << "Game over! no more possible moves.";
        return true;
    }
    else return false;
}

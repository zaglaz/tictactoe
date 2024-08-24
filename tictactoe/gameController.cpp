#include "gameController.h"
#include <iostream>
#include <string>

std::string board{"         "};

void addPiece(size_t boardNum, int turnCount)
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
    for (size_t i{0}; i <= board.length(); ++i)
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

bool winCondition(char x, char y, char z)
{
    return (x == 'X' && y == 'X' && z == 'X' || x == 'O' && y == 'O' && z == 'O');
}

bool searchForWin()
{
    for (size_t j{1}; j <= 3; ++j)
    {
        if (winCondition(board[j-1], board[j+2], board[j+5]) || winCondition(board[(j*3)-3], board[(j*3)-2], board[(j*3)-1])
                || winCondition(board[0], board[4], board[8])
                || winCondition(board[2], board[4], board[6]))
        {
            std::cout << "We have a winner!!";
            return true;
        }
    }
    return false;
}

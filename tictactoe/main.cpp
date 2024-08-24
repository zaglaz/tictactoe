#include "dialogue.h"
#include "gameController.h"
#include <string>
#include <iostream>

int main() {
    std::cout
        << "Welcome to Tic-Tac-Toe.\n"
        << "The objective is to get three pieces in a row diagonally, horizontally, or vertically before your opponent.\n"
        << "Select where to add a piece with numbers 1 through 9, as so: \n"
        << "|1|2|3|\n|4|5|6|\n|7|8|9|\nGood Luck!\n";
    std::string player1{nameSelection()};
    std::string player2{nameSelection()};

    bool gameEnd{false};
    int turns{0};

    while (!gameEnd) {

        ++turns;
        addPiece(moveSelection(player1), turns);
        renderBoard();

        if (searchForWin() || gameIsTie(turns)) {
            gameEnd = !gameEnd;
            continue;
        }

        ++turns;
        addPiece(moveSelection(player2), turns);
        renderBoard();

        if (searchForWin() || gameIsTie(turns)) {
            gameEnd = !gameEnd;
            continue;
        }
    }
    return 0;
}

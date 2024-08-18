#include "dialogue.h"
#include "gameController.h"
#include <string>
#include <iostream>

int main()
{
    intro();
    std::string player1{nameSelection()};
    std::string player2{nameSelection()};

    bool gameEnd{false};
    int turns{0};

    /*TODO: Make function to contain all the processes done per player turn and use it instead, eliminating the includes
    by placing the definition in a seperate file and declaration in a separate header. Also find ways to */

    while (!gameEnd)
    {
        turns++;
        addPiece(moveSelection(player1), turns);
        renderBoard();
        if (checkTurnCount(turns)) {
            gameEnd = !gameEnd;
            continue;
        }
        else if (searchForWin()){
            gameEnd = !gameEnd;
            continue;
        }


        turns++;
        addPiece(moveSelection(player2), turns);
        renderBoard();
        if (checkTurnCount(turns)) {
            gameEnd = !gameEnd;
            continue;
        }
        else if (searchForWin()){
            gameEnd = !gameEnd;
            continue;
        }
    }
    return 0;
}

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

    while (!gameEnd)
    {
        ++turns;
        addPiece(moveSelection(player1), turns);
        renderBoard();

        if (searchForWin() || checkTurnCount(turns))
        {
            gameEnd = !gameEnd;
            continue;
        }

        ++turns;
        addPiece(moveSelection(player2), turns);
        renderBoard();

        if (searchForWin() || checkTurnCount(turns))
        {
            gameEnd = !gameEnd;
            continue;
        }
    }
    return 0;
}

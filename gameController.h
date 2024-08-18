#include <string>
#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

void addPiece(int boardNum, int turnCount);
void renderBoard();
bool checkTurnCount(int turnCount);
bool winCondition(char x, char y, char z);
bool searchForWin();

#endif // GAMECONTROLLER_H

#pragma once

void addPiece(size_t boardNum, int turnCount);
void renderBoard();
bool gameIsTie(int turnCount);
bool winCondition(char x, char y, char z);
bool searchForWin();

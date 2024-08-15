#include "dialogue.h"

int main()
{
    bool exit{false};

    while (!exit)
    {
        intro();
        nameSelection();

        exit = true;
    }
    return 0;
}

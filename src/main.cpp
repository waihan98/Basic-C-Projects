#include "ttt.h"
char tttBoard[3][3];

int main(void)
{
    initializeBoard(tttBoard);
    displayBoard(tttBoard);
    return 0;
}
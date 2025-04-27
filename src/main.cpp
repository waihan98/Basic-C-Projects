#include "ttt.h"
char tttBoard[3][3];
char playerx = 'X';
char playero = 'O';
int turn = 0;
char decision = 0;

int main(void)
{
    initializeBoard(tttBoard);
    displayBoard(tttBoard);
    while(isBoardFull != 1)
    {
        if(turn%2 == 0)
        {
            std::cout<<"Player 1's turn! Where would you like to place down your X?\n"<<"Choose from 1 to 9"<<std::endl;
            std::cin>>decision;
            //todo calculate the decision on where the col and row will be
            makeMove(tttBoard,,,playerx);
        }
        else if(turn%2 == 1)
        {
            
        }
        isBoardFull(tttBoard);
    }
    
    return 0;
}
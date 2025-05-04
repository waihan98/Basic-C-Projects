#include "ttt.h"
#include <iostream>
char tttBoard[3][3];
char playerx = 'X';
char playero = 'O';
int turn = 0;
char decision = 0;
bool win = 0;

int main(void)
{
    initializeBoard(tttBoard);
    displayBoard(tttBoard);
    while(isBoardFull(tttBoard) != 1)
    {
        if(turn == 0)
        {
            std::cout<<"Player 1's turn! Where would you like to place down your X?\n"<<"Choose from 1 to 9"<<std::endl;
            std::cin>>decision;
            //todo calculate the decision on where the col and row will be
            if(decision > 48 && decision < 58)
            {
                int row, col;
                int numdecision = decision - '0';
                row = (numdecision-1) / 3;
                col = (numdecision-1) % 3;
                if(isSpotTaken(tttBoard,row,col))
                {
                    std::cout<<"Spot Taken!"<<std::endl;
                }
                else
                {
                    makeMove(tttBoard,row,col,playerx);
                    displayBoard(tttBoard);
                    turn ^= 1;
                }
            }
        }
        else if(turn == 1)
        {
            std::cout<<"Player 2's turn! Where would you like to place down your O?\n"<<"Choose from 1 to 9"<<std::endl;
            std::cin>>decision;
            int row, col;
            int numdecision = decision - '0';
            row = (numdecision-1) / 3;
            col = (numdecision-1) % 3;
            if(isSpotTaken(tttBoard,row,col))
            {
                std::cout<<"Spot Taken!"<<std::endl;
            }
            else
            {
                makeMove(tttBoard,row,col,playero);
                displayBoard(tttBoard);
                turn ^= 1;
            }
        }
        if(checkWinner(tttBoard) == 'X') 
        {
            std::cout<<"X Wins!"<<std::endl;
            break;
        }
        if(checkWinner(tttBoard) == 'O')
        {
            std::cout<<"O Wins!"<<std::endl;
            break;
        } 
        if(isBoardFull(tttBoard))std::cout<<"Board is full, No one Wins :("<<std::endl;
    }
    
    return 0;
}
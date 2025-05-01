#include "ttt.h"
#include <iostream>

void initializeBoard(char board[3][3])
{
    char no = '1';
    std::cout << "Welcome to Tic Tac Toe!" << std::endl;
    for(int i = 0; i < 3; i ++)
    {
        for(int x = 0; x < 3; x ++)
        {
            board[i][x] = no;
            no++;
        }
    }
}

// Function to display the current board
void displayBoard(const char board[3][3])
{
    for(int i = 0; i < 3; i ++)
    {
        for(int x = 0; x < 3; x ++)
        {
            if(x<2)std::cout<<board[i][x]<<" | ";
            else
            {
                std::cout<<board[i][x];
            }
        }
        if(i < 2)
        {
            std::cout<<"\n"<<"----------";
            std::cout<<std::endl;
        }
        else std::cout<<std::endl;
    }
}

// Function to make a move
bool makeMove(char board[3][3], int row, int col, char player)
{
    board[row][col] = player;
    return 1;
}

// Function to check for a winner
char checkWinner(const char board[3][3])
{

}

// Function to check if the board is full (draw)
bool isBoardFull(const char board[3][3])
{

}
bool isSpotTaken(const char board[3][3], int row, int col)
{
    if(board[row][col] == 'O' || board[row][col] == 'X') return 1;
    else return 0;
}
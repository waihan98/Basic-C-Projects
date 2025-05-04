// tic_tac_toe.h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

// Function to initialize the game board
void initializeBoard(char board[3][3]);

// Function to display the current board
void displayBoard(const char board[3][3]);

// Function to make a move
bool makeMove(char board[3][3], int row, int col, char player);

// Function to check for a winner
char checkWinner(const char board[3][3]);

// Function to check if the board is full (draw)
bool isBoardFull(const char board[3][3]);

bool isSpotTaken(const char board[3][3], int row, int col);
#endif // TIC_TAC_TOE_H

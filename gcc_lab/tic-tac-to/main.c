#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

// Global vairables instead of sending pointers
char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';




void resetBoard();
void printBoard();
int checkFreeSpace(); // If return 0, there's no place ot move.
void playerMove(); // when it's player time to move
void computerMove(); // when it's computer time to move
void checkWinner();
void printWinner(char);


int main() {

 char winner = ' ';
 resetBoard();
 printBoard();

 return 0;	
}

void resetBoard()
{
 for (int i =0; i < 3; i++) {
  for (int j =0; j < 3; j++) {
	board[i][j] = ' '; // Clearing the board with empty space

   }
 }
}

void printBoard()
{
 	printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
	printf("\n---|---|---\n");
	printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
	printf("\n---|---|---\n");
 	printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
	printf("\n");
}

int checkFreeSpace()
{


}

void playerMove()
{


}
void computerMove()
{



}

void checkWinner()
{


}

void printWinner(char winner)
{


}



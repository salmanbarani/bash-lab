#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

// Global vairables instead of sending pointers
char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

void resetBoard(); // Clear the board
void printBoard(); // Showing the board
int checkFreeSpaces(); // If return 0, there's no place ot move.
void playerMove(); // When it's player time to move
void computerMove(); // When it's computer time to move
char checkWinner(); // Returns winner or ' ' for no winner
void printWinner(char); // Prints the winner


int main() {

char response;

do {
	char winner = ' ';
	resetBoard();

	while (winner == ' ' && checkFreeSpaces() != 0) {
		printBoard();
		
		// Player move	
		playerMove(); 
		winner = checkWinner();

		if (winner != ' ' || checkFreeSpaces() == 0) {
			break;
		}

		// computer move
		computerMove();
		winner = checkWinner();

		if (winner != ' ' || checkFreeSpaces() == 0) {
					break;
		}	
	}
	printBoard();
	printWinner(winner);	

	printf("\nWanna play again? (Y/N)");
	scanf(" %c", &response);
	response = toupper(response);

} while(response == 'Y');

printf("Thanks, it was a good play!\n");

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
	printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
	printf("\n---|---|---\n");
 	printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
	printf("\n");
}

int checkFreeSpaces()
{
  // Returns available free spaces
  int freeSpaces = 9;
  for (int i=0; i < 3; i++) {
    for (int j=0; j < 3; j++) {
	if (board[i][j] != ' ') {
		freeSpaces--;		
	}	
    }
  }
  return freeSpaces;
}

void playerMove()
{
 int x, y;
 do {

 	printf("Enter row #(1-3): ");
 	scanf("%d", &x);
 	x--; // decrement to reflect it in board

 	printf("Enter column #(1-3): ");
 	scanf("%d", &y);
 	y--; // decrement to reflect it in board

 	if (board[x][y] != ' ') {
   	  printf("Invalid move, already ocupied\n");
 	} else {
   	  board[x][y] = PLAYER;
	  break; // Break the loop if player entered the valid move
 	}
  } while (board[x][y] != ' ');
}

void computerMove()
{
 // create seeds to generate random number.
 srand(time(0));
 int x, y;
 if (checkFreeSpaces() > 0 ) {
 	
	do {
		x = rand() % 3;
		y = rand() % 3;
	} while(board[x][y] != ' '); // Exit when there's a ocupied place
	
	board[x][y] = COMPUTER;
 }
 else {
	printWinner(' ');
 } 
}

char checkWinner()
{
  // Checking Horizontaly
  for (int i=0; i < 3; i++) {
    if (board[i][0] == board[i][1] && board[i][0] == board[i][2]) {
	return board[i][0];
    }
  }

  // Checking Vertically
  for (int i = 0 ; i < 3; i++) {
    if (board[0][i] == board[1][i] && board[0][i] == board[2][i]) {
	return board[0][i];
    } 
  }

  // Checking Diagnals
  if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) {
	return board[0][0];
  }
  if (board[0][2] == board[1][1] && board[0][2] == board[2][0]) {
	return board[0][2];
  }
  return ' '; // meaning there's no winner
}
void printWinner(char winner)
{
	if (winner == PLAYER) {
		printf("Congrates!!! you won the match\n");
	}

	else if (winner == COMPUTER) {
		printf("Game Over!!!\n");
	}

	else {
		printf("Tie!!! No winner\n");
	}
}



#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>
#include "utils.h"
using std::cout;
using std::endl;
using std::cin;
using namespace std::chrono_literals;
using namespace std::this_thread;

void main()
{
	Player playerOne = { false, 0, 0, 'x' };
	Player playerTwo = { false, 0, 0, 'y' };

	bool gameOver = false;
	char display[3][3] =
	{
		{ '1','2','3' },
		{ '4','5','6' },
		{ '7','8','9' },
	};

	cout << "Welcome to Tic-Tac-Toe!" << endl;
	CreateBoard(display);
	cout << "Player 1: x" << endl;
	cout << "Player 2: y" << endl;
	while (!gameOver)
	{
		// Game loop
		playerOne.input = GetPlayer1Input(playerOne);
		// Update the game board's array with player one's input.
		switch (playerOne.input)
		{
		case 1:
			display[0][0] = 'x';
			break;
		case 2:
			display[0][1] = 'x';
			break;
		case 3:
			display[0][2] = 'x';
			break;
		case 4:
			display[1][0] = 'x';
			break;
		case 5:
			display[1][1] = 'x';
			break;
		case 6:
			display[1][2] = 'x';
			break;
		case 7:
			display[2][0] = 'x';
			break;
		case 8:
			display[2][1] = 'x';
			break;
		case 9:
			display[2][2] = 'x';
			break;
		}
		// Clear console screen.
		ClearScreen();
		// Display board with player one's input.
		CreateBoard(display);
		// Get player two's input.
		playerTwo.input = GetPlayer2Input(playerTwo);
		// Update the game board with player two's input.
		switch (playerTwo.input)
		{
		case 1:
			display[0][0] = 'y';
			break;
		case 2:
			display[0][1] = 'y';
			break;
		case 3:
			display[0][2] = 'y';
			break;
		case 4:
			display[1][0] = 'y';
			break;
		case 5:
			display[1][1] = 'y';
			break;
		case 6:
			display[1][2] = 'y';
			break;
		case 7:
			display[2][0] = 'y';
			break;
		case 8:
			display[2][1] = 'y';
			break;
		case 9:
			display[2][2] = 'y';
			break;
		}
		ClearScreen();
		CreateBoard(display);
	}
}
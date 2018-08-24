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

int main()
{
	Player playerOne = { false, 0, 0, 'x' };
	Player playerTwo = { false, 0, 0, 'o' };

	bool gameOver = false;
	int counter = 0;
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
			if (display[0][0] != playerTwo.token)
			{
				display[0][0] = 'x';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 2:
			if (display[0][1] != playerTwo.token)
			{
				display[0][1] = 'x';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 3:
			if (display[0][2] != playerTwo.token)
			{
				display[0][2] = 'x';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 4:
			if (display[1][0] != playerTwo.token)
			{
				display[1][0] = 'x';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 5:
			if (display[1][1] != playerTwo.token)
			{
				display[1][1] = 'x';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 6:
			if (display[1][2] != playerTwo.token)
			{
				display[1][2] = 'x';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 7:
			if (display[2][0] != playerTwo.token)
			{
				display[2][0] = 'x';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 8:
			if (display[2][1] != playerTwo.token)
			{
				display[2][1] = 'x';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 9:
			if (display[2][2] != playerTwo.token)
			{
				display[2][2] = 'x';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		}
		// Check win condition.
		playerOne.win = CheckForWin(display, playerOne.token);
		counter++;
		// Check for a draw condition.
		if (counter == 9 && !gameOver)
		{
			cout << "Draw!" << endl;
			gameOver = true;
			sleep_for(1.5s);
			return 0;
		}
		// Clear console screen.
		ClearScreen();
		// Display board with player one's input.
		CreateBoard(display);
		if (playerOne.win)
		{
			cout << "Player one wins the game!" << endl;
			gameOver = true;
			sleep_for(1.5s);
			return 0;
		}
		// Get player two's input.
		playerTwo.input = GetPlayer2Input(playerTwo);

		// Update the game board with player two's input.
		switch (playerTwo.input)
		{
		case 1:
			if (display[0][0] != playerOne.token)
			{
				display[0][0] = 'o';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 2:
			if (display[0][1] != playerOne.token)
			{
				display[0][1] = 'o';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 3:
			if (display[0][2] != playerOne.token)
			{
				display[0][2] = 'o';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 4:
			if (display[1][0] != playerOne.token)
			{
				display[1][0] = 'o';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 5:
			if (display[1][1] != playerOne.token)
			{
				display[1][1] = 'o';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 6:
			if (display[1][2] != playerOne.token)
			{
				display[1][2] = 'o';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 7:
			if (display[2][0] != playerOne.token)
			{
				display[2][0] = 'o';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 8:
			if (display[2][1] != playerOne.token)
			{
				display[2][1] = 'o';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		case 9:
			if (display[2][2] != playerOne.token)
			{
				display[2][2] = 'o';
			}
			else
			{
				counter--;
				cout << "That place is already occupied." << endl;
				sleep_for(0.5s);
			}
			break;
		}
		// Check win condition
		playerTwo.win = CheckForWin(display, playerTwo.token);
		counter++;
		ClearScreen();
		CreateBoard(display);
		if (playerTwo.win)
		{
			cout << "Player two wins the game!" << endl;
			gameOver = true;
			sleep_for(1.5s);
			return 0;
		}
	}
}
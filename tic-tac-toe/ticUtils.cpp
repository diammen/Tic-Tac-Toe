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

void CreateBoard(char display[3][3])
{
	cout << "o---oo---oo---o" << endl;
	for (int i = 0; i < 3; ++i)
	{
		for (int k = 0; k < 3; ++k)
		{
			cout << "| " << display[i][k] << " |";
		}
	cout << " " << endl;
	cout << "o---oo---oo---o" << endl;
	}
}

// Get player 1's input.
int GetPlayer1Input(Player a)
{
	// Ask for input
	cout << "Please enter a number from 1-9: " << endl;;
	cin >> a.input;

	// Go into error loop if input is not an integer
	while (cin.fail() || a.input < 1 || a.input > 9)
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Invalid input. Please input a number from 1-9." << endl;
		cin >> a.input;
	}
	return a.input;
}

// Get player 2's input.
int GetPlayer2Input(Player b)
{

	// Ask for input
	cout << "Please enter a number from 1-9: " << endl;;
	cin >> b.input;

	// Go into error loop if input is invalid
	while (cin.fail() || b.input < 1 || b.input > 9)
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Invalid input. Please input a number from 1-9." << endl;
		cin >> b.input;
	}
	return b.input;
}

// Check to see if anyone won.
bool CheckForWin(char display[3][3], char token)
{
	// Check for horizontal matches
	for (int i = 0; i < 3; ++i)
	{
		if (display[i][0] == token && display[i][1] == token && display[i][2] == token)
		{
			return true;
		}
	}

	// Check diagonal
	if ((display[0][0] == token && display[1][1] == token && display[2][2] == token) ||
		 display[0][2] == token && display[1][1] == token && display[2][0] == token)
	{
		return true;
	}

	// Check vertical
	for (int i = 0; i < 3; ++i)
	{
		if (display[0][i] == token && display[1][i] == token && display[2][i] == token)
		{
			return true;
		}
	}
	return false;
}
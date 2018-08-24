#pragma once

struct Player
{
	bool win;
	int points;
	int input;
	char token;
};

void ClearScreen();

void CreateBoard(char display[3][3]);

int GetPlayer1Input(Player a);

int GetPlayer2Input(Player b);
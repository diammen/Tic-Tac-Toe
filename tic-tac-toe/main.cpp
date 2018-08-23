#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <chrono>
#include <thread>
#include "utils.h"
using std::cout;
using std::endl;
using std::cin;
using std::vector;
using namespace std::chrono_literals;
using namespace std::this_thread;

void main()
{
	// 14 tabs, 3 spaces to center text
	cout << "														   Tic-Tac-Toe" << endl;
	sleep_for(1s);
	ClearScreen();
	cout << "" << endl;
	cout << 
R"(
				 _     _    _
				| |   | |  | |
				| |   | |  | |
				| |   | |  | |
				| |_ _| |  | |
				|  _ _  |  | |
				| |   | |  | |
				| |   | |  | |
				| |   | |  | |
				|_|   |_|  |_|)";
	sleep_for(1s);
}
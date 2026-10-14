// Library and improvments
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

// Variables
int option = 1;
float Timer = 0;
float StartTime = 0;
float Duration = 0;
bool InUse = true;
bool TimerComplete = false;

int main() // main function
{
	system("color e");
	while (InUse == true) // Program Run loop
	{
		// Command Menu
		cout << "<---- Command List ----> \n";
		cout << "1 ----- Set Timer -----> \n";
		cout << "2 --- Close Program ---> \n";
		cin >> option;

		// Command Logic
		switch (option)
		{
		case 1:
		{
			cout << "<---- Please enter the timer length ---->\n";
			cin >> Timer;
			TimerComplete = false;
			StartTime = clock();
			while (TimerComplete == false)
			{
				Duration = clock() - StartTime;
				if (Duration / CLOCKS_PER_SEC == Timer)
				{
					TimerComplete = true;
					cout << "--- Timer is done ---\n";
					MessageBeep(20);
					MessageBoxA(0, "Timer is complete", "Timer Program", 0);
				}
			}
			break;
		}
		case 2:
		{
			cout << "<---- TERMINATING THE PROGRAM ---- --- ---- -- -";
			InUse = false;
			break;
		}
		default:
			cout << "---- INVALID COMMAND ----\n";
			break;
		}
	}
}
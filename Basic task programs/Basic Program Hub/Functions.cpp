#include "Function.h"
// ALL Functions declarations

// Core Functions
int ProgramSelectLoop(bool Active, int option)
{
	while (Active == true)
	{
		// Player Command List
		cout << "<----- PROGRAM LIST ----->\n";
		cout << "1 -- Task List Program -- \n";
		cout << "2 ---- Timer Program ---- \n";
		cout << "0 -- Close the Terminal -- \n";
		cin >> option; // player input
		switch (option) // Player Option Loader
		{
		case 0:
		{
			Active = false;
			break;
		}
		case 1: // todo list
		{
			return option;
			break;
		}
		case 2: // timer
		{
			Active = false;
			return option;
			break;
		}
		default: // if this prints either the wrong command was entered or this shit is broke
		{
			cout << "something broke or invalid command \n";
			break;
		}
		}
	}
}

void TimerFunc(int TimerOption, float Timer, float StartTime, float Duration, bool InUse, bool TimerComplete)
{
	while (InUse == true) // Program Run loop
	{
		// Command Menu
		cout << "<---- Command List ----> \n";
		cout << "1 ----- Set Timer -----> \n";
		cout << "2 --- Close Program ---> \n";
		cin >> TimerOption;
		
		// Command Logic
		switch (TimerOption)
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
			cout << "<---- TERMINATING THE PROGRAM ---- --- ---- -- -\n\n";
			InUse = false;
			break;
		}
		default:
			cout << "---- INVALID COMMAND ----\n";
			break;
		}
	}
}
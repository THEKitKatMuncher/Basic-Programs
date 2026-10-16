
//Includes
#include "Function.h"
#include <fstream>

//Timer Function
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
		case 1: // Timer Active
		{
			cout << "<---- Please enter the timer length ---->\n";
			cin >> Timer; // player input
			TimerComplete = false; // set to false so new timer can be set
			StartTime = clock(); // set start time to current run time
			while (TimerComplete == false) // loop till timer met
			{
				Duration = clock() - StartTime; // checks time
				if (Duration / CLOCKS_PER_SEC == Timer) // check if timer complete
				{
					TimerComplete = true; // sets timer complete
					cout << "--- Timer is done ---\n"; // informs user of timer is complete
					MessageBeep(20); // makes a noise on a persons device
					MessageBoxA(0, "Timer is complete", "Timer Program", 0); // makes a new message on persons device
				}
			}
			break;
		}
		case 2: // Return to hub Terminal
		{
			cout << "<---- TERMINATING THE PROGRAM ---- --- ---- -- -\n\n";
			InUse = false;
			break;
		}
		default: // invalid Commands or shits fucked up
			cout << "---- INVALID COMMAND ----\n";
			break;
		}
	}
}
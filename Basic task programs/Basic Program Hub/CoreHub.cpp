
//includes
#include "Function.h"

// Core Functions
int ProgramSelectLoop(bool Active, int option)
{
	while (Active == true)
	{
		// Player Command List
		cout << "<----- PROGRAM LIST ----->\n";
		cout << "1 -- Task List Program -- \n";
		cout << "2 ---- Timer Program ---- \n";
		cout << "3 --- Change the Colour ---\n";
		cout << "0 -- Close the Terminal -- \n";
		cin >> option; // player input
		switch (option) // Player Option Loader
		{
		case 0:
		{
			Active = false;
			return option;
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

		case 3: // Colour
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
// Includes
#include "Console Functions.h"
#include "Console Variables.h"
//Select Function
int ConOptionSelect(int SelectOption)
{
	while (SelectOption != 0)
	{
		//Player Command List Options
		cout << " <----- PROGRAM LIST ----->\n";
		cout << "1 -- Task List Program -- \n";
		cout << "2 ---- Timer Program ---- \n";
		cout << "3 --- Change the Colour ---\n";
		cout << "0 -- Close the Terminal -- \n";
		cin >> SelectOption; // Player Option Input

		switch (SelectOption) // Player Option Logic
		{
			case 1: // TODO OPTION
			{
				return SelectOption;
				break;

			}

			case 2: // TIMER OPTION
			{
				return SelectOption;
				break;
			}

			case 3: // COLOUR OPTION
			{
				return SelectOption;
				break;
			}

			case 0: // CLOSE PROGRAM
			{
				return SelectOption;
				break;
			}

			default: // If THIS RUNS IT IS BROKEN FIX THE DAMN CODE or your stupid and cant input a valid command
			{
				cout << "Something broke here or and invalid command was input\n";
				break;
			}
		}
	}
}
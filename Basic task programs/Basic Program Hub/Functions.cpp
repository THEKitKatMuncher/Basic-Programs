#include "Function.h"
#include <fstream>
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

void TODOTASK(int TaskOption, int TaskCount, string TASKARRAY[])
{
	while (TaskOption != 0)
	{

		//Command Menu
		cout << "---- Command List ----\n";
		cout << "1 - To Add A New Task\n";
		cout << "2 - To View The Task List\n";
		cout << "3 - To Delete A Task From The List\n";
		cout << "0 - To Terminate The Program\n";
		cin >> TaskOption;

		//Command Desicion Logic
		switch (TaskOption)
		{
		case 1:
		{
			// Adding a Task
			if (TaskCount > 9)
			{
				cout << "--- TASK LIST IS FULL ---\n";
				MessageBeep(20);
			}
			else
			{
				cout << "--- ENTER A NEW TASK ---\n";
				cin.ignore();
				getline(cin, TASKARRAY[TaskCount]);
				TaskCount++;
			}
			break;
		}

		case 2:
		{
			system("cls");
			cout << " TASKS TO DO:\n";
			cout << "---------------\n";

			for (int i = 0; i < TaskCount; i++)
			{
				cout << "Task " << i << " --- " << TASKARRAY[i] << "\n";
			}
			break;
		}

		case 3:
		{
			system("cls");
			cout << " TASKS TO DO:\n";
			cout << "---------------\n";

			for (int i = 0; i < TaskCount; i++)
			{
				cout << "Task " << i << " --- " << TASKARRAY[i] << "\n";
			}

			int del_task = 0;
			cout << "Enter a task to delete: ";
			cin >> del_task;

			if (del_task < 0 or del_task > 9 or TaskCount < del_task)
			{
				cout << "Invalid task No. \n";
				MessageBeep(20);
				break;
			}
			else
			{
				for (int i = del_task; i < TaskCount - 1; i++)
				{
					TASKARRAY[i] = TASKARRAY[i + 1];
				}
			}
			TaskCount--;
			break;
		}

		case 0:
		{
			break;
		}

		}
	}
}

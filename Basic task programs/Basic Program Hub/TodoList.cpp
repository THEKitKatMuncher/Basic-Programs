
//Includes
#include "Function.h"
#include <fstream>

// TODO Function
void TODOTASK(int TaskOption, int TaskCount, string TASKARRAY[], fstream& TaskList)
{
	while (TaskOption != 0) // Keeps in TODO Till user exits
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
				cout << "--- TASK LIST IS FULL ---\n"; // Error with stack beign full
				MessageBeep(20); // makes noise
			}
			else
			{
				cout << "--- ENTER A NEW TASK ---\n"; 
				cin.ignore();
				getline(cin, TASKARRAY[TaskCount]); // user input is added to array 
				TaskCount++; // increment task
			}
			break;
		}

		case 2:
		{
			system("cls"); // clears screen of text
			cout << " TASKS TO DO:\n";
			cout << "---------------\n";

			for (int i = 0; i < TaskCount; i++) // Prints each task
			{
				cout << "Task " << i << " --- " << TASKARRAY[i] << "\n";
			}
			break;
		}

		case 3:
		{
			system("cls"); // clears screen of text
			cout << " TASKS TO DO:\n";
			cout << "---------------\n";

			for (int i = 0; i < TaskCount; i++)  // Prints each task
			{
				cout << "Task " << i << " --- " << TASKARRAY[i] << "\n";
			}

			int del_task = 0;
			cout << "Enter a task to delete: ";
			cin >> del_task; // user input

			if (del_task < 0 or del_task > 9 or TaskCount < del_task) // validation
			{
				cout << "Invalid task No. \n"; // Error in validation
				MessageBeep(20); // makes noise
				break;
			}
			else
			{
				for (int i = del_task; i < TaskCount - 1; i++) //finds Task entry to delete
				{
					TASKARRAY[i] = TASKARRAY[i + 1]; // shuffle array over and remove correct task
				}
			}
			TaskCount--;
			break;
		}

		case 0:
		{
			cout << "---- Terminating Program - -- --- ----";
			system("cls");
			// saving data
			TaskList.open("Task list.txt", ios::out);// Write To File
			if (TaskList.is_open())
			{
				for (int i = 0; i < TaskCount; i++)
				{
					TaskList << TASKARRAY[i] << '\n';
				}

				TaskList.close();
			}
			else
			{
				cout << "Error saving tasks to file.\n";
				MessageBeep(20);
			}
			break;
		}
		}
	}
}
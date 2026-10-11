
#include <fstream>
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void TaskPrint(string TASKARRAY[], int TaskCount)
{
	cout << " TASKS TO DO:\n";
	cout << "---------------\n";
	for (int i = 0; i < TaskCount; i++)
	{
		cout << "Task " << i << " --- " << TASKARRAY[i] << "\n";
	}
}

int main ()
{
	//Varable Decleration
	system("Color e");
	string TASKARRAY[10] = { "" };
	int TaskCount = 0;
	int Option = 1;

	while (Option != 0)
	{
		// Command Menu
		cout << "---- Command List ----\n";
		cout << "1 - To Add A New Task\n";
		cout << "2 - To View The Task List\n";
		cout << "3 - To Delete A Task From The List\n";
		cout << "4 - To Change Terminal Colour\n";
		cout << "0 - To Terminate The Program\n";
		cin >> Option;

		// Command Logic
		switch (Option)
		{
			case 1:
			{
				if (TaskCount > 9)
				{
					cout << "--- TASK LIST IS FULL ---\n";
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
				TaskPrint(TASKARRAY, TaskCount);
				break;
			}

			case 3:
			{
				system("cls");
				TaskPrint(TASKARRAY, TaskCount);
				int del_task = 0;
				cout << "Enter a task to delete: ";
				cin >> del_task;

				if (del_task < 0 or del_task > 9)
				{
					cout << "Invalid task No. \n";
				break;
				}
				for (int i = del_task; i < TaskCount; i++)
				{
					TASKARRAY[i] = TASKARRAY[i + 1];
				}
				TaskCount--;
			break;

			}
			case 0:
			{
				break;
			}
			default:
			{
				break;
			}
		}
	}
}
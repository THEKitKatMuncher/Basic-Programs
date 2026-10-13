#include <fstream> // File Handler Library
#include <iostream> // Input/Output Handler Library
#include <string> // String libary
#include <windows.h> // Windows API library
using namespace std; 
//functions
int CommandMenu(int Option) //command list and input
{
	cout << "---- Command List ----\n";
	cout << "1 - To Add A New Task\n";
	cout << "2 - To View The Task List\n";
	cout << "3 - To Delete A Task From The List\n";
	cout << "4 - To Change Terminal Colour\n";
	cout << "0 - To Terminate The Program\n";
	cin >> Option;	
	return Option;
}

void COLORSELECT ( const char ColorSelect)
{
	system("color"{ColorSelect});
}
void VIEWTASK(int Task_Count, string Task_Array[])
{
	system("cls");
	cout << " TASKS TO DO:\n";
	cout << "---------------\n";

	for (int i = 0; i < Task_Count; i++)
	{
		cout << "Task " << i << " --- " << Task_Array[i] << "\n";
	}
}

	int main() // main program execution
{
	// variable/system declare
	system("color e");
	string Task_Array[5] = { "" };
	int Task_Count = 0;
	int Option = 1;
	while (Option != 0)
	{
		Option = CommandMenu(Option);
		switch (Option)
		{
			case 1: // Adding Task
			{
				if (Task_Count > 9) // Validation if
				{
					cout << "--- TASK LIST IS FULL ---\n";
					MessageBeep(20);
				}
				else // if validation is true enter task
				{
					cout << "--- ENTER A NEW TASK ---\n";
					cin.ignore();
					getline(cin, Task_Array[Task_Count]);
					Task_Count++;
				}
				break;
			}

			case 2:
			{
				VIEWTASK(Task_Count, Task_Array);
				break;
			}

			case 3:
			{
				system("cls"); // clear screen
				VIEWTASK(Task_Count, Task_Array);//print current task
				int del_task = 0;
				cout << "Enter a task to delete: "; // input 
				cin >> del_task;

				if (del_task < 0 or del_task > 9 or Task_Count < del_task) // validation
				{
					cout << "Invalid task No. \n";
					MessageBeep(20);
					break;
				}
				Task_Count--;
				break;
			}

			case 4:
			{
				system("cls");
				char ColorSelect = 'a';
				cout << "Enter a single character from 1-9 or A-F: ";
				cin >> ColorSelect;
				COLORSELECT(ColorSelect);
				break;
			}
			default:
			{
				cout << "Default\n";
				break;
			}
		}
	}
}

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

int main()
{
    //Varable Decleration
    system("Color e");
    string TASKARRAY[10] = { "" };
    int TaskCount = 0;
    fstream TaskList;
    int Option = 1;
    // loading save data
    TaskList.open("Task list.txt", ios::in);// Read From File
    if (TaskList.is_open())
    {
        string line;
        while (TaskCount < 10 && getline(TaskList, line))
        {
            TASKARRAY[TaskCount] = line;
            TaskCount++;
        }
        TaskList.close();
    }
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
        case 1: // Adding tasks to list
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

        case 2: // viwing the list
        {
            system("cls");
            TaskPrint(TASKARRAY, TaskCount);
            break;
        }

        case 3: // Deleting tasks to the list
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

        case 4: // change terminal colour
        {
            system("cls");
            int ColorSelect = 0;
            cout << "Enter a number between 1 and 16: ";
            cin >> ColorSelect;
            switch (ColorSelect)
            {

            case 1:
            {
                system("color 0");
                break;
            }

            case 2:
            {
                system("color 1");
                break;
            }

            case 3:
            {
                system("color 2");
                break;
            }

            case 4:
            {
                system("color 3");
                break;
            }

            case 5:
            {
                system("color 4");
                break;
            }

            case 6:
            {
                system("color 5");
                break;
            }

            case 7:
            {
                system("color 6");
                break;
            }

            case 8:
            {
                system("color 7");
                break;
            }

            case 9:
            {
                system("color 8");
                break;
            }

            case 10:
            {
                system("color 9");
                break;
            }

            case 11:
            {
                system("color a");
                break;
            }

            case 12:
            {
                system("color b");
                break;
            }

            case 13:
            {
                system("color c");
                break;
            }

            case 14:
            {
                system("color d");
                break;
            }

            case 15:
            {
                system("color e");
                break;
            }

            case 16:
            {
                system("color f");
                break;
            }

            default:
            {
                cout << "Invalid Input\n";
                break;
            }

            break;
            }
            break;
        }

        case 0: // termination
        {
            cout << "---- Terminating Program - -- --- ----";
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
            }
            break;
        }

        default:
        {
            cout << "--- Invalid Command Please Enter A New Command ---";
            break;
        }

        }
    }
}
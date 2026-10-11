// ToDO List.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void TaskPrint(string tasks [], int taskCount)
{
    cout << " TASKS TO DO:\n";
    cout << "---------------\n";
    for (int i = 0; i < taskCount; i++)
    {
        cout << "Task " << i << " --- " << tasks[i] << "\n";
    }
}


int main()
{
    system("color e ");
    string tasks[10] = { "" };
    // counter var --> tasks amount
    int taskCount = 0;

    bool running = 1;
    int option = 0;
    while (running == true)
    {
        //Program menu
        cout << "--- TO DO LIST ---\n"
            << "1 - To Add New Task\n"
            << "2 - Delete A Task\n"
            << "3 - To View Task List\n"
            << "4 - To Change Menu Colour\n"
            << "0 - To Close Program\n";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            if (taskCount > 9)
            {
                cout << "---TASK LIST IS FULL---\n";
            }
            else
            {
                cout << "---ENTER A NEW TASK: ";
                cin.ignore();
                getline(cin, tasks[taskCount]);
                taskCount++;
            }
            break;
        }
        case 2:
        {
            system("cls");
            TaskPrint(tasks, taskCount);
            int del_task = 0;
            cout << "Enter a task to delete: ";
            cin >> del_task;

            if (del_task < 0 or del_task > 9)
            {
                cout << "Invalid task No. \n";
                break;
            }
            for (int i = del_task; i < taskCount; i++)
            {
                tasks[i] = tasks[i + 1];
            }
            taskCount--;
            break;

        }

        case 3:
        {
            system("cls");
            TaskPrint(tasks, taskCount);
            break;
        }
        case 4:
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
            }
            break;
        }
        case 0:
        {
            cout << "Terminating the program - -- --- ---- ----- \n\n\n";
            running = false;
            break;
        }
        default:
        {

            cout << "Invalid Command please try again\n";
            break;

        }
        }

    }

}




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
};

int AddTask(string TASKARRAY[], int TaskCount)
{
    if (TaskCount > 9);
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
    return TASKARRAY;
};

int TaskDelete(string TASKARRAY, int TaskCount)
{
    TaskPrint(TASKARRAY, TaskCount);
    int del_task = 0;
    cout << "Enter a task to delete: ";
    cin >> del_task;

    if (del_task < 0 or del_task > 9)
    {
        cout << "Invalid task No. \n";
        MessageBeep(20);
        break;
    }
    for (int i = del_task; i < TaskCount; i++)
    {
        TASKARRAY[i] = TASKARRAY[i + 1];
    }
    TaskCount--;
};

int ColourChange(int ColorSelect)
{
    system("cls");
    cout << "Enter a number between 1 and 16: ";
    cin >> ColorSelect;
    std::vector<std::string> colours = 
    {
        "color 1",
        "color 2",
        "color 3",
        "color 4",
        "color 5",
        "color 6",
        "color 7",
        "color 8",
        "color 9",
        "color a",
        "color b",
        "color c",
        "color d",
        "color e",
        "color f"
    }
    system(colours[ColorSelect])

    break;
    }
}





int main();
{
    //Varable Decleration
    system("Color e");
    string TASKARRAY[10] = { "" };
    int TaskCount = 0;
    fstream TaskList;
    int Option = 1;
    // loading save data
    TaskList.open("Task list.txt", ios::in); // Read From File
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
            system("cls");
            AddTask(TASKARRAY, TaskCount);
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
            TaskDelete(TASKARRAY, TaskCount);
            TaskPrint(TASKARRAY, TaskCount);
            int del_task = 0;
            cout << "Enter a task to delete: ";
            cin >> del_task;

            if (del_task < 0 or del_task > 9 or TaskCount < del_task)
            {
                cout << "Invalid task No. \n";
                MessageBeep(20);
                break;
            }
            TaskCount--;
            break;
        }

        case 4: // change terminal colour
        {
            system("cls");
            int ColorSelect = 0;
            ColourChange(ColorSelect)
            break;
        }

        case 0: // termination
        {
            cout << "---- Terminating Program - -- --- ----";
            // saving data
            TaskList.open("Task list.txt", ios::out); // Write To File
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

        default:
        {
            cout << "--- Invalid Command Please Enter A New Command ---";
            MessageBeep(20);
            break;
        }

        }
    }
}
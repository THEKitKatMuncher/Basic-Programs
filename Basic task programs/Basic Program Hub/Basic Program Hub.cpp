// Basic Program Hub.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Variable.h"
#include "Function.h"

int main()
{
	system("color 3");
	while (ProgOpt != 0)
	{
		ProgOpt = ProgramSelectLoop(Active, option); // Program select menu
		switch (ProgOpt)
		{

		case 1: // Todo list program
		{
			// loading save data
			TaskList.open("Task list.txt", ios::in);// Read From File
			if (TaskList.is_open())
			{
				string line;
				while (TaskCount < 10 && getline(TaskList, line))
				{
					TaskArray[TaskCount] = line;
					TaskCount++;
				}
				TaskList.close();
			}
			//Todo Functions
			TODOTASK(TaskOption, TaskCount, TaskArray,TaskList); 
			break;
		}
		
		case 2:	
		{
			//Timer Function
			TimerFunc(TimerOption,TimerPrint, Timer, StartTime, Duration, InUse, TimerComplete);
			break;
		}

		case 3:
		{
			//colour function
			ColourFunc();
			break;
		}

		}
	}
}
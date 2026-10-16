// Basic Program Hub.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Variable.h"
#include "Function.h"

int main()
{
	system("color e");
	while (ProgOpt != 0)
	{
		ProgOpt = ProgramSelectLoop(Active, option);
		switch (ProgOpt)
		{

		case 1:
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

			TODOTASK(TaskOption, TaskCount, TaskArray,TaskList);
			break;
		}
		
		case 2:
		{
			TimerFunc(TimerOption, Timer, StartTime, Duration, InUse, TimerComplete);
			break;
		}

		case 3:
		{
			ColourFunc();
			break;
		}

		}
	}
}
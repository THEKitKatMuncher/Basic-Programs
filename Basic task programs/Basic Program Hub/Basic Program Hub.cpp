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
			TODOTASK(TaskOption,TaskCount,TaskArray);
			break;
		}
		case 2:
		{
			TimerFunc(TimerOption, Timer, StartTime, Duration, InUse, TimerComplete);
			break;
		}

		}
	}
}
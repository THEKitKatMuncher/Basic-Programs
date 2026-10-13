// Custom Timer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

float timer = 0;
bool InUse = true;
bool timerComplete = false;
float duration = 0;
float StartTime = 0;

int main()
{
	while (InUse == true)
	{
		cout << "Welcome to the timer program\n";
		cout << "Please enter the timer length enter 0 to close\n";
		cin >> timer;
		timerComplete = false;
		StartTime = clock();
		if (timer == 0)
		{
			InUse = false;
		}
		else
		{
			while (timerComplete == false)
			{
				duration = clock() - StartTime;
				if (duration / CLOCKS_PER_SEC == timer)
				{
					timerComplete = true;
					cout << "Timer is done\n";
					MessageBeep(20);
					MessageBoxA(0, "Timer is complete", "Timer Program", 0);
				}
			}
		}
	}
}
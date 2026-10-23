#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;

int ProgramSelectLoop(bool Active, int option);

void TimerFunc(int TimerOption,float TimerPrint, float Timer, float StartTime, float Duration, bool InUse, bool TimerComplete);

void TODOTASK(int TaskOption, int TaskCount, string TASKARRAY[], fstream& TaskList);

void ColourFunc();
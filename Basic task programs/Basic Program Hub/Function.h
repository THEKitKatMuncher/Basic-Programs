#pragma once
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int ProgramSelectLoop(bool Active, int option);

void TimerFunc(int TimerOption, float Timer, float StartTime, float Duration, bool InUse, bool TimerComplete);
#pragma once

// Core Variables / Includes
#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;
bool Active = true;
int option = 1;
int ProgOpt = 1;

// Timer Variables
int TimerOption = 1;
float Timer = 0;
float StartTime = 0;
float Duration = 0;
bool InUse = true;
bool TimerComplete = false;

// TODO Variables
string TaskArray[10] = { "" };
fstream TaskList;
int TaskCount = 0;
int TaskOption = 1;

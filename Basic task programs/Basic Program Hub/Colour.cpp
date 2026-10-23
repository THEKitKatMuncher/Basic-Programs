
//Includes
#include "Function.h"

// colour change function
void ColourFunc()
{
	system("cls");
	int ColourSelect = 0;
	cout << "Enter a number between 1 and 16 \n";
	cin >> ColourSelect;

    switch (ColourSelect)
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
        MessageBeep(20);
        break;
    }
    }
}
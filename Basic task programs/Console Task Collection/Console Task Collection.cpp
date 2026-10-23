 
// Main Includes
#include "Console Variables.h"
#include "Console Functions.h"

// Main sequence
int main()
{
	system("color 3"); // Sets text colour to blue
	while (ConOption != 0)
	{
		ConOption = ConOptionSelect(ConOption);
	}
}
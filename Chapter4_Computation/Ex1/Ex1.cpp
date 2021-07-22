#include "Ex1.h"
#include <iostream>
#include <string>

using namespace std;

const string disliked = "Broccoli";

void execute(void)
{
	string inputStr;

	while (cin >> inputStr)
	{
		if(inputStr.compare(disliked) == 0)
		{
			cout << "BLEEP" << endl;		
		}		
		else 
		{
			cout << inputStr << endl;
		}
	}
}

#include "Ex4.h"
#include <iostream>
#include <string>

using namespace std;


bool isNumberLessThan(int number)
{
	bool isIllegalArgument = false;

	do 
	{
		string inputStr;

		cout << "Is your number less than " << number << " [y / n]: ";
		cin >> inputStr;

		if (inputStr.compare("y") == 0)
		{
			return true;
		}
		else if (inputStr.compare("n") == 0)
		{
			return false;
		}
		else
		{
			cout << "Illegal response, please try again." << endl;
			isIllegalArgument = true;
		}
	}
	while (isIllegalArgument);
}

void execute(void)
{
	int guessIterCount = 0;
	int minGuessLimit = 1;
	int maxGuessLimit = 100;


	while(minGuessLimit != maxGuessLimit - 1)
	{
		int refNumber = 
			minGuessLimit + (maxGuessLimit - minGuessLimit) / 2;

		if(isNumberLessThan(refNumber))
		{
			maxGuessLimit = refNumber;
		}
		else 
		{
			minGuessLimit = refNumber;
		}

		guessIterCount++;
	}
	
	cout << "Your number is " << minGuessLimit << endl;
	cout << "Number found in " << guessIterCount << " iterations" << endl;
}

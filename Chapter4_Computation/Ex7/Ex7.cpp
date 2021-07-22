#include "Ex7.h"
#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, string> numToStrMapping =
{
	{"0", "zero"},
	{"1", "one"},
	{"2", "two"},
	{"3", "three"},
	{"4", "four"},
	{"5", "five"},
	{"6", "six"},
	{"7", "seven"},
	{"8", "eight"},
	{"9", "nine"}
};

map<string, string> strToNumMapping =
{
	{"zero",	"0"},
	{"one",		"1"},
	{"two",		"2"},
	{"three",	"3"},
	{"four",	"4"},
	{"five",	"5"},
	{"six",		"6"},
	{"seven",	"7"},
	{"eight" ,	"8"},
	{"nine",	"9"}
};

// From https://www.geeksforgeeks.org/modulus-two-float-double-numbers/
double findMod(double a, double b)
{
	double mod;
	// Handling negative values
	if (a < 0)
		mod = -a;
	else
		mod = a;
	if (b < 0)
		b = -b;

	// Finding mod by repeated subtraction

	while (mod >= b)
		mod = mod - b;

	// Sign of result typically depends
	// on sign of a.
	if (a < 0)
		return -mod;

	return mod;
}


double convertStringToNumber(string numStr) 
{
	auto numToStrPos = numToStrMapping.find(numStr);
	auto strToNumPos = strToNumMapping.find(numStr);

	if (numToStrPos != numToStrMapping.end())
	{
		return stoi(numStr);
	}
	else if (strToNumPos != strToNumMapping.end())
	{
		return stoi(strToNumPos->second);
	}
	else
	{
		cout << "Number is not found" << '\n';
	}

	return 0;
}

void execute(void)
{
	double num1;
	double num2;

	string num1Str;
	string num2Str;

	cout << "Enter two double values and character (+, -, *, / or %)\n";

	char op = ' ';

	while (cin >> num1Str >> num2Str >> op) 
	{
		num1 = convertStringToNumber(num1Str);
		num2 = convertStringToNumber(num2Str);

		switch (op) 
		{
		case '+':
			cout << "The sum of " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
			break;
		case '-':
			cout << "The difference of " << num1 << " and " << num2 << " is " << num1 - num2 << endl;
			break;
		case '*':
			cout << "The product of " << num1 << " and " << num2 << " is " << num1 * num2 << endl;
			break;
		case '/':
			cout << "The ratio of " << num1 << " and " << num2 << " is " << num1 / num2 << endl;
			break;
		case '%':
			cout << "The remainder of " << num1 << " and " << num2 << " is " << findMod(num1, num2) << endl;
			break;
		default:
			cout << "Illegal operation" << endl;
			break;
		}
	}
}

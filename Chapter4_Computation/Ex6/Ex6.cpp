#include "Ex6.h"
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


void execute(void)
{
	string inputStr;

	while (cin >> inputStr) 
	{
		auto numToStrPos = numToStrMapping.find(inputStr);
		auto strToNumPos = strToNumMapping.find(inputStr);

		if (numToStrPos != numToStrMapping.end())
		{
			cout << numToStrPos->first << '\t' << numToStrPos->second << '\n';
		}
		else if(strToNumPos != strToNumMapping.end())
		{
			cout << strToNumPos->first << '\t' << strToNumPos->second << '\n';
		}
		else
		{
			cout << "Number is not found" << '\n';
		}
	}
}

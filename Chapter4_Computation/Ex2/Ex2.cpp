#include "Ex2.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double findMedian(vector<double> &vec)
{
	sort(vec.begin(), vec.end());

	// Even number of elements
	if (vec.size() % 2 == 0)
	{
		return (vec[(vec.size() - 1) / 2] + vec[vec.size() / 2]) / 2.0;
	}

	// Odd number of elements
	return vec[vec.size() / 2];
}

void execute(void)
{
	vector<double> temps;
	double temp;

	cout << "Enter elements: " << endl;

	while (cin >> temp)
		temps.push_back(temp);

	cout << "Median: " << findMedian(temps) << endl;
}
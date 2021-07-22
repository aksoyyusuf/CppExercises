#include "Ex3.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

double computeSum(vector<double>& vec)
{
	double sum = 0;

	for (int i = 0; i < vec.size(); ++i) sum += vec[i];

	return sum;
}

void execute(void)
{
	vector<double> temps;
	double temp;

	cout << "Enter distances: " << endl;

	while (cin >> temp)
		temps.push_back(temp);

	double sum = computeSum(temps);

	cout << "Sum: " << sum << endl;
	cout << "Mean: " << sum / temps.size() << endl;
}